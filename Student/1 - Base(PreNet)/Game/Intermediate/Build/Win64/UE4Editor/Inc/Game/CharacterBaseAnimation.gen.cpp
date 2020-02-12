// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game/Characters/CharacterBaseAnimation.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterBaseAnimation() {}
// Cross Module References
	GAME_API UClass* Z_Construct_UClass_UCharacterBaseAnimation_NoRegister();
	GAME_API UClass* Z_Construct_UClass_UCharacterBaseAnimation();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Game();
// End Cross Module References
	void UCharacterBaseAnimation::StaticRegisterNativesUCharacterBaseAnimation()
	{
	}
	UClass* Z_Construct_UClass_UCharacterBaseAnimation_NoRegister()
	{
		return UCharacterBaseAnimation::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterBaseAnimation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrafingRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StrafingRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMoving_MetaData[];
#endif
		static void NewProp_bIsMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAiming_MetaData[];
#endif
		static void NewProp_bIsAiming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAiming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasWeapon_MetaData[];
#endif
		static void NewProp_bHasWeapon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasWeapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterBaseAnimation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterBaseAnimation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//TODO 1: Study this Class\n" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Characters/CharacterBaseAnimation.h" },
		{ "ModuleRelativePath", "Characters/CharacterBaseAnimation.h" },
		{ "ToolTip", "TODO 1: Study this Class" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterBaseAnimation_Statics::NewProp_StrafingRotation_MetaData[] = {
		{ "Category", "CharacterBaseAnimation" },
		{ "ModuleRelativePath", "Characters/CharacterBaseAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterBaseAnimation_Statics::NewProp_StrafingRotation = { "StrafingRotation", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterBaseAnimation, StrafingRotation), METADATA_PARAMS(Z_Construct_UClass_UCharacterBaseAnimation_Statics::NewProp_StrafingRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterBaseAnimation_Statics::NewProp_StrafingRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterBaseAnimation_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "CharacterBaseAnimation" },
		{ "ModuleRelativePath", "Characters/CharacterBaseAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterBaseAnimation_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterBaseAnimation, MovementSpeed), METADATA_PARAMS(Z_Construct_UClass_UCharacterBaseAnimation_Statics::NewProp_MovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterBaseAnimation_Statics::NewProp_MovementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterBaseAnimation_Statics::NewProp_bIsMoving_MetaData[] = {
		{ "Category", "CharacterBaseAnimation" },
		{ "ModuleRelativePath", "Characters/CharacterBaseAnimation.h" },
	};
#endif
	void Z_Construct_UClass_UCharacterBaseAnimation_Statics::NewProp_bIsMoving_SetBit(void* Obj)
	{
		((UCharacterBaseAnimation*)Obj)->bIsMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterBaseAnimation_Statics::NewProp_bIsMoving = { "bIsMoving", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCharacterBaseAnimation), &Z_Construct_UClass_UCharacterBaseAnimation_Statics::NewProp_bIsMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCharacterBaseAnimation_Statics::NewProp_bIsMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterBaseAnimation_Statics::NewProp_bIsMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterBaseAnimation_Statics::NewProp_bIsAiming_MetaData[] = {
		{ "Category", "CharacterBaseAnimation" },
		{ "ModuleRelativePath", "Characters/CharacterBaseAnimation.h" },
	};
#endif
	void Z_Construct_UClass_UCharacterBaseAnimation_Statics::NewProp_bIsAiming_SetBit(void* Obj)
	{
		((UCharacterBaseAnimation*)Obj)->bIsAiming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterBaseAnimation_Statics::NewProp_bIsAiming = { "bIsAiming", nullptr, (EPropertyFlags)0x0010000000020035, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCharacterBaseAnimation), &Z_Construct_UClass_UCharacterBaseAnimation_Statics::NewProp_bIsAiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCharacterBaseAnimation_Statics::NewProp_bIsAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterBaseAnimation_Statics::NewProp_bIsAiming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterBaseAnimation_Statics::NewProp_bHasWeapon_MetaData[] = {
		{ "Category", "CharacterBaseAnimation" },
		{ "ModuleRelativePath", "Characters/CharacterBaseAnimation.h" },
	};
#endif
	void Z_Construct_UClass_UCharacterBaseAnimation_Statics::NewProp_bHasWeapon_SetBit(void* Obj)
	{
		((UCharacterBaseAnimation*)Obj)->bHasWeapon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterBaseAnimation_Statics::NewProp_bHasWeapon = { "bHasWeapon", nullptr, (EPropertyFlags)0x0010000000020035, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCharacterBaseAnimation), &Z_Construct_UClass_UCharacterBaseAnimation_Statics::NewProp_bHasWeapon_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCharacterBaseAnimation_Statics::NewProp_bHasWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterBaseAnimation_Statics::NewProp_bHasWeapon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterBaseAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterBaseAnimation_Statics::NewProp_StrafingRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterBaseAnimation_Statics::NewProp_MovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterBaseAnimation_Statics::NewProp_bIsMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterBaseAnimation_Statics::NewProp_bIsAiming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterBaseAnimation_Statics::NewProp_bHasWeapon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterBaseAnimation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterBaseAnimation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterBaseAnimation_Statics::ClassParams = {
		&UCharacterBaseAnimation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCharacterBaseAnimation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterBaseAnimation_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterBaseAnimation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterBaseAnimation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterBaseAnimation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterBaseAnimation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterBaseAnimation, 4082679495);
	template<> GAME_API UClass* StaticClass<UCharacterBaseAnimation>()
	{
		return UCharacterBaseAnimation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterBaseAnimation(Z_Construct_UClass_UCharacterBaseAnimation, &UCharacterBaseAnimation::StaticClass, TEXT("/Script/Game"), TEXT("UCharacterBaseAnimation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterBaseAnimation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
