// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEProject/AI/CMonsterAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCMonsterAIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UEPROJECT_API UClass* Z_Construct_UClass_ACMonsterAIController();
	UEPROJECT_API UClass* Z_Construct_UClass_ACMonsterAIController_NoRegister();
	UEPROJECT_API UClass* Z_Construct_UClass_UCBehaviorComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UEProject();
// End Cross Module References
	DEFINE_FUNCTION(ACMonsterAIController::execOnPerceptionUpdated)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_UpdateActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPerceptionUpdated(Z_Param_Out_UpdateActors);
		P_NATIVE_END;
	}
	void ACMonsterAIController::StaticRegisterNativesACMonsterAIController()
	{
		UClass* Class = ACMonsterAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPerceptionUpdated", &ACMonsterAIController::execOnPerceptionUpdated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACMonsterAIController_OnPerceptionUpdated_Statics
	{
		struct CMonsterAIController_eventOnPerceptionUpdated_Parms
		{
			TArray<AActor*> UpdateActors;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UpdateActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UpdateActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACMonsterAIController_OnPerceptionUpdated_Statics::NewProp_UpdateActors_Inner = { "UpdateActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACMonsterAIController_OnPerceptionUpdated_Statics::NewProp_UpdateActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ACMonsterAIController_OnPerceptionUpdated_Statics::NewProp_UpdateActors = { "UpdateActors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CMonsterAIController_eventOnPerceptionUpdated_Parms, UpdateActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ACMonsterAIController_OnPerceptionUpdated_Statics::NewProp_UpdateActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACMonsterAIController_OnPerceptionUpdated_Statics::NewProp_UpdateActors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACMonsterAIController_OnPerceptionUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACMonsterAIController_OnPerceptionUpdated_Statics::NewProp_UpdateActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACMonsterAIController_OnPerceptionUpdated_Statics::NewProp_UpdateActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACMonsterAIController_OnPerceptionUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/CMonsterAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACMonsterAIController_OnPerceptionUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACMonsterAIController, nullptr, "OnPerceptionUpdated", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACMonsterAIController_OnPerceptionUpdated_Statics::CMonsterAIController_eventOnPerceptionUpdated_Parms), Z_Construct_UFunction_ACMonsterAIController_OnPerceptionUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACMonsterAIController_OnPerceptionUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACMonsterAIController_OnPerceptionUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACMonsterAIController_OnPerceptionUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACMonsterAIController_OnPerceptionUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACMonsterAIController_OnPerceptionUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACMonsterAIController);
	UClass* Z_Construct_UClass_ACMonsterAIController_NoRegister()
	{
		return ACMonsterAIController::StaticClass();
	}
	struct Z_Construct_UClass_ACMonsterAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebug_MetaData[];
#endif
		static void NewProp_bDrawDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdjustCircleHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustCircleHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Perception_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Perception;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Behavior_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Behavior;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACMonsterAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_UEProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACMonsterAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACMonsterAIController_OnPerceptionUpdated, "OnPerceptionUpdated" }, // 1573781957
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACMonsterAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AI/CMonsterAIController.h" },
		{ "ModuleRelativePath", "AI/CMonsterAIController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACMonsterAIController_Statics::NewProp_bDrawDebug_MetaData[] = {
		{ "Category", "CMonsterAIController" },
		{ "ModuleRelativePath", "AI/CMonsterAIController.h" },
	};
#endif
	void Z_Construct_UClass_ACMonsterAIController_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
	{
		((ACMonsterAIController*)Obj)->bDrawDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACMonsterAIController_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACMonsterAIController), &Z_Construct_UClass_ACMonsterAIController_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACMonsterAIController_Statics::NewProp_bDrawDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACMonsterAIController_Statics::NewProp_bDrawDebug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACMonsterAIController_Statics::NewProp_AttackRange_MetaData[] = {
		{ "Category", "CMonsterAIController" },
		{ "ModuleRelativePath", "AI/CMonsterAIController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACMonsterAIController_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACMonsterAIController, AttackRange), METADATA_PARAMS(Z_Construct_UClass_ACMonsterAIController_Statics::NewProp_AttackRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACMonsterAIController_Statics::NewProp_AttackRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACMonsterAIController_Statics::NewProp_AdjustCircleHeight_MetaData[] = {
		{ "Category", "CMonsterAIController" },
		{ "ModuleRelativePath", "AI/CMonsterAIController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACMonsterAIController_Statics::NewProp_AdjustCircleHeight = { "AdjustCircleHeight", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACMonsterAIController, AdjustCircleHeight), METADATA_PARAMS(Z_Construct_UClass_ACMonsterAIController_Statics::NewProp_AdjustCircleHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACMonsterAIController_Statics::NewProp_AdjustCircleHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACMonsterAIController_Statics::NewProp_Perception_MetaData[] = {
		{ "Category", "CMonsterAIController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/CMonsterAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACMonsterAIController_Statics::NewProp_Perception = { "Perception", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACMonsterAIController, Perception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACMonsterAIController_Statics::NewProp_Perception_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACMonsterAIController_Statics::NewProp_Perception_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACMonsterAIController_Statics::NewProp_Behavior_MetaData[] = {
		{ "Category", "CMonsterAIController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/CMonsterAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACMonsterAIController_Statics::NewProp_Behavior = { "Behavior", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACMonsterAIController, Behavior), Z_Construct_UClass_UCBehaviorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACMonsterAIController_Statics::NewProp_Behavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACMonsterAIController_Statics::NewProp_Behavior_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACMonsterAIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACMonsterAIController_Statics::NewProp_bDrawDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACMonsterAIController_Statics::NewProp_AttackRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACMonsterAIController_Statics::NewProp_AdjustCircleHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACMonsterAIController_Statics::NewProp_Perception,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACMonsterAIController_Statics::NewProp_Behavior,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACMonsterAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACMonsterAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACMonsterAIController_Statics::ClassParams = {
		&ACMonsterAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACMonsterAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACMonsterAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACMonsterAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACMonsterAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACMonsterAIController()
	{
		if (!Z_Registration_Info_UClass_ACMonsterAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACMonsterAIController.OuterSingleton, Z_Construct_UClass_ACMonsterAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACMonsterAIController.OuterSingleton;
	}
	template<> UEPROJECT_API UClass* StaticClass<ACMonsterAIController>()
	{
		return ACMonsterAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACMonsterAIController);
	ACMonsterAIController::~ACMonsterAIController() {}
	struct Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_AI_CMonsterAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_AI_CMonsterAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACMonsterAIController, ACMonsterAIController::StaticClass, TEXT("ACMonsterAIController"), &Z_Registration_Info_UClass_ACMonsterAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACMonsterAIController), 4100092385U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_AI_CMonsterAIController_h_2136784635(TEXT("/Script/UEProject"),
		Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_AI_CMonsterAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_AI_CMonsterAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
