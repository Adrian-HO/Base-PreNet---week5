// Copyright (c) 2017 GAM1528. All Rights Reserved.

#include "ItemBase.h"
#include "Game.h"

AItemBase::AItemBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AItemBase::BeginPlay()
{
	Super::BeginPlay();
}

void AItemBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
