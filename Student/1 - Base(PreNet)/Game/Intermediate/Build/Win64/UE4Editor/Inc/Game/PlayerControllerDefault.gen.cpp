// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game/Gameplay/PlayerControllerDefault.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerControllerDefault() {}
// Cross Module References
	GAME_API UClass* Z_Construct_UClass_APlayerControllerDefault_NoRegister();
	GAME_API UClass* Z_Construct_UClass_APlayerControllerDefault();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Game();
// End Cross Module References
	void APlayerControllerDefault::StaticRegisterNativesAPlayerControllerDefault()
	{
	}
	UClass* Z_Construct_UClass_APlayerControllerDefault_NoRegister()
	{
		return APlayerControllerDefault::StaticClass();
	}
	struct Z_Construct_UClass_APlayerControllerDefault_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerControllerDefault_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerControllerDefault_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//TODO 1: Study this Class\n" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Gameplay/PlayerControllerDefault.h" },
		{ "ModuleRelativePath", "Gameplay/PlayerControllerDefault.h" },
		{ "ToolTip", "TODO 1: Study this Class" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerControllerDefault_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerControllerDefault>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerControllerDefault_Statics::ClassParams = {
		&APlayerControllerDefault::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerControllerDefault_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerControllerDefault_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerControllerDefault()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerControllerDefault_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerControllerDefault, 2266115361);
	template<> GAME_API UClass* StaticClass<APlayerControllerDefault>()
	{
		return APlayerControllerDefault::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerControllerDefault(Z_Construct_UClass_APlayerControllerDefault, &APlayerControllerDefault::StaticClass, TEXT("/Script/Game"), TEXT("APlayerControllerDefault"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerControllerDefault);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
