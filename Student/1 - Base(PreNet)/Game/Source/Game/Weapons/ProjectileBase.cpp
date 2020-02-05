// Copyright (c) 2017 GAM1528. All Rights Reserved.

#include "ProjectileBase.h"
#include "Game.h"

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
	// Cause damage to the hit actor.
	if(Other != nullptr)
	{
		FDamageEvent DamageEvent;
		Other->TakeDamage(Damage, DamageEvent, nullptr, this);
	}
	Destroy();
}

void AProjectileBase::DestroySelf()
{
	// Destroy self.
	Destroy();
}
