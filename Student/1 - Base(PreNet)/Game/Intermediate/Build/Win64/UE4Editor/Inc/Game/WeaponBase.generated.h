// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAME_WeaponBase_generated_h
#error "WeaponBase.generated.h already included, missing '#pragma once' in WeaponBase.h"
#endif
#define GAME_WeaponBase_generated_h

#define Game_Source_Game_Weapons_WeaponBase_h_9_DELEGATE \
static inline void FOnWeaponFiredSignature_DelegateWrapper(const FMulticastScriptDelegate& OnWeaponFiredSignature) \
{ \
	OnWeaponFiredSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Game_Source_Game_Weapons_WeaponBase_h_14_SPARSE_DATA
#define Game_Source_Game_Weapons_WeaponBase_h_14_RPC_WRAPPERS \
	virtual void NetMulticastFire_Implementation(); \
	virtual bool ServerFire_Validate(); \
	virtual void ServerFire_Implementation(); \
 \
	DECLARE_FUNCTION(execNetMulticastFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NetMulticastFire_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerFire_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerFire_Validate")); \
			return; \
		} \
		P_THIS->ServerFire_Implementation(); \
		P_NATIVE_END; \
	}


#define Game_Source_Game_Weapons_WeaponBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void NetMulticastFire_Implementation(); \
	virtual bool ServerFire_Validate(); \
	virtual void ServerFire_Implementation(); \
 \
	DECLARE_FUNCTION(execNetMulticastFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NetMulticastFire_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerFire_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerFire_Validate")); \
			return; \
		} \
		P_THIS->ServerFire_Implementation(); \
		P_NATIVE_END; \
	}


#define Game_Source_Game_Weapons_WeaponBase_h_14_EVENT_PARMS
#define Game_Source_Game_Weapons_WeaponBase_h_14_CALLBACK_WRAPPERS
#define Game_Source_Game_Weapons_WeaponBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponBase(); \
	friend struct Z_Construct_UClass_AWeaponBase_Statics; \
public: \
	DECLARE_CLASS(AWeaponBase, AItemBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game"), NO_API) \
	DECLARE_SERIALIZER(AWeaponBase) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Game_Source_Game_Weapons_WeaponBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAWeaponBase(); \
	friend struct Z_Construct_UClass_AWeaponBase_Statics; \
public: \
	DECLARE_CLASS(AWeaponBase, AItemBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game"), NO_API) \
	DECLARE_SERIALIZER(AWeaponBase) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Game_Source_Game_Weapons_WeaponBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeaponBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeaponBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponBase(AWeaponBase&&); \
	NO_API AWeaponBase(const AWeaponBase&); \
public:


#define Game_Source_Game_Weapons_WeaponBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponBase(AWeaponBase&&); \
	NO_API AWeaponBase(const AWeaponBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponBase)


#define Game_Source_Game_Weapons_WeaponBase_h_14_PRIVATE_PROPERTY_OFFSET
#define Game_Source_Game_Weapons_WeaponBase_h_11_PROLOG \
	Game_Source_Game_Weapons_WeaponBase_h_14_EVENT_PARMS


#define Game_Source_Game_Weapons_WeaponBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Game_Weapons_WeaponBase_h_14_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Game_Weapons_WeaponBase_h_14_SPARSE_DATA \
	Game_Source_Game_Weapons_WeaponBase_h_14_RPC_WRAPPERS \
	Game_Source_Game_Weapons_WeaponBase_h_14_CALLBACK_WRAPPERS \
	Game_Source_Game_Weapons_WeaponBase_h_14_INCLASS \
	Game_Source_Game_Weapons_WeaponBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Game_Source_Game_Weapons_WeaponBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Game_Weapons_WeaponBase_h_14_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Game_Weapons_WeaponBase_h_14_SPARSE_DATA \
	Game_Source_Game_Weapons_WeaponBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_Source_Game_Weapons_WeaponBase_h_14_CALLBACK_WRAPPERS \
	Game_Source_Game_Weapons_WeaponBase_h_14_INCLASS_NO_PURE_DECLS \
	Game_Source_Game_Weapons_WeaponBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAME_API UClass* StaticClass<class AWeaponBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Source_Game_Weapons_WeaponBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
