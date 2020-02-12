// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWeaponBase;
struct FVector;
#ifdef GAME_CharacterBase_generated_h
#error "CharacterBase.generated.h already included, missing '#pragma once' in CharacterBase.h"
#endif
#define GAME_CharacterBase_generated_h

#define Game_Source_Game_Characters_CharacterBase_h_13_SPARSE_DATA
#define Game_Source_Game_Characters_CharacterBase_h_13_RPC_WRAPPERS \
	virtual bool ServerDropWeapon_Validate(); \
	virtual void ServerDropWeapon_Implementation(); \
	virtual bool ServerHoldWeapon_Validate(AWeaponBase* ); \
	virtual void ServerHoldWeapon_Implementation(AWeaponBase* Weapon); \
	virtual bool ServerChangeFacing_Validate(FVector ); \
	virtual void ServerChangeFacing_Implementation(FVector TargetVector); \
	virtual bool ServerApplyDamage_Validate(); \
	virtual void ServerApplyDamage_Implementation(); \
	virtual bool NetMulticastOnDeath_Validate(); \
	virtual void NetMulticastOnDeath_Implementation(); \
	virtual bool ServerAim_Validate(bool ); \
	virtual void ServerAim_Implementation(bool Toggle); \
 \
	DECLARE_FUNCTION(execServerDropWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerDropWeapon_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerDropWeapon_Validate")); \
			return; \
		} \
		P_THIS->ServerDropWeapon_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerHoldWeapon) \
	{ \
		P_GET_OBJECT(AWeaponBase,Z_Param_Weapon); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerHoldWeapon_Validate(Z_Param_Weapon)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerHoldWeapon_Validate")); \
			return; \
		} \
		P_THIS->ServerHoldWeapon_Implementation(Z_Param_Weapon); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnDeath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnDeath(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnWeaponFired) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnWeaponFired(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerChangeFacing) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_TargetVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerChangeFacing_Validate(Z_Param_TargetVector)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerChangeFacing_Validate")); \
			return; \
		} \
		P_THIS->ServerChangeFacing_Implementation(Z_Param_TargetVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerApplyDamage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerApplyDamage_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerApplyDamage_Validate")); \
			return; \
		} \
		P_THIS->ServerApplyDamage_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNetMulticastOnDeath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->NetMulticastOnDeath_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("NetMulticastOnDeath_Validate")); \
			return; \
		} \
		P_THIS->NetMulticastOnDeath_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerAim) \
	{ \
		P_GET_UBOOL(Z_Param_Toggle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerAim_Validate(Z_Param_Toggle)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerAim_Validate")); \
			return; \
		} \
		P_THIS->ServerAim_Implementation(Z_Param_Toggle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AWeaponBase**)Z_Param__Result=P_THIS->GetCurrentWeapon(); \
		P_NATIVE_END; \
	}


#define Game_Source_Game_Characters_CharacterBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerDropWeapon_Validate(); \
	virtual void ServerDropWeapon_Implementation(); \
	virtual bool ServerHoldWeapon_Validate(AWeaponBase* ); \
	virtual void ServerHoldWeapon_Implementation(AWeaponBase* Weapon); \
	virtual bool ServerChangeFacing_Validate(FVector ); \
	virtual void ServerChangeFacing_Implementation(FVector TargetVector); \
	virtual bool ServerApplyDamage_Validate(); \
	virtual void ServerApplyDamage_Implementation(); \
	virtual bool NetMulticastOnDeath_Validate(); \
	virtual void NetMulticastOnDeath_Implementation(); \
	virtual bool ServerAim_Validate(bool ); \
	virtual void ServerAim_Implementation(bool Toggle); \
 \
	DECLARE_FUNCTION(execServerDropWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerDropWeapon_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerDropWeapon_Validate")); \
			return; \
		} \
		P_THIS->ServerDropWeapon_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerHoldWeapon) \
	{ \
		P_GET_OBJECT(AWeaponBase,Z_Param_Weapon); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerHoldWeapon_Validate(Z_Param_Weapon)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerHoldWeapon_Validate")); \
			return; \
		} \
		P_THIS->ServerHoldWeapon_Implementation(Z_Param_Weapon); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnDeath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnDeath(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnWeaponFired) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnWeaponFired(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerChangeFacing) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_TargetVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerChangeFacing_Validate(Z_Param_TargetVector)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerChangeFacing_Validate")); \
			return; \
		} \
		P_THIS->ServerChangeFacing_Implementation(Z_Param_TargetVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerApplyDamage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerApplyDamage_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerApplyDamage_Validate")); \
			return; \
		} \
		P_THIS->ServerApplyDamage_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNetMulticastOnDeath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->NetMulticastOnDeath_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("NetMulticastOnDeath_Validate")); \
			return; \
		} \
		P_THIS->NetMulticastOnDeath_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerAim) \
	{ \
		P_GET_UBOOL(Z_Param_Toggle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerAim_Validate(Z_Param_Toggle)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerAim_Validate")); \
			return; \
		} \
		P_THIS->ServerAim_Implementation(Z_Param_Toggle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AWeaponBase**)Z_Param__Result=P_THIS->GetCurrentWeapon(); \
		P_NATIVE_END; \
	}


#define Game_Source_Game_Characters_CharacterBase_h_13_EVENT_PARMS \
	struct CharacterBase_eventServerAim_Parms \
	{ \
		bool Toggle; \
	}; \
	struct CharacterBase_eventServerChangeFacing_Parms \
	{ \
		FVector TargetVector; \
	}; \
	struct CharacterBase_eventServerHoldWeapon_Parms \
	{ \
		AWeaponBase* Weapon; \
	};


#define Game_Source_Game_Characters_CharacterBase_h_13_CALLBACK_WRAPPERS
#define Game_Source_Game_Characters_CharacterBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacterBase(); \
	friend struct Z_Construct_UClass_ACharacterBase_Statics; \
public: \
	DECLARE_CLASS(ACharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game"), NO_API) \
	DECLARE_SERIALIZER(ACharacterBase) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Game_Source_Game_Characters_CharacterBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesACharacterBase(); \
	friend struct Z_Construct_UClass_ACharacterBase_Statics; \
public: \
	DECLARE_CLASS(ACharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game"), NO_API) \
	DECLARE_SERIALIZER(ACharacterBase) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Game_Source_Game_Characters_CharacterBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACharacterBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACharacterBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterBase(ACharacterBase&&); \
	NO_API ACharacterBase(const ACharacterBase&); \
public:


#define Game_Source_Game_Characters_CharacterBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterBase(ACharacterBase&&); \
	NO_API ACharacterBase(const ACharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACharacterBase)


#define Game_Source_Game_Characters_CharacterBase_h_13_PRIVATE_PROPERTY_OFFSET
#define Game_Source_Game_Characters_CharacterBase_h_10_PROLOG \
	Game_Source_Game_Characters_CharacterBase_h_13_EVENT_PARMS


#define Game_Source_Game_Characters_CharacterBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Game_Characters_CharacterBase_h_13_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Game_Characters_CharacterBase_h_13_SPARSE_DATA \
	Game_Source_Game_Characters_CharacterBase_h_13_RPC_WRAPPERS \
	Game_Source_Game_Characters_CharacterBase_h_13_CALLBACK_WRAPPERS \
	Game_Source_Game_Characters_CharacterBase_h_13_INCLASS \
	Game_Source_Game_Characters_CharacterBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Game_Source_Game_Characters_CharacterBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Game_Characters_CharacterBase_h_13_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Game_Characters_CharacterBase_h_13_SPARSE_DATA \
	Game_Source_Game_Characters_CharacterBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_Source_Game_Characters_CharacterBase_h_13_CALLBACK_WRAPPERS \
	Game_Source_Game_Characters_CharacterBase_h_13_INCLASS_NO_PURE_DECLS \
	Game_Source_Game_Characters_CharacterBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAME_API UClass* StaticClass<class ACharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Source_Game_Characters_CharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
