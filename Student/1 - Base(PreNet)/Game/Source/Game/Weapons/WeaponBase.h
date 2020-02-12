// Copyright (c) 2017 GAM1528. All Rights Reserved.

#pragma once

#include <GameFramework/Actor.h>
#include "Items/ItemBase.h"
#include "WeaponBase.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnWeaponFiredSignature);
//TODO 1: Study this Class
UCLASS()
class GAME_API AWeaponBase : public AItemBase
{
	GENERATED_BODY()

public:
	UPROPERTY(Replicated, EditDefaultsOnly)
	float FireRate;

	UPROPERTY(Replicated, EditDefaultsOnly, BlueprintReadOnly)
	int MaximumAmmo;

	UPROPERTY(Replicated, EditDefaultsOnly, BlueprintReadOnly)
	int CurrentAmmo;

	UPROPERTY(EditDefaultsOnly)
	class UClass* ProjectileType;

	UPROPERTY(BlueprintAssignable)
	FOnWeaponFiredSignature OnWeaponFired;
	
public:
	void Attach(class ACharacterBase* Character);
	void Detach();

	void PullTrigger();
	void ReleaseTrigger();

	FVector GetMuzzleLocation() const;

protected:
	AWeaponBase();

	//This is for Listen Client Mode
	UFUNCTION(Server, Reliable, WithValidation)
		void ServerFire();

	//This is for Dedicated Server Mode
	UFUNCTION(NetMulticast, Reliable)
		void NetMulticastFire();

	virtual void PostInitializeComponents() override;
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	void Fire();
	virtual void SpawnProjectile();

private:
	void ClearFireTimer();
	FTimerHandle FireTimer;

private:
	class UPrimitiveComponent* Primitive;
	class UArrowComponent* Muzzle;
};
