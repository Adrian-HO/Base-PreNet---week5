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

	UFUNCTION(Reliable, Server, WithValidation)
		void ServerAim(bool Toggle);

	void Interact(AActor* Actor);

	class USkeletalMeshComponent* GetSkeletalMesh();
	void AttachCurrentWeapon();

	void ChangeFacing(FVector TargetVector);

	class UHealthComponent* GetHealth() { return Health; }

	UFUNCTION(NetMulticast, Reliable, WithValidation)
		void NetMulticastOnDeath();

	UFUNCTION(Reliable, Server, WithValidation)
		virtual void ServerApplyDamage();

	UFUNCTION(Reliable, Server, WithValidation)
		void ServerChangeFacing(FVector TargetVector);

protected:
	ACharacterBase();

	virtual void PostInitializeComponents() override;
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		void OnWeaponFired(); //Handle the OnWeaponFired Event

	UFUNCTION()
		void OnDeath(); //Handle the OnDeath Event

	UPawnNoiseEmitterComponent* NoiseEmitterComponent;

private:
	UFUNCTION(Server, Reliable, WithValidation)
		void ServerHoldWeapon(class AWeaponBase* Weapon);

	UFUNCTION(Server, Reliable, WithValidation)
		void ServerDropWeapon();

public: //Class Components
	class UHealthComponent* Health;
	class USkeletalMeshComponent* SkeletalMesh;
	class UCharacterBaseAnimation* AnimationInstance;

	UPROPERTY(Replicated)
		class AWeaponBase* CurrentWeapon; //Currently Held Weapon

	UPROPERTY(Replicated)
		bool bIsAiming;

	UPROPERTY(Replicated)
		bool bIsFiring;

	UPROPERTY(Replicated)
		bool bHasWeapon;

	UPROPERTY(Replicated)
		FVector CurrentFacing;
};
