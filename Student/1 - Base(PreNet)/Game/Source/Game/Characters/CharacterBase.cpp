// Copyright (c) 2017 GAM1528. All Rights Reserved.

#include "CharacterBase.h"
#include "Game.h"
#include "CharacterBaseAnimation.h"

#include <GameFramework/PlayerController.h>
#include "Gameplay/Health/HealthComponent.h"
#include "Weapons/WeaponBase.h"
#include "Items/ItemBase.h"

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
}

/*
Allow actors to initialize themselves on the C++ side
https://api.unrealengine.com/INT/API/Runtime/Engine/GameFramework/AActor/PostInitializeComponents/index.html
*/
void ACharacterBase::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	/* Retrieve the health component. */
//TODO:
    //SET Health to the return value of FindComponentByClass<UHealthComponent>()
	
	
    //check(Health != nullptr && "Character does not have a health component!");

//TODO:
	/* Subscribe to health component's OnDeath event.*/
    //IF Health NOT EQUAL to null
	
        //SUBSCRIBE to the OnDeath Event in the Helth Component, with the OnDeath function
	
    //ENDIF

//TODO:
	/*Retrieve the skeletal mesh component. */
    //SET SkeletalMesh to the return value of GetMesh()
	
    //IF SkeletalMesh NOT EQUAL to null
	if (SkeletalMesh != nullptr)
	{
		check(SkeletalMesh != nullptr && "Character does not have a skeletal mesh component!");

		/* Retrieve the animation instance.*/
        //SET AnimationInstance to the SkeletalMeshe's Animation Instance --> Cast<UCharacterBaseAnimation>(SkeletalMesh->GetAnimInstance())


		check(AnimationInstance != nullptr && "Character does not have an animation instance!");
	}
    //ENDIF
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
	const bool bHasWeapon = CurrentWeapon != nullptr;

	/* Handle movement orientation and speed. */
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->MaxWalkSpeed = MaxJogSpeed;
    
//TODO:
    //IF bHasWeapon AND (bIsAiming OR bIsFiring)
	
        //CALL GetCharacterMovement() and SET bOrientRotationToMovement to false
	
        //IF bIsAiming	
            //CALL GetCharacterMovement() and SET MaxWalkSpeed to MaxWalkSpeed (local variable)
        //ENDIF

        //IF bIsFiring
            //CALL GetCharacterMovement() and SCALE (Multiply) MaxWalkSpeed by 0.8
        //ENDIF

        /* Rotate the character towards the aiming point.*/
        //DECLARE a auto variable called PlayerController and assign it to this Characters Controller. Assign PlayerController as APlayerController 

        //IF PlayerController is valid
            /* Cast cursor trace to world.*/
            //DECLARE a FVector called MouseLocation

            //DECLARE a FVector called MouseDirection

            //DECLARE a bool called Success and Assign it to the return value of PlayerController->DeprojectMousePositionToWorld(MouseLocation, MouseDirection). Lookup the function in the Documentation

            /* Rotate the character towards the cursor.*/
            //IF Success
                /* Cast the cursor onto a plane. */
                //DECLARE a FVector called LineBegin and Assign it to MouseLocation

                //DECLARE a FVector called LineEnd and Assign it to MouseLocation  + MouseDirection * 10000.0f

                //DECLARE a FVector PlaneOrigin and set it to the return value of CurrentWeapon->GetMuzzleLocation()

                //DECLARE a FVector called PlaneNormal and SET it to FVector(0.0f, 0.0f, 1.0f)


                /*Find the intersection of a line and an offset plane. Assumes that the line and plane do indeed intersect */
                //DECLARE a FVector called LookLocation and SET it to the return value of FMath::LinePlaneIntersection(LineBegin, LineEnd, PlaneOrigin, PlaneNormal)

                // Rotate the cursor toward the intersection of the cursor and the plane.
                //DECLARE a FRotator called LookRotation and Assign it to (LookLocation - GetActorLocation()).Rotation();


                //SET LookRotation Pitch to 0

                //SET LookRotation Roll to 0


                /*Slerp to the new rotation*/
                //CALL SetActorRotation() pass in FMath::RInterpTo(GetActorRotation(), LookRotation, DeltaTime, 10.0f)

            //ENDIF Success
        //ENDIF (PlayerController)
    //ENDIF bHasWeapon AND (bIsAiming OR bIsFiring)

//TODO:
    /* Set animation weapon parameters.*/
    //SET the AnimationInstance's bHasWeapon to the local bHasWeapon
	
    //SET the AnimationInstance's bIsAiming to the local bIsAiming
	


	/* Set animation movement parameters.*/
    //DECLARE a float called CurrentSpeed set it to the return value of GetVelocity().Size() <--  Get the length (magnitude) of this vector
	
    //DECLARE a bool called bIsMoving and SET it to CurrentSpeed > 0.0f && GetCharacterMovement()->IsMovingOnGround()
	

    //SET the ANimationInstance's bIsMoving to the local bIsMoving
	
    //SET the AnimationInstance's MovementSpeed to bIsMoving ? CurrentSpeed : 0.0f
	

	/* Set animation strafing rotation paremeter.*/
    //DECLARE a FVector called MovementDirection and SET it to the return value of GetLastMovementInputVector()
	
    //DECLARE a FVector called CharacterDirection and SET it to the return value of GetActorForwardVector()
	

    /*We need to set the Strafeing Rotation on the AnimationInstance to blend the movement animation when moving*/
    //IF !MovementDirection.IsNearlyZero()
	
        /*Calculate the Strafing Rotation which is the Arc Tan difference between the Character's Last Movement Direction and Current Movement Direction*/
        //DECLARE a float called StrafingRotation and SET it to FMath::Atan2(MovementDirection.Y, MovementDirection.X) - FMath::Atan2(CharacterDirection.Y, CharacterDirection.X)
	    
        //IF the Absolute value of the StrafingRotation is greater than PI FMath::Abs(StrafingRotation) > PI
	        //SET StrafingRotation, If StrafingRotation is greater than 0, then set it to (StrafingRotation - PI * 2.0f), otherwise (StrafingRotation + PI * 2.0f) --> Ternary
	    //ENDIF
        
        /*Connvert StrafingRotation to Degrees*/
	

        //SET the AnimationInstance's StrafingRotation to the local StrafingRotation
	
    //ENDIF
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
//TODO:
    //IF CurrentWeapon is valid
        //IF Toggle is true
            //CALL PullTrigger() on the CurrentWeapon
        //ELSE
            //CALL ReleaseTrigger() on the CurrentWeapon
        //ENDIF
		
        //SET bIsFiring to Toggle
    //END
}

