// Copyright (c) 2017 GAM1528. All Rights Reserved.

#include "HealthComponent.h"
#include "Game.h"

UHealthComponent::UHealthComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	bWantsInitializeComponent = true;

	// Set default values.
	MaximumHealth = 100.0f;
	CurrentHealth = -1.0f;

	SetIsReplicated(true);
}

void UHealthComponent::InitializeComponent()
{
	Super::InitializeComponent();
	SetIsReplicated(true);
	// Sanitize default values.
    
	MaximumHealth = FMath::Max(1.0f, MaximumHealth);
	CurrentHealth = FMath::Min(CurrentHealth, MaximumHealth);

	// Set current health to maximum health.
	if(CurrentHealth < 0.0f)
	{
		CurrentHealth = MaximumHealth;
	}

//TODO:
	// Subscribe to the delegate in the attached actor.
	GetOwner()->OnTakeAnyDamage.AddDynamic(this, &UHealthComponent::OnTakeAnyDamage);
}

void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

//TODO:
	// Broadcast actor's death event if initial health is zero.
    //Un-Comment the lines below
	if(CurrentHealth == 0.0f)
	{
        /*This will trigger all functions that are subscribed to this event. */
	    OnDeath.Broadcast();
	}
}

void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UHealthComponent::OnTakeAnyDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{
//TODO:
    //Un-Comment the Lines below
    
	/* Check if already dead.*/
	if(IsDead())
		return;

	/* Update the current health value.*/
	CurrentHealth = FMath::Clamp(CurrentHealth - Damage, 0.0f, MaximumHealth);

	/* Handle current health value reaching zero.*/
	if(CurrentHealth <= 0.0f)
	{
        /*This will trigger all functions that are subscribed to this event. 
		Broadcast actor's death event.*/
		OnDeath.Broadcast();
	}
}

bool UHealthComponent::IsDead() const
{
	return CurrentHealth <= 0.0f;
}
