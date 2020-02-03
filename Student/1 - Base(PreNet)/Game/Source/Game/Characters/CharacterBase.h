// Copyright (c) 2017 GAM1528. All Rights Reserved.

#pragma once

#include <GameFramework/Character.h>
#include "CharacterBase.generated.h"

//TODO 1: Study this Class

UCLASS()
class GAME_API ACharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	float MaxWalkSpeed;

	UPROPERTY(EditDefaultsOnly)
	float MaxJogSpeed;

	UPROPERTY(EditDefaultsOnly)
	float MaxPickUpDistance;

	UPROPERTY(EditDefaultsOnly)
	UAnimMontage* FireHipAnimation; //Animation Sequence for Firing from the Hip

	UPROPERTY(EditDefaultsOnly)
	UAnimMontage* FireAimAnimation; //Animation Sequence for Firing while Aiming

	UFUNCTION(BlueprintPure)
	class AWeaponBase* GetCurrentWeapon();

public:
	void Move(FVector Direction, float Scale);
	void Fire(bool Toggle);
	void Aim(bool Toggle);

	void Interact(AActor* Actor);

	class USkeletalMeshComponent* GetSkeletalMesh();

protected:
	ACharacterBase();

	virtual void PostInitializeComponents() override;
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OnWeaponFired(); //Handle the OnWeaponFired Event

	UFUNCTION()
	void OnDeath(); //Handle the OnDeath Event

private:
	void HoldWeapon(class AWeaponBase* Weapon);
	void DropWeapon();

private: //Class Components
	class UHealthComponent* Health;
	class USkeletalMeshComponent* SkeletalMesh;
	class UCharacterBaseAnimation* AnimationInstance;

	UPROPERTY()
	class AWeaponBase* CurrentWeapon; //Currently Held Weapon

	bool bIsAiming;
	bool bIsFiring;
};
