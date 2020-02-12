// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAME_ItemBase_generated_h
#error "ItemBase.generated.h already included, missing '#pragma once' in ItemBase.h"
#endif
#define GAME_ItemBase_generated_h

#define Game_Source_Game_Items_ItemBase_h_13_SPARSE_DATA
#define Game_Source_Game_Items_ItemBase_h_13_RPC_WRAPPERS
#define Game_Source_Game_Items_ItemBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Game_Source_Game_Items_ItemBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItemBase(); \
	friend struct Z_Construct_UClass_AItemBase_Statics; \
public: \
	DECLARE_CLASS(AItemBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game"), NO_API) \
	DECLARE_SERIALIZER(AItemBase)


#define Game_Source_Game_Items_ItemBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAItemBase(); \
	friend struct Z_Construct_UClass_AItemBase_Statics; \
public: \
	DECLARE_CLASS(AItemBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game"), NO_API) \
	DECLARE_SERIALIZER(AItemBase)


#define Game_Source_Game_Items_ItemBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AItemBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AItemBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItemBase(AItemBase&&); \
	NO_API AItemBase(const AItemBase&); \
public:


#define Game_Source_Game_Items_ItemBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItemBase(AItemBase&&); \
	NO_API AItemBase(const AItemBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItemBase)


#define Game_Source_Game_Items_ItemBase_h_13_PRIVATE_PROPERTY_OFFSET
#define Game_Source_Game_Items_ItemBase_h_10_PROLOG
#define Game_Source_Game_Items_ItemBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Game_Items_ItemBase_h_13_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Game_Items_ItemBase_h_13_SPARSE_DATA \
	Game_Source_Game_Items_ItemBase_h_13_RPC_WRAPPERS \
	Game_Source_Game_Items_ItemBase_h_13_INCLASS \
	Game_Source_Game_Items_ItemBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Game_Source_Game_Items_ItemBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Game_Items_ItemBase_h_13_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Game_Items_ItemBase_h_13_SPARSE_DATA \
	Game_Source_Game_Items_ItemBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_Source_Game_Items_ItemBase_h_13_INCLASS_NO_PURE_DECLS \
	Game_Source_Game_Items_ItemBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAME_API UClass* StaticClass<class AItemBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Source_Game_Items_ItemBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
