// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
struct FVector;
enum class EAIState : uint8;
#ifdef GAME_AICharacterBase_generated_h
#error "AICharacterBase.generated.h already included, missing '#pragma once' in AICharacterBase.h"
#endif
#define GAME_AICharacterBase_generated_h

#define Game_Source_Game_Characters_AICharacterBase_h_27_SPARSE_DATA
#define Game_Source_Game_Characters_AICharacterBase_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_GuardState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_GuardState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetPatrol) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetPatrol(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetOrientation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetOrientation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnNoiseHeard) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_NoiseInstigator); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnNoiseHeard(Z_Param_NoiseInstigator,Z_Param_Out_Location,Z_Param_Volume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPawnSeen) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_SeenPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPawnSeen(Z_Param_SeenPawn); \
		P_NATIVE_END; \
	}


#define Game_Source_Game_Characters_AICharacterBase_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_GuardState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_GuardState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetPatrol) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetPatrol(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetOrientation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetOrientation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnNoiseHeard) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_NoiseInstigator); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnNoiseHeard(Z_Param_NoiseInstigator,Z_Param_Out_Location,Z_Param_Volume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPawnSeen) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_SeenPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPawnSeen(Z_Param_SeenPawn); \
		P_NATIVE_END; \
	}


#define Game_Source_Game_Characters_AICharacterBase_h_27_EVENT_PARMS \
	struct AICharacterBase_eventOnStateChanged_Parms \
	{ \
		EAIState NewState; \
	};


#define Game_Source_Game_Characters_AICharacterBase_h_27_CALLBACK_WRAPPERS
#define Game_Source_Game_Characters_AICharacterBase_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAICharacterBase(); \
	friend struct Z_Construct_UClass_AAICharacterBase_Statics; \
public: \
	DECLARE_CLASS(AAICharacterBase, ACharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game"), NO_API) \
	DECLARE_SERIALIZER(AAICharacterBase) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Game_Source_Game_Characters_AICharacterBase_h_27_INCLASS \
private: \
	static void StaticRegisterNativesAAICharacterBase(); \
	friend struct Z_Construct_UClass_AAICharacterBase_Statics; \
public: \
	DECLARE_CLASS(AAICharacterBase, ACharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game"), NO_API) \
	DECLARE_SERIALIZER(AAICharacterBase) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Game_Source_Game_Characters_AICharacterBase_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAICharacterBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAICharacterBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAICharacterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAICharacterBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAICharacterBase(AAICharacterBase&&); \
	NO_API AAICharacterBase(const AAICharacterBase&); \
public:


#define Game_Source_Game_Characters_AICharacterBase_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAICharacterBase(AAICharacterBase&&); \
	NO_API AAICharacterBase(const AAICharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAICharacterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAICharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAICharacterBase)


#define Game_Source_Game_Characters_AICharacterBase_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PawnSensingComp() { return STRUCT_OFFSET(AAICharacterBase, PawnSensingComp); } \
	FORCEINLINE static uint32 __PPO__GuardState() { return STRUCT_OFFSET(AAICharacterBase, GuardState); } \
	FORCEINLINE static uint32 __PPO__bPatrol() { return STRUCT_OFFSET(AAICharacterBase, bPatrol); } \
	FORCEINLINE static uint32 __PPO__FirstPatrolPoint() { return STRUCT_OFFSET(AAICharacterBase, FirstPatrolPoint); } \
	FORCEINLINE static uint32 __PPO__SecondPatrolPoint() { return STRUCT_OFFSET(AAICharacterBase, SecondPatrolPoint); }


#define Game_Source_Game_Characters_AICharacterBase_h_24_PROLOG \
	Game_Source_Game_Characters_AICharacterBase_h_27_EVENT_PARMS


#define Game_Source_Game_Characters_AICharacterBase_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Game_Characters_AICharacterBase_h_27_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Game_Characters_AICharacterBase_h_27_SPARSE_DATA \
	Game_Source_Game_Characters_AICharacterBase_h_27_RPC_WRAPPERS \
	Game_Source_Game_Characters_AICharacterBase_h_27_CALLBACK_WRAPPERS \
	Game_Source_Game_Characters_AICharacterBase_h_27_INCLASS \
	Game_Source_Game_Characters_AICharacterBase_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Game_Source_Game_Characters_AICharacterBase_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Game_Characters_AICharacterBase_h_27_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Game_Characters_AICharacterBase_h_27_SPARSE_DATA \
	Game_Source_Game_Characters_AICharacterBase_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_Source_Game_Characters_AICharacterBase_h_27_CALLBACK_WRAPPERS \
	Game_Source_Game_Characters_AICharacterBase_h_27_INCLASS_NO_PURE_DECLS \
	Game_Source_Game_Characters_AICharacterBase_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAME_API UClass* StaticClass<class AAICharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Source_Game_Characters_AICharacterBase_h


#define FOREACH_ENUM_EAISTATE(op) \
	op(EAIState::Idle) \
	op(EAIState::Suspicious) \
	op(EAIState::Alerted) \
	op(EAIState::Attack) 

enum class EAIState : uint8;
template<> GAME_API UEnum* StaticEnum<EAIState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
