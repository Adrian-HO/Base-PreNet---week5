// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game/Gameplay/Health/HealthComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthComponent() {}
// Cross Module References
	GAME_API UFunction* Z_Construct_UDelegateFunction_Game_OnDeathSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Game();
	GAME_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
	GAME_API UClass* Z_Construct_UClass_UHealthComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	GAME_API UFunction* Z_Construct_UFunction_UHealthComponent_IsDead();
	GAME_API UFunction* Z_Construct_UFunction_UHealthComponent_OnTakeAnyDamage();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Game_OnDeathSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Game_OnDeathSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//TODO 1: Study this Class\n" },
		{ "ModuleRelativePath", "Gameplay/Health/HealthComponent.h" },
		{ "ToolTip", "TODO 1: Study this Class" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Game_OnDeathSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Game, nullptr, "OnDeathSignature__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Game_OnDeathSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Game_OnDeathSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Game_OnDeathSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Game_OnDeathSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UHealthComponent::StaticRegisterNativesUHealthComponent()
	{
		UClass* Class = UHealthComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsDead", &UHealthComponent::execIsDead },
			{ "OnTakeAnyDamage", &UHealthComponent::execOnTakeAnyDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHealthComponent_IsDead_Statics
	{
		struct HealthComponent_eventIsDead_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHealthComponent_IsDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HealthComponent_eventIsDead_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHealthComponent_IsDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HealthComponent_eventIsDead_Parms), &Z_Construct_UFunction_UHealthComponent_IsDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthComponent_IsDead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_IsDead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthComponent_IsDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gameplay/Health/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_IsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "IsDead", nullptr, nullptr, sizeof(HealthComponent_eventIsDead_Parms), Z_Construct_UFunction_UHealthComponent_IsDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_IsDead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthComponent_IsDead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_IsDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthComponent_IsDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealthComponent_IsDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealthComponent_OnTakeAnyDamage_Statics
	{
		struct HealthComponent_eventOnTakeAnyDamage_Parms
		{
			AActor* DamagedActor;
			float Damage;
			const UDamageType* DamageType;
			AController* InstigatedBy;
			AActor* DamageCauser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_OnTakeAnyDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventOnTakeAnyDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_OnTakeAnyDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventOnTakeAnyDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthComponent_OnTakeAnyDamage_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_OnTakeAnyDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventOnTakeAnyDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHealthComponent_OnTakeAnyDamage_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_OnTakeAnyDamage_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealthComponent_OnTakeAnyDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventOnTakeAnyDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_OnTakeAnyDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthComponent_eventOnTakeAnyDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthComponent_OnTakeAnyDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_OnTakeAnyDamage_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_OnTakeAnyDamage_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_OnTakeAnyDamage_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_OnTakeAnyDamage_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_OnTakeAnyDamage_Statics::NewProp_DamagedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthComponent_OnTakeAnyDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gameplay/Health/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_OnTakeAnyDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "OnTakeAnyDamage", nullptr, nullptr, sizeof(HealthComponent_eventOnTakeAnyDamage_Parms), Z_Construct_UFunction_UHealthComponent_OnTakeAnyDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_OnTakeAnyDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthComponent_OnTakeAnyDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_OnTakeAnyDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthComponent_OnTakeAnyDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealthComponent_OnTakeAnyDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHealthComponent_NoRegister()
	{
		return UHealthComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHealthComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDeath_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumHealth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHealthComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHealthComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHealthComponent_IsDead, "IsDead" }, // 326203413
		{ &Z_Construct_UFunction_UHealthComponent_OnTakeAnyDamage, "OnTakeAnyDamage" }, // 502584019
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Gameplay/Health/HealthComponent.h" },
		{ "ModuleRelativePath", "Gameplay/Health/HealthComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnDeath_MetaData[] = {
		{ "ModuleRelativePath", "Gameplay/Health/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnDeath = { "OnDeath", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHealthComponent, OnDeath), Z_Construct_UDelegateFunction_Game_OnDeathSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnDeath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnDeath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthComponent_Statics::NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "HealthComponent" },
		{ "ModuleRelativePath", "Gameplay/Health/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000034, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHealthComponent, CurrentHealth), METADATA_PARAMS(Z_Construct_UClass_UHealthComponent_Statics::NewProp_CurrentHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::NewProp_CurrentHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthComponent_Statics::NewProp_MaximumHealth_MetaData[] = {
		{ "Category", "HealthComponent" },
		{ "ModuleRelativePath", "Gameplay/Health/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_MaximumHealth = { "MaximumHealth", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHealthComponent, MaximumHealth), METADATA_PARAMS(Z_Construct_UClass_UHealthComponent_Statics::NewProp_MaximumHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::NewProp_MaximumHealth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHealthComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnDeath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_CurrentHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_MaximumHealth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHealthComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealthComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHealthComponent_Statics::ClassParams = {
		&UHealthComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHealthComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHealthComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHealthComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHealthComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHealthComponent, 2078676517);
	template<> GAME_API UClass* StaticClass<UHealthComponent>()
	{
		return UHealthComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHealthComponent(Z_Construct_UClass_UHealthComponent, &UHealthComponent::StaticClass, TEXT("/Script/Game"), TEXT("UHealthComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHealthComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
