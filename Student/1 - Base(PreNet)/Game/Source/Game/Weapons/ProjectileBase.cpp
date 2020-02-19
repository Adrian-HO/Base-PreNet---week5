// Copyright (c) 2017 GAM1528. All Rights Reserved.

#include "ProjectileBase.h"
#include "Game.h"
#include "Characters/CharacterBase.h"

AProjectileBase::AProjectileBase()
{
	PrimaryActorTick.bCanEverTick = true;

	// Default projectile parameters.
	Damage = 10.0f;
	Speed = 1200.0f;
	LifeTime = 1.0f;
}

void AProjectileBase::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	//TODO:
		// Subscribe to actor's hit event. 
		//SUBSCRIBE to the AActors hit event. Look at this, another way to detect collisions.
	AActor::OnActorHit.AddDynamic(this, &AProjectileBase::OnActorHit);
}

void AProjectileBase::BeginPlay()
{
	Super::BeginPlay();

	GetWorld()->GetTimerManager().SetTimer(Timer, this, &AProjectileBase::DestroySelf, LifeTime, false);

	SetReplicates(true);
	SetReplicateMovement(true);
}

void AProjectileBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/* Move the projectile in a forward direction.*/
	FVector Location = GetActorLocation();
	Location += GetActorForwardVector() * Speed * DeltaTime;
	SetActorLocation(Location, true);
}

void AProjectileBase::OnActorHit(AActor* Self, AActor* Other, FVector NormalImpulse, const FHitResult& Hit)
{
	if (Other != nullptr)
	{
		if (Role == ROLE_Authority)
		{

			MakeNoise(1.0f, Instigator);
			//CAST Other to a ACharacterBase* variable called CharacterB
			ACharacterBase* CharacterB = Cast<ACharacterBase>(Other);
			if (CharacterB)
			{
				//DECLARE a AActor* called Weapon and assign it to the return value of GetOwner()
				AActor* Weapon = GetOwner();
				//DECLARE a AActor* called Character and assign it to the return value of the Weapon's GetOwner()
				AActor* Character = Weapon->GetOwner();
				//Draw a debug Message to display the Character Name

				//CALL ServerApplyDamage() on CharacterBase
				CharacterB->ServerApplyDamage();
			}

			Destroy();

		}
	}
}

void AProjectileBase::DestroySelf()
{
	if (GetLocalRole() == ROLE_Authority)
		Destroy();
}
