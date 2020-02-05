// Copyright (c) 2017 GAM1528. All Rights Reserved.

#include "WeaponBase.h"
#include "Game.h"

#include <Components/SkeletalMeshComponent.h>
#include <Components/PrimitiveComponent.h>
#include <Components/ArrowComponent.h>
#include "Characters/CharacterBase.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"

#include "ProjectileBase.h"

AWeaponBase::AWeaponBase() :
	Primitive(nullptr),
	Muzzle(nullptr)
{
	PrimaryActorTick.bCanEverTick = true;

	// Set default variables.
	FireRate = 10.0f;

	MaximumAmmo = 30;
	CurrentAmmo = -1;
}

void AWeaponBase::PostInitializeComponents()
{
	Super::PostInitializeComponents();

		/* Get the root primitive component.*/
		// The RootComponent is the weapon mesh.A StaticMeshComponent that will be added via the Blueprint for this Actor
	Primitive = Cast <UPrimitiveComponent>(RootComponent);

	/*Assert - If the Primitive is not null, continue, otherwise CRASH with the reason. Leave this commented*/
	//check(Primitive != nullptr && "Actor is mising a primitive component!");

	/* Get the muzzle arrow component.*/
	auto Components = GetComponents();

	//FOR Each Component in Components	
	for (auto Component : Components)
	{
		if (Component->GetFName() == "Muzzle")
		{
			Muzzle = Cast<UArrowComponent>(Component);
			break;
		}
	}

	/*Leave this commented unless you need it*/
	//check(Muzzle != nullptr && "Actor is mising an arrow component for muzzle!");
	
	MaximumAmmo = FMath::Max(1, MaximumAmmo);
	CurrentAmmo = FMath::Min(CurrentAmmo, MaximumAmmo);

	// Set current ammo to maximum ammo.
	if (CurrentAmmo < 0)
		CurrentAmmo = MaximumAmmo;
}

void AWeaponBase::BeginPlay()
{
	Super::BeginPlay();
}

void AWeaponBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AWeaponBase::Attach(class ACharacterBase* Character)
{
	verify(Character != nullptr && "Weapon's attach function called with null character!");
	/* Set owner of this weapon.*/
	SetOwner(Character);
	// Disable weapon's physics.
	SetActorEnableCollision(false);
	Primitive->SetSimulatePhysics(false);

	/* Attach weapon to the character's mesh.*/
	AttachToComponent(Character->GetSkeletalMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, "WeaponSocket");
}

void AWeaponBase::Detach()
{
	//TODO:
		/* Stop firing when the weapon is detached.*/
	ReleaseTrigger();
	/* Unset owner of the weapon.*/
	SetOwner(nullptr);

	/* Re-enable weapon's physics.*/
	SetActorEnableCollision(true);
	Primitive->SetSimulatePhysics(true);

	/* Detach weapon from the character's mesh.*/
	DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
}

void AWeaponBase::PullTrigger()
{
	//DECLARE a auto variable called TimerManager and assign it to the return value of GetWorld()->GetTimerManager()
	auto& TimerManager = GetWorld()->GetTimerManager();
	/* Check current ammo value before attempting to firing.*/
	if (CurrentAmmo > 0)
	{
		/*Start the firing timer and use the remaining time of the previous timer.*/
		float RemainingTime = FMath::Max(TimerManager.GetTimerRemaining(FireTimer), 0.0f);
		TimerManager.SetTimer(FireTimer, this, &AWeaponBase::Fire, 1.0f / FireRate, true, RemainingTime);
	}
}

void AWeaponBase::ReleaseTrigger()
{
	//DECLARE a auto variable called TimerManager and assign it to the return value of GetWorld()->GetTimerManager()
	auto& TimerManager = GetWorld()->GetTimerManager();
	/* Replace timer with one that will prevent the primary fire timer from triggering again too quickly. */
	if (TimerManager.TimerExists(FireTimer))
	{
		float RemainingTime = TimerManager.GetTimerRemaining(FireTimer);
		TimerManager.SetTimer(FireTimer, this, &AWeaponBase::ClearFireTimer, RemainingTime, false);
	}
}

void AWeaponBase::Fire()
{
	/* Check current ammo value before actually firing.*/
	if (CurrentAmmo > 0)
	{
		//Spawn a projectile.
		FActorSpawnParameters SpawnParams;
		//This Actor is ATTACHED to the Character, making the Character the owner of this Actor
		SpawnParams.Instigator = Cast<APawn>(GetOwner());
		FTransform Transform = Muzzle->GetComponentToWorld();
		GetWorld()->SpawnActor<AProjectileBase>(ProjectileType, Transform.GetLocation(), Transform.GetRotation().Rotator(), SpawnParams);
		OnWeaponFired.Broadcast();
		CurrentAmmo--;
	}
}

void AWeaponBase::ClearFireTimer()
{
		/* Clear the timer after a delay set in ReleaseTrigger() function.*/
		GetWorld()->GetTimerManager().ClearTimer(FireTimer);
}

FVector AWeaponBase::GetMuzzleLocation() const
{
	return Muzzle->GetComponentToWorld().GetLocation();
}