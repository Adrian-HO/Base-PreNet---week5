// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAME_GameModeDefault_generated_h
#error "GameModeDefault.generated.h already included, missing '#pragma once' in GameModeDefault.h"
#endif
#define GAME_GameModeDefault_generated_h

#define Game_Source_Game_Gameplay_GameModeDefault_h_11_SPARSE_DATA
#define Game_Source_Game_Gameplay_GameModeDefault_h_11_RPC_WRAPPERS
#define Game_Source_Game_Gameplay_GameModeDefault_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define Game_Source_Game_Gameplay_GameModeDefault_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameModeDefault(); \
	friend struct Z_Construct_UClass_AGameModeDefault_Statics; \
public: \
	DECLARE_CLASS(AGameModeDefault, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game"), NO_API) \
	DECLARE_SERIALIZER(AGameModeDefault)


#define Game_Source_Game_Gameplay_GameModeDefault_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAGameModeDefault(); \
	friend struct Z_Construct_UClass_AGameModeDefault_Statics; \
public: \
	DECLARE_CLASS(AGameModeDefault, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game"), NO_API) \
	DECLARE_SERIALIZER(AGameModeDefault)


#define Game_Source_Game_Gameplay_GameModeDefault_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameModeDefault(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameModeDefault) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameModeDefault); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameModeDefault); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameModeDefault(AGameModeDefault&&); \
	NO_API AGameModeDefault(const AGameModeDefault&); \
public:


#define Game_Source_Game_Gameplay_GameModeDefault_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameModeDefault(AGameModeDefault&&); \
	NO_API AGameModeDefault(const AGameModeDefault&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameModeDefault); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameModeDefault); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameModeDefault)


#define Game_Source_Game_Gameplay_GameModeDefault_h_11_PRIVATE_PROPERTY_OFFSET
#define Game_Source_Game_Gameplay_GameModeDefault_h_8_PROLOG
#define Game_Source_Game_Gameplay_GameModeDefault_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Game_Gameplay_GameModeDefault_h_11_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Game_Gameplay_GameModeDefault_h_11_SPARSE_DATA \
	Game_Source_Game_Gameplay_GameModeDefault_h_11_RPC_WRAPPERS \
	Game_Source_Game_Gameplay_GameModeDefault_h_11_INCLASS \
	Game_Source_Game_Gameplay_GameModeDefault_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Game_Source_Game_Gameplay_GameModeDefault_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Game_Gameplay_GameModeDefault_h_11_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Game_Gameplay_GameModeDefault_h_11_SPARSE_DATA \
	Game_Source_Game_Gameplay_GameModeDefault_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_Source_Game_Gameplay_GameModeDefault_h_11_INCLASS_NO_PURE_DECLS \
	Game_Source_Game_Gameplay_GameModeDefault_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAME_API UClass* StaticClass<class AGameModeDefault>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Source_Game_Gameplay_GameModeDefault_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