void ACharacterBase::Aim(bool Toggle)
{
//TODO:
    //SET bIsAiming to Toggle
	
}

/*
Interact() Handles interacting with Items. In our case Weapons. We first Drop a weapon (If we have one) then Hold the one that is picked up.
This function is called by InteractPressed() in the APlayerControllerDefault class
*/
void ACharacterBase::Interact(AActor* Actor)
{
//TODO:
	/* Drop the current weapon.*/
    //CALL DropWeapon()

	/* Check if the actor is an item.*/
    //DECLARE a variable of type AItemBase* called Item and assign it to the Cast of Actor passed into this function. Cast Actor as a AItemBase

    //IF Item is null
        //RETURN

	/* Check distance from the object.*/
    //DECLARE a float called Distance and SET it to the return value of Item->GetDistanceTo(this)

    //IF the Distance is greater than MaxPickUpDistance
        //RETURN

	/* Hold the item if it's a weapon.*/
    //DECLARE a AWeaponBase* called Weapon SET it to the Cast of the Item to AWeaponBase. Cast Item to AWeaponBase

    //IF Weapon is valid
        //CALL HoldWeapon() and pass in the Weapon
    //ENDIF
}

/*
HoldWeapon() will attach the weapon that is picked up by the Character
*/
void ACharacterBase::HoldWeapon(AWeaponBase* Weapon)
{
	check(Weapon != nullptr && "Passed a null weapon!");
//TODO:
	// Drop currently carried weapon first.
    //CALL DropWeapon()

	// Attach weapon to the character.
    //SET CurrentWeapon to weapon

    //CALL Attach() on the CurrentWeapon and pass in this

    //CALL Clear() on the CurrentWeapons's OnWeaponFired event

    /* Subscribe to weapon's events.*/
    //SUBSCRIBE to the CurrentWeapon's OnWeaponFired and pass in (this, &ACharacterBase::OnWeaponFired)
	
}
/*
DropWeapon() will detach the Weapon Currently held by the character
*/
void ACharacterBase::DropWeapon()
{
//TODO:
    //IF CurrentWeapon is not null
		/* Unsubscribe from weapon's events.*/
        //CALL RemoveDynamic(this, &ACharacterBase::OnWeaponFired) on the CurrentWeapon's OnWeaponFired event
	
		/* Detach weapon from the character.*/
        //CALL Detach() on the CurrentWeapon()
	
        //SET CurrentWeapon to null
	

		/* Reset weapon states states.*/
        //SET bIsFiring to false
	
        //SET bIsAiming to false

    //ENDIF
}
/*
OnWeaponFired() is a callback function that is triggered by the Weapon. Here we simply play the animation if we are aiming or not
*/
//Weapon Fired Event Handler
void ACharacterBase::OnWeaponFired()
{
//TODO:
    /* Play recoil animation depending on the stance.*/
    //IF bIsAiming is true
	    /*Play the Fire Aim Animation*/
        //CALL Montage_Play(FireAimAnimation) on the AnimationInstance
	
    //ELSE
	
        /*Play the Fire Hip Animation*/
        //CALL Montage_Play(FireHipAnimation) on the AnimationInstance
	
    //ENDIF
}

/*
OnDeath() is a callback function that is triggered by the Health Component. Here we Drop the Weapon and do a ragdoll
*/
//Weapon Fired Event Handler
void ACharacterBase::OnDeath()
{
	check(Health->IsDead() && "Called OnDeath() while alive!");

//TODO:
	/* Stop ticking while dead.*/
    //SET PrimaryActorTick.bCanEverTick to false
	
	/* Drop held weapon.*/
    //CALL DropWeapon
	

	/* Disable character's capsule collision.*/
	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	// Uncomment this code if you want to Allow character's ragdoll to be pushed around. 
	
    /*
	SkeletalMesh->SetCollisionProfileName(TEXT("BlockAll"));
	SkeletalMesh->CanCharacterStepUpOn = ECB_No;
	SkeletalMesh->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
	*/

	/* Simulate character's ragdoll.*/
    //CALL SetCollisionEnabled() on the SkeletalMesh and pass in ECollisionEnabled::QueryAndPhysics
	
    //CALL SetSimulatePhysics() on the SkeletalMesh and pass in true
	
}

AWeaponBase* ACharacterBase::GetCurrentWeapon()
{
	return CurrentWeapon;
}

class USkeletalMeshComponent* ACharacterBase::GetSkeletalMesh()
{
	return SkeletalMesh;
}
