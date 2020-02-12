// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game/Gameplay/GameModeDefault.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameModeDefault() {}
// Cross Module References
	GAME_API UClass* Z_Construct_UClass_AGameModeDefault_NoRegister();
	GAME_API UClass* Z_Construct_UClass_AGameModeDefault();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Game();
// End Cross Module References
	void AGameModeDefault::StaticRegisterNativesAGameModeDefault()
	{
	}
	UClass* Z_Construct_UClass_AGameModeDefault_NoRegister()
	{
		return AGameModeDefault::StaticClass();
	}
	struct Z_Construct_UClass_AGameModeDefault_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameModeDefault_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModeDefault_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Gameplay/GameModeDefault.h" },
		{ "ModuleRelativePath", "Gameplay/GameModeDefault.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameModeDefault_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameModeDefault>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameModeDefault_Statics::ClassParams = {
		&AGameModeDefault::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGameModeDefault_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameModeDefault_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameModeDefault()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameModeDefault_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameModeDefault, 114625693);
	template<> GAME_API UClass* StaticClass<AGameModeDefault>()
	{
		return AGameModeDefault::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameModeDefault(Z_Construct_UClass_AGameModeDefault, &AGameModeDefault::StaticClass, TEXT("/Script/Game"), TEXT("AGameModeDefault"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameModeDefault);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
