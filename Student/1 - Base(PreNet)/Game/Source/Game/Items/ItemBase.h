// Copyright (c) 2017 GAM1528. All Rights Reserved.

#pragma once

#include <GameFramework/Actor.h>
#include "ItemBase.generated.h"

//TODO 1: Study this Class

UCLASS()
class GAME_API AItemBase : public AActor
{
	GENERATED_BODY()
	
protected:
	AItemBase();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

private:

};
