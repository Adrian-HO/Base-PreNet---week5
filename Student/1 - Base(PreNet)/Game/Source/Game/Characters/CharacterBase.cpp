// Copyright (c) 2017 GAM1528. All Rights Reserved.

#include "CharacterBase.h"
#include "Game.h"
#include "CharacterBaseAnimation.h"
#include "Net/UnrealNetwork.h"
#include <GameFramework/PlayerController.h>
#include "Gameplay/Health/HealthComponent.h"
#include "Weapons/WeaponBase.h"
#include "Items/ItemBase.h"
#include "Math/UnrealMathUtility.h"
#include "Components/PawnNoiseEmitterComponent.h"

void ACharacterBase::ServerChangeFacing(FVector TargetVector)
{
}

/*
Setup the character defaults
*/
ACharacterBase::ACharacterBase() :
	Health(nullptr),
	SkeletalMesh(nullptr),
	AnimationInstance(nullptr)
{
	PrimaryActorTick.bCanEverTick = true;

	// Set default movement speed.
	MaxWalkSpeed = 140.0f;
	MaxJogSpeed = 280.0f;

	GetCharacterMovement()->MaxWalkSpeed = MaxJogSpeed;

	// Do not update the controller's rotation yaw.
	// Has to be disabled for "Orient Rotation to Movement" to work.
	bUseControllerRotationYaw = false;

	// Rotate the character during movement by default.
	GetCharacterMovement()->bOrientRotationToMovement = true;

	// Character interaction values.
	MaxPickUpDistance = 200.0f;

	// Character weapon handling values.
	CurrentWeapon = nullptr;

	bIsAiming = false;
	bIsFiring = false;

	SetReplicates(true);
	SetReplicateMovement(true);

	NoiseEmitterComponent = CreateDefaultSubobject<UPawnNoiseEmitterComponent>("NoiseEmitter");;
}

/*
Allow actors to initialize themselves on the C++ side
https://api.unrealengine.com/INT/API/Runtime/Engine/GameFramework/AActor/PostInitializeComponents/index.html
*/
void ACharacterBase::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	/* Retrieve the health component. */
	Health = FindComponentByClass<UHealthComponent>();

	//check(Health != nullptr && "Character does not have a health component!");

	/* Subscribe to health component's OnDeath event.*/
	if (Health)
		Health->OnDeath.AddDynamic(this, &ACharacterBase::OnDeath);

	/*Retrieve the skeletal mesh component. */
	SkeletalMesh = GetMesh();
	if (SkeletalMesh != nullptr)
	{
		check(SkeletalMesh != nullptr && "Character does not have a skeletal mesh component!");

		/* Retrieve the animation instance.*/
		AnimationInstance = Cast<UCharacterBaseAnimation>(SkeletalMesh->GetAnimInstance());
		//check(AnimationInstance != nullptr && "Character does not have an animation instance!");
	}
}

void ACharacterBase::BeginPlay()
{
	Super::BeginPlay();
}

/*
In Tick, we will be Controlling the movement states for the Character, as well as setting the Animation States based on the character movement,
Such as while Aiming, Firing the weapon while moving.
*/
void ACharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/* Check if we have a weapon.*/
	bHasWeapon = CurrentWeapon != nullptr;

	/* Handle movement orientation and speed. */
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->MaxWalkSpeed = MaxJogSpeed;

	if (bHasWeapon && (bIsAiming || bIsFiring))
	{
		GetCharacterMovement()->bOrientRotationToMovement = false;

		if (bIsAiming)
			GetCharacterMovement()->MaxWalkSpeed = MaxWalkSpeed;

		if (bIsFiring)
			GetCharacterMovement()->MaxWalkSpeed *= 0.8;

		/* Rotate the character towards the aiming point.*/
		//DECLARE a auto variable called PlayerController and assign it to this Characters Controller. Assign PlayerController as APlayerController 
		auto PlayerController = Cast<APlayerController>(GetController());

		if (PlayerController)
		{
			FVector MouseLocation;
			FVector MouseDirection;
			bool Success = PlayerController->DeprojectMousePositionToWorld(MouseLocation, MouseDirection);
			/* Rotate the character towards the cursor.*/

			if (Success)
			{
				/* Cast the cursor onto a plane. */
				FVector LineBegin = MouseLocation;
				FVector  LineEnd = MouseLocation + MouseDirection * 10000.0f;
				FVector PlaneOrigin = CurrentWeapon->GetMuzzleLocation();
				FVector PlaneNormal = FVector(0.0f, 0.0f, 1.0f);

				/*Find the intersection of a line and an offset plane. Assumes that the line and plane do indeed intersect */
				FVector LookLocation = FMath::LinePlaneIntersection(LineBegin, LineEnd, PlaneOrigin, PlaneNormal);
				// Rotate the cursor toward the intersection of the cursor and the plane.
				FRotator LookRotation = (LookLocation - GetActorLocation()).Rotation();

				LookRotation.Pitch = 0;
				LookRotation.Roll = 0;

				/*Slerp to the new rotation*/
				FRotator rot = FMath::RInterpTo(GetActorRotation(), LookRotation, DeltaTime, 10.0f);
				ChangeFacing(rot.Vector());
			}
		}
	}

	/* Set animation weapon parameters.*/

	AnimationInstance->bHasWeapon = bHasWeapon;
	AnimationInstance->bIsAiming = bIsAiming;


	/* Set animation movement parameters.*/
	float CurrentSpeed = GetVelocity().Size();
	bool bIsMoving = CurrentSpeed > 0.0f && GetCharacterMovement()->IsMovingOnGround();

	AnimationInstance->bIsMoving = bIsMoving;
	AnimationInstance->MovementSpeed = bIsMoving ? CurrentSpeed : 0.0f;

	/* Set animation strafing rotation paremeter.*/
	FVector MovementDirection = GetLastMovementInputVector();
	FVector CharacterDirection = GetActorForwardVector();

	/*We need to set the Strafeing Rotation on the AnimationInstance to blend the movement animation when moving*/
	if (!MovementDirection.IsNearlyZero())
	{

		/*Calculate the Strafing Rotation which is the Arc Tan difference between the Character's Last Movement Direction and Current Movement Direction*/
		float StrafingRotation = FMath::Atan2(MovementDirection.Y, MovementDirection.X) - FMath::Atan2(CharacterDirection.Y, CharacterDirection.X);
		if (FMath::Abs(StrafingRotation) > PI)
		{
			StrafingRotation = (StrafingRotation > 0) ? (StrafingRotation - PI * 2.0f) : ((StrafingRotation + PI * 2.0f));
		}
		/*Connvert StrafingRotation to Degrees*/

		//SET the AnimationInstance's StrafingRotation to the local StrafingRotation
		AnimationInstance->StrafingRotation = StrafingRotation;
	}//ENDIF
}

