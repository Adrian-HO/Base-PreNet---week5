// Copyright (c) 2017 GAM1528. All Rights Reserved.

#include "PlayerControllerDefault.h"
#include "Game.h"
#include "Characters/CharacterBase.h"
#include "Items/ItemBase.h"

//TODO: Study this Class
APlayerControllerDefault::APlayerControllerDefault()
{
	bShowMouseCursor = true;
}

void APlayerControllerDefault::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAxis("MoveVertical", this, &APlayerControllerDefault::MoveVertical);
	InputComponent->BindAxis("MoveHorizontal", this, &APlayerControllerDefault::MoveHorizontal);

	InputComponent->BindAction("Fire", IE_Pressed, this, &APlayerControllerDefault::FirePressed);
	InputComponent->BindAction("Fire", IE_Released, this, &APlayerControllerDefault::FireReleased);

	InputComponent->BindAction("Aim", IE_Pressed, this, &APlayerControllerDefault::AimPressed);
	InputComponent->BindAction("Aim", IE_Released, this, &APlayerControllerDefault::AimReleased);

	InputComponent->BindAction("Interact", IE_Pressed, this, &APlayerControllerDefault::InteractPressed);
}

void APlayerControllerDefault::AcknowledgePossession(APawn* PossesedPawn)
{
	Super::AcknowledgePossession(PossesedPawn);

	Character = Cast<ACharacterBase>(PossesedPawn);
	check(Character != nullptr && "Possesed a pawn that isn't of a desired character type!");
}

void APlayerControllerDefault::BeginPlay()
{
	Super::BeginPlay();
}

void APlayerControllerDefault::MoveVertical(float Scale)
{
	if(!Character)
		return;

	Character->Move(FVector(1.0f, 0.0f, 0.0f), Scale);
}

void APlayerControllerDefault::MoveHorizontal(float Scale)
{
	if(!Character)
		return;
	
	Character->Move(FVector(0.0f, 1.0f, 0.0f), Scale);
}

void APlayerControllerDefault::FirePressed()
{
	if(!Character)
		return;

	Character->Fire(true);
}

void APlayerControllerDefault::FireReleased()
{
	if(!Character)
		return;

	Character->Fire(false);
}

void APlayerControllerDefault::AimPressed()
{
	if(!Character)
		return;
	
	Character->ServerAim(true);
}

void APlayerControllerDefault::AimReleased()
{
	if(!Character)
		return;

	Character->ServerAim(false);
}

void APlayerControllerDefault::InteractPressed()
{
	if(!Character)
		return;

//TODO: Look at what this function is doing
	// Get the actor under the cursor.
	FHitResult TraceResult;
	GetHitResultUnderCursorByChannel(UEngineTypes::ConvertToTraceType(ECC_WorldDynamic), false, TraceResult);

	// Interact with the actor under the cursor.
	// We are fine with getting nullptr as the actor.
	Character->Interact(TraceResult.GetActor());
}
