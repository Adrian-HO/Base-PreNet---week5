// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game/Characters/AICharacterBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAICharacterBase() {}
// Cross Module References
	GAME_API UEnum* Z_Construct_UEnum_Game_EAIState();
	UPackage* Z_Construct_UPackage__Script_Game();
	GAME_API UClass* Z_Construct_UClass_AAICharacterBase_NoRegister();
	GAME_API UClass* Z_Construct_UClass_AAICharacterBase();
	GAME_API UClass* Z_Construct_UClass_ACharacterBase();
	GAME_API UFunction* Z_Construct_UFunction_AAICharacterBase_OnNoiseHeard();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	GAME_API UFunction* Z_Construct_UFunction_AAICharacterBase_OnPawnSeen();
	GAME_API UFunction* Z_Construct_UFunction_AAICharacterBase_OnRep_GuardState();
	GAME_API UFunction* Z_Construct_UFunction_AAICharacterBase_OnStateChanged();
	GAME_API UFunction* Z_Construct_UFunction_AAICharacterBase_ResetOrientation();
	GAME_API UFunction* Z_Construct_UFunction_AAICharacterBase_ResetPatrol();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
// End Cross Module References
	static UEnum* EAIState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Game_EAIState, Z_Construct_UPackage__Script_Game(), TEXT("EAIState"));
		}
		return Singleton;
	}
	template<> GAME_API UEnum* StaticEnum<EAIState>()
	{
		return EAIState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAIState(EAIState_StaticEnum, TEXT("/Script/Game"), TEXT("EAIState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Game_EAIState_Hash() { return 2413652193U; }
	UEnum* Z_Construct_UEnum_Game_EAIState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAIState"), 0, Get_Z_Construct_UEnum_Game_EAIState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAIState::Idle", (int64)EAIState::Idle },
				{ "EAIState::Suspicious", (int64)EAIState::Suspicious },
				{ "EAIState::Alerted", (int64)EAIState::Alerted },
				{ "EAIState::Attack", (int64)EAIState::Attack },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Alerted.Name", "EAIState::Alerted" },
				{ "Attack.Name", "EAIState::Attack" },
				{ "BlueprintType", "true" },
				{ "Idle.Name", "EAIState::Idle" },
				{ "ModuleRelativePath", "Characters/AICharacterBase.h" },
				{ "Suspicious.Name", "EAIState::Suspicious" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Game,
				nullptr,
				"EAIState",
				"EAIState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static FName NAME_AAICharacterBase_OnStateChanged = FName(TEXT("OnStateChanged"));
	void AAICharacterBase::OnStateChanged(EAIState NewState)
	{
		AICharacterBase_eventOnStateChanged_Parms Parms;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_AAICharacterBase_OnStateChanged),&Parms);
	}
	void AAICharacterBase::StaticRegisterNativesAAICharacterBase()
	{
		UClass* Class = AAICharacterBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnNoiseHeard", &AAICharacterBase::execOnNoiseHeard },
			{ "OnPawnSeen", &AAICharacterBase::execOnPawnSeen },
			{ "OnRep_GuardState", &AAICharacterBase::execOnRep_GuardState },
			{ "ResetOrientation", &AAICharacterBase::execResetOrientation },
			{ "ResetPatrol", &AAICharacterBase::execResetPatrol },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAICharacterBase_OnNoiseHeard_Statics
	{
		struct AICharacterBase_eventOnNoiseHeard_Parms
		{
			APawn* NoiseInstigator;
			FVector Location;
			float Volume;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NoiseInstigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAICharacterBase_OnNoiseHeard_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICharacterBase_eventOnNoiseHeard_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAICharacterBase_OnNoiseHeard_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAICharacterBase_OnNoiseHeard_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICharacterBase_eventOnNoiseHeard_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AAICharacterBase_OnNoiseHeard_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAICharacterBase_OnNoiseHeard_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAICharacterBase_OnNoiseHeard_Statics::NewProp_NoiseInstigator = { "NoiseInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICharacterBase_eventOnNoiseHeard_Parms, NoiseInstigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAICharacterBase_OnNoiseHeard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAICharacterBase_OnNoiseHeard_Statics::NewProp_Volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAICharacterBase_OnNoiseHeard_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAICharacterBase_OnNoiseHeard_Statics::NewProp_NoiseInstigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAICharacterBase_OnNoiseHeard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/AICharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAICharacterBase_OnNoiseHeard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAICharacterBase, nullptr, "OnNoiseHeard", nullptr, nullptr, sizeof(AICharacterBase_eventOnNoiseHeard_Parms), Z_Construct_UFunction_AAICharacterBase_OnNoiseHeard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAICharacterBase_OnNoiseHeard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAICharacterBase_OnNoiseHeard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAICharacterBase_OnNoiseHeard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAICharacterBase_OnNoiseHeard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAICharacterBase_OnNoiseHeard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAICharacterBase_OnPawnSeen_Statics
	{
		struct AICharacterBase_eventOnPawnSeen_Parms
		{
			APawn* SeenPawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SeenPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAICharacterBase_OnPawnSeen_Statics::NewProp_SeenPawn = { "SeenPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICharacterBase_eventOnPawnSeen_Parms, SeenPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAICharacterBase_OnPawnSeen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAICharacterBase_OnPawnSeen_Statics::NewProp_SeenPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAICharacterBase_OnPawnSeen_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Must be a UFUnc otherwise we cant bind this function\n" },
		{ "ModuleRelativePath", "Characters/AICharacterBase.h" },
		{ "ToolTip", "Must be a UFUnc otherwise we cant bind this function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAICharacterBase_OnPawnSeen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAICharacterBase, nullptr, "OnPawnSeen", nullptr, nullptr, sizeof(AICharacterBase_eventOnPawnSeen_Parms), Z_Construct_UFunction_AAICharacterBase_OnPawnSeen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAICharacterBase_OnPawnSeen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAICharacterBase_OnPawnSeen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAICharacterBase_OnPawnSeen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAICharacterBase_OnPawnSeen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAICharacterBase_OnPawnSeen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAICharacterBase_OnRep_GuardState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAICharacterBase_OnRep_GuardState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/AICharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAICharacterBase_OnRep_GuardState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAICharacterBase, nullptr, "OnRep_GuardState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAICharacterBase_OnRep_GuardState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAICharacterBase_OnRep_GuardState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAICharacterBase_OnRep_GuardState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAICharacterBase_OnRep_GuardState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAICharacterBase_OnStateChanged_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAICharacterBase_OnStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICharacterBase_eventOnStateChanged_Parms, NewState), Z_Construct_UEnum_Game_EAIState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAICharacterBase_OnStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAICharacterBase_OnStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAICharacterBase_OnStateChanged_Statics::NewProp_NewState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAICharacterBase_OnStateChanged_Statics::NewProp_NewState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAICharacterBase_OnStateChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Characters/AICharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAICharacterBase_OnStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAICharacterBase, nullptr, "OnStateChanged", nullptr, nullptr, sizeof(AICharacterBase_eventOnStateChanged_Parms), Z_Construct_UFunction_AAICharacterBase_OnStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAICharacterBase_OnStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAICharacterBase_OnStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAICharacterBase_OnStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAICharacterBase_OnStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAICharacterBase_OnStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAICharacterBase_ResetOrientation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAICharacterBase_ResetOrientation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/AICharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAICharacterBase_ResetOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAICharacterBase, nullptr, "ResetOrientation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAICharacterBase_ResetOrientation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAICharacterBase_ResetOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAICharacterBase_ResetOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAICharacterBase_ResetOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAICharacterBase_ResetPatrol_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAICharacterBase_ResetPatrol_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/AICharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAICharacterBase_ResetPatrol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAICharacterBase, nullptr, "ResetPatrol", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAICharacterBase_ResetPatrol_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAICharacterBase_ResetPatrol_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAICharacterBase_ResetPatrol()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAICharacterBase_ResetPatrol_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAICharacterBase_NoRegister()
	{
		return AAICharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_AAICharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondPatrolPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondPatrolPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPatrolPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPatrolPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPatrol_MetaData[];
#endif
		static void NewProp_bPatrol_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPatrol;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuardState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GuardState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GuardState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnSensingComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnSensingComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAICharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAICharacterBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAICharacterBase_OnNoiseHeard, "OnNoiseHeard" }, // 3609024793
		{ &Z_Construct_UFunction_AAICharacterBase_OnPawnSeen, "OnPawnSeen" }, // 2385200327
		{ &Z_Construct_UFunction_AAICharacterBase_OnRep_GuardState, "OnRep_GuardState" }, // 1183014930
		{ &Z_Construct_UFunction_AAICharacterBase_OnStateChanged, "OnStateChanged" }, // 324118620
		{ &Z_Construct_UFunction_AAICharacterBase_ResetOrientation, "ResetOrientation" }, // 1885926888
		{ &Z_Construct_UFunction_AAICharacterBase_ResetPatrol, "ResetPatrol" }, // 3213013625
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICharacterBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/AICharacterBase.h" },
		{ "ModuleRelativePath", "Characters/AICharacterBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICharacterBase_Statics::NewProp_SecondPatrolPoint_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "//Will be enabled if bPatrol is true in the editor props\n" },
		{ "EditCondition", "bPatrol" },
		{ "ModuleRelativePath", "Characters/AICharacterBase.h" },
		{ "ToolTip", "Will be enabled if bPatrol is true in the editor props" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAICharacterBase_Statics::NewProp_SecondPatrolPoint = { "SecondPatrolPoint", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAICharacterBase, SecondPatrolPoint), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAICharacterBase_Statics::NewProp_SecondPatrolPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAICharacterBase_Statics::NewProp_SecondPatrolPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICharacterBase_Statics::NewProp_FirstPatrolPoint_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "//Will be enabled if bPatrol is true in the editor props\n" },
		{ "EditCondition", "bPatrol" },
		{ "ModuleRelativePath", "Characters/AICharacterBase.h" },
		{ "ToolTip", "Will be enabled if bPatrol is true in the editor props" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAICharacterBase_Statics::NewProp_FirstPatrolPoint = { "FirstPatrolPoint", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAICharacterBase, FirstPatrolPoint), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAICharacterBase_Statics::NewProp_FirstPatrolPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAICharacterBase_Statics::NewProp_FirstPatrolPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICharacterBase_Statics::NewProp_bPatrol_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "//Challenge - Adding Patrol\n//Can set in editor for each instance. CAN BE CHANGED ONLY FROM BLUEPRINTS\n" },
		{ "ModuleRelativePath", "Characters/AICharacterBase.h" },
		{ "ToolTip", "Challenge - Adding Patrol\nCan set in editor for each instance. CAN BE CHANGED ONLY FROM BLUEPRINTS" },
	};
#endif
	void Z_Construct_UClass_AAICharacterBase_Statics::NewProp_bPatrol_SetBit(void* Obj)
	{
		((AAICharacterBase*)Obj)->bPatrol = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAICharacterBase_Statics::NewProp_bPatrol = { "bPatrol", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAICharacterBase), &Z_Construct_UClass_AAICharacterBase_Statics::NewProp_bPatrol_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAICharacterBase_Statics::NewProp_bPatrol_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAICharacterBase_Statics::NewProp_bPatrol_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICharacterBase_Statics::NewProp_GuardState_MetaData[] = {
		{ "Comment", "//Net Code\n" },
		{ "ModuleRelativePath", "Characters/AICharacterBase.h" },
		{ "ToolTip", "Net Code" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAICharacterBase_Statics::NewProp_GuardState = { "GuardState", "OnRep_GuardState", (EPropertyFlags)0x0020080100000020, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAICharacterBase, GuardState), Z_Construct_UEnum_Game_EAIState, METADATA_PARAMS(Z_Construct_UClass_AAICharacterBase_Statics::NewProp_GuardState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAICharacterBase_Statics::NewProp_GuardState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAICharacterBase_Statics::NewProp_GuardState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICharacterBase_Statics::NewProp_PawnSensingComp_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "//Add AIModule to Build.cs deps\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/AICharacterBase.h" },
		{ "ToolTip", "Add AIModule to Build.cs deps" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAICharacterBase_Statics::NewProp_PawnSensingComp = { "PawnSensingComp", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAICharacterBase, PawnSensingComp), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAICharacterBase_Statics::NewProp_PawnSensingComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAICharacterBase_Statics::NewProp_PawnSensingComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAICharacterBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICharacterBase_Statics::NewProp_SecondPatrolPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICharacterBase_Statics::NewProp_FirstPatrolPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICharacterBase_Statics::NewProp_bPatrol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICharacterBase_Statics::NewProp_GuardState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICharacterBase_Statics::NewProp_GuardState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICharacterBase_Statics::NewProp_PawnSensingComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAICharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAICharacterBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAICharacterBase_Statics::ClassParams = {
		&AAICharacterBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAICharacterBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAICharacterBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAICharacterBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAICharacterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAICharacterBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAICharacterBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAICharacterBase, 1879167473);
	template<> GAME_API UClass* StaticClass<AAICharacterBase>()
	{
		return AAICharacterBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAICharacterBase(Z_Construct_UClass_AAICharacterBase, &AAICharacterBase::StaticClass, TEXT("/Script/Game"), TEXT("AAICharacterBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAICharacterBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