void ACharacterBase::Move(FVector Direction, float Scale)
{
	AddMovementInput(Direction, Scale);
}
/*
 Fire() will handle firing the Weapon, by Pulling and releasing the trigger on the current weapon
*/
void ACharacterBase::Fire(bool Toggle)
{
	if (CurrentWeapon)
	{
		if (Toggle == true)
		{
			CurrentWeapon->PullTrigger();
		}
		else
		{
			CurrentWeapon->ReleaseTrigger();
		}
		bIsFiring = Toggle;
	}
}

void ACharacterBase::ServerAim_Implementation(bool Toggle)
{
	bIsAiming = Toggle;
}


/*
Interact() Handles interacting with Items. In our case Weapons. We first Drop a weapon (If we have one) then Hold the one that is picked up.
This function is called by InteractPressed() in the APlayerControllerDefault class
*/
void ACharacterBase::Interact(AActor* Actor)
{
	/* Drop the current weapon.*/
	ServerDropWeapon_Implementation();
	/* Check if the actor is an item.*/
	AItemBase* Item = Cast<AItemBase>(Actor);
	if (Item == nullptr)
		return;

	/* Check distance from the object.*/
	float Distance = Item->GetDistanceTo(this);
	if (Distance > MaxPickUpDistance)
		return;
	/* Hold the item if it's a weapon.*/
	AWeaponBase* Weapon = Cast<AWeaponBase>(Item);

	if (Weapon)
		ServerHoldWeapon_Implementation(Weapon);
}

/*
HoldWeapon() will attach the weapon that is picked up by the Character
*/
void ACharacterBase::ServerHoldWeapon_Implementation(AWeaponBase* Weapon)
{
	check(Weapon != nullptr && "Passed a null weapon!");
	// Drop currently carried weapon first.
	ServerDropWeapon_Implementation();
	// Attach weapon to the character.
	CurrentWeapon = Weapon;
	CurrentWeapon->Attach(this);
	CurrentWeapon->OnWeaponFired.Clear();
	CurrentWeapon->OnWeaponFired.AddDynamic(this, &ACharacterBase::OnWeaponFired);
}
/*
DropWeapon() will detach the Weapon Currently held by the character
*/
void ACharacterBase::ServerDropWeapon_Implementation()
{
	if (CurrentWeapon != nullptr)
	{

		CurrentWeapon->OnWeaponFired.RemoveDynamic(this, &ACharacterBase::OnWeaponFired);
		/* Detach weapon from the character.*/
		CurrentWeapon->Detach();
		CurrentWeapon = nullptr;
		/* Reset weapon states states.*/
		bIsFiring = false;
		bIsAiming = false;
		//ENDIF
	}
}
/*
OnWeaponFired() is a callback function that is triggered by the Weapon. Here we simply play the animation if we are aiming or not
*/
//Weapon Fired Event Handler
void ACharacterBase::OnWeaponFired()
{
	/* Play recoil animation depending on the stance.*/
	if (bIsAiming == true)
	{
		AnimationInstance->Montage_Play(FireAimAnimation);
	}
	else
	{
		AnimationInstance->Montage_Play(FireHipAnimation);
	}
}

/*
OnDeath() is a callback function that is triggered by the Health Component. Here we Drop the Weapon and do a ragdoll
*/
//Weapon Fired Event Handler
void ACharacterBase::OnDeath()
{
	check(Health->IsDead() && "Called OnDeath() while alive!");

	/* Stop ticking while dead.*/
	PrimaryActorTick.bCanEverTick = false;

	/* Drop held weapon.*/
	ServerDropWeapon_Implementation();

	/* Disable character's capsule collision.*/
	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	//this code Allow character's ragdoll to be pushed around. 
	SkeletalMesh->SetCollisionProfileName(TEXT("BlockAll"));
	SkeletalMesh->CanCharacterStepUpOn = ECB_No;
	SkeletalMesh->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));

	/* Simulate character's ragdoll.*/
	SkeletalMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

	SkeletalMesh->SetSimulatePhysics(true);
}

AWeaponBase* ACharacterBase::GetCurrentWeapon()
{
	return CurrentWeapon;
}

class USkeletalMeshComponent* ACharacterBase::GetSkeletalMesh()
{
	return SkeletalMesh;
}

void ACharacterBase::AttachCurrentWeapon()
{
}

void ACharacterBase::ChangeFacing(FVector TargetVector)
{
	SetActorRotation(TargetVector.Rotation());
	CurrentFacing = TargetVector;
	if (GetLocalRole() < ROLE_Authority)
		ServerChangeFacing(CurrentFacing);
}
