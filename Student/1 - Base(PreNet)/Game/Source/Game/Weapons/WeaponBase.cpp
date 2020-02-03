// Copyright (c) 2017 GAM1528. All Rights Reserved.

#include "WeaponBase.h"
#include "Game.h"

#include <Components/SkeletalMeshComponent.h>
#include <Components/PrimitiveComponent.h>
#include <Components/ArrowComponent.h>
#include "Characters/CharacterBase.h"

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

//TODO:
	/* Get the root primitive component.*/
    //SET Primitive by Casting the RootComponent to a UPrimitiveComponent. CALL GetRootComponent(). The RootComponent is the weapon mesh.A StaticMeshComponent that will be added via the Blueprint for this Actor
	

    /*Assert - If the Primitive is not null, continue, otherwise CRASH with the reason. Leave this commented*/
	//check(Primitive != nullptr && "Actor is mising a primitive component!");

	/* Get the muzzle arrow component.*/
    //DECLARE a auto variable called Components and SET it to the return value of GetComponents()
	
    //FOR Each Component in Components	
        //IF Component->GetFName() IS "Muzzle"
            //SET the Muzzle to the Component, Cast it as a UArrowComponent

            //BREAK
        //ENDIF
    //END FOR

    /*Leve this commented unless you need it*/
	//check(Muzzle != nullptr && "Actor is mising an arrow component for muzzle!");
//TODO:
	/* initialize default values.*/
    //SET MaximumAmmo to the return value of FMath::Max(1, MaximumAmmo)
	
    //SET CurrentAmmo to the return value of FMath::Min(CurrentAmmo, MaximumAmmo)
	

	// Set current ammo to maximum ammo.
    //IF the CurrentAmmo is LESS than 0
	    //SET CurrentAmmo to MaximumAmmo	
    //ENDIF
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

//TODO:
	/* Set owner of this weapon.*/
    //CALL SetOwner() and pass in Character
	
	// Disable weapon's physics.
    //CALL SetActorEnableCollision() to false
	
    //CALL SetSimulatePhysics() in the Primitive and pass in false, disabling physics
	

	/* Attach weapon to the character's mesh.*/
    //CALL AttachToComponent() and pass in (Character->GetSkeletalMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, "WeaponSocket") <-- We are attaching this Actor to the Characters Skeletal Mesh at the WeaponSocket
	
}

void AWeaponBase::Detach()
{
//TODO:
	/* Stop firing when the weapon is detached.*/
    //CALL ReleaseTrigger()
	
	/* Unset owner of the weapon.*/
    //CALL SetOwner() to null
	

	/* Re-enable weapon's physics.*/
    //CALL SetActorEnableCollision() and pass in true
	
    //CALL SetSimulatePhysics() on the Primitive to true
	

	/* Detach weapon from the character's mesh.*/
    //Call DetachFromActor() and pass in FDetachmentTransformRules::KeepWorldTransform
	
}

void AWeaponBase::PullTrigger()
{
//TODO:
    //DECLARE a auto variable called TimerManager and assign it to the return value of GetWorld()->GetTimerManager()
	
	/* Check current ammo value before attempting to firing.*/
    //IF CurrentAmmo is GREATER than 0
	    /*Start the firing timer and use the remaining time of the previous timer.*/
        //DECLARE a float called RemainingTime and assign it to the Max value between the time remaining before the specified timer is called and 0. FMath::Max(TimerManager.GetTimerRemaining(FireTimer), 0.0f);
		
        //CALL SetTimer() on the TimerManager and pass in  - (FireTimer, this, &AWeaponBase::Fire, 1.0f / FireRate, true, RemainingTime)		
	
    //ENDIF
}

void AWeaponBase::ReleaseTrigger()
{
//TODO:
    //DECLARE a auto variable called TimerManager and assign it to the return value of GetWorld()->GetTimerManager()
	
	/* Replace timer with one that will prevent the primary fire timer from triggering again too quickly. */
    //IF The FireTimer Exists --> TimerManager.TimerExists(FireTimer)
	
        //DECLARE a float called RemainingTime and SET it to the return value of TimerManager.GetTimerRemaining(FireTimer)
	
        //CALL SetTimer() on the TimerManager and pass in (FireTimer, this, &AWeaponBase::ClearFireTimer, RemainingTime, false)
	
    //ENDIF
}

void AWeaponBase::Fire()
{
//TODO:
	/* Check current ammo value before actually firing.*/
    //IF CurrentAmmo is GREATER than 0	
		//Spawn a projectile.
        //DECLARE a FActorSpawnParameters called SpawnParams
		
        //SET the SpawnParams.Instigator to the Owner of this Actor, by Calling GetOwner() and Casting it as a APawn. This Actor is ATTACHED to the Character, making the Character the owner of this Actor
		
        //DECLARE a FTransform called Transform and SET it to the return value of Muzzle->GetComponentToWorld()
		
        //SPAWN the Projectile, by calling SpawnActor() on the World and pass in (ProjectileType, Transform.GetLocation(), Transform.GetRotation().Rotator(), SpawnParams)
		
		// Broadcast a weapon fired event.
        //CALL Broadcast() on the OnWeaponFired event
		
		//Decrement the ammo count.
        //SUBTRACT 1 from current Ammo

    //ENDIF
}

void AWeaponBase::ClearFireTimer()
{
//TODO:
	/* Clear the timer after a delay set in ReleaseTrigger() function.*/
    //Un-Comment the line below
	//GetWorld()->GetTimerManager().ClearTimer(FireTimer);
}

FVector AWeaponBase::GetMuzzleLocation() const
{
	return Muzzle->GetComponentToWorld().GetLocation();
}
