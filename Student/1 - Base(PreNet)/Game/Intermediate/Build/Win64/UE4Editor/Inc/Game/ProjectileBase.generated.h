// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
struct FHitResult;
#ifdef GAME_ProjectileBase_generated_h
#error "ProjectileBase.generated.h already included, missing '#pragma once' in ProjectileBase.h"
#endif
#define GAME_ProjectileBase_generated_h

#define Game_Source_Game_Weapons_ProjectileBase_h_13_SPARSE_DATA
#define Game_Source_Game_Weapons_ProjectileBase_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnActorHit) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Self); \
		P_GET_OBJECT(AActor,Z_Param_Other); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActorHit(Z_Param_Self,Z_Param_Other,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Game_Source_Game_Weapons_ProjectileBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnActorHit) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Self); \
		P_GET_OBJECT(AActor,Z_Param_Other); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActorHit(Z_Param_Self,Z_Param_Other,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Game_Source_Game_Weapons_ProjectileBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectileBase(); \
	friend struct Z_Construct_UClass_AProjectileBase_Statics; \
public: \
	DECLARE_CLASS(AProjectileBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game"), NO_API) \
	DECLARE_SERIALIZER(AProjectileBase)


#define Game_Source_Game_Weapons_ProjectileBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAProjectileBase(); \
	friend struct Z_Construct_UClass_AProjectileBase_Statics; \
public: \
	DECLARE_CLASS(AProjectileBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game"), NO_API) \
	DECLARE_SERIALIZER(AProjectileBase)


#define Game_Source_Game_Weapons_ProjectileBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectileBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectileBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileBase(AProjectileBase&&); \
	NO_API AProjectileBase(const AProjectileBase&); \
public:


#define Game_Source_Game_Weapons_ProjectileBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileBase(AProjectileBase&&); \
	NO_API AProjectileBase(const AProjectileBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectileBase)


#define Game_Source_Game_Weapons_ProjectileBase_h_13_PRIVATE_PROPERTY_OFFSET
#define Game_Source_Game_Weapons_ProjectileBase_h_10_PROLOG
#define Game_Source_Game_Weapons_ProjectileBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Game_Weapons_ProjectileBase_h_13_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Game_Weapons_ProjectileBase_h_13_SPARSE_DATA \
	Game_Source_Game_Weapons_ProjectileBase_h_13_RPC_WRAPPERS \
	Game_Source_Game_Weapons_ProjectileBase_h_13_INCLASS \
	Game_Source_Game_Weapons_ProjectileBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Game_Source_Game_Weapons_ProjectileBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Game_Weapons_ProjectileBase_h_13_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Game_Weapons_ProjectileBase_h_13_SPARSE_DATA \
	Game_Source_Game_Weapons_ProjectileBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_Source_Game_Weapons_ProjectileBase_h_13_INCLASS_NO_PURE_DECLS \
	Game_Source_Game_Weapons_ProjectileBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAME_API UClass* StaticClass<class AProjectileBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Source_Game_Weapons_ProjectileBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
