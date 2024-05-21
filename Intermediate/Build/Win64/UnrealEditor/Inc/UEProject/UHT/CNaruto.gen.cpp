// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEProject/Character/CNaruto.h"
#include "EnhancedInput/Public/InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCNaruto() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
	UEPROJECT_API UClass* Z_Construct_UClass_ACNaruto();
	UEPROJECT_API UClass* Z_Construct_UClass_ACNaruto_NoRegister();
	UEPROJECT_API UClass* Z_Construct_UClass_ACUnit();
	UPackage* Z_Construct_UPackage__Script_UEProject();
// End Cross Module References
	DEFINE_FUNCTION(ACNaruto::execEI_Look)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EI_Look(Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACNaruto::execEI_Move)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EI_Move(Z_Param_Out_value);
		P_NATIVE_END;
	}
	void ACNaruto::StaticRegisterNativesACNaruto()
	{
		UClass* Class = ACNaruto::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EI_Look", &ACNaruto::execEI_Look },
			{ "EI_Move", &ACNaruto::execEI_Move },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACNaruto_EI_Look_Statics
	{
		struct CNaruto_eventEI_Look_Parms
		{
			FInputActionValue value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACNaruto_EI_Look_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACNaruto_EI_Look_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CNaruto_eventEI_Look_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(Z_Construct_UFunction_ACNaruto_EI_Look_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACNaruto_EI_Look_Statics::NewProp_value_MetaData)) }; // 2388133963
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACNaruto_EI_Look_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACNaruto_EI_Look_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACNaruto_EI_Look_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/CNaruto.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACNaruto_EI_Look_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACNaruto, nullptr, "EI_Look", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACNaruto_EI_Look_Statics::CNaruto_eventEI_Look_Parms), Z_Construct_UFunction_ACNaruto_EI_Look_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACNaruto_EI_Look_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACNaruto_EI_Look_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACNaruto_EI_Look_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACNaruto_EI_Look()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACNaruto_EI_Look_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACNaruto_EI_Move_Statics
	{
		struct CNaruto_eventEI_Move_Parms
		{
			FInputActionValue value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACNaruto_EI_Move_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACNaruto_EI_Move_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CNaruto_eventEI_Move_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(Z_Construct_UFunction_ACNaruto_EI_Move_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACNaruto_EI_Move_Statics::NewProp_value_MetaData)) }; // 2388133963
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACNaruto_EI_Move_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACNaruto_EI_Move_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACNaruto_EI_Move_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/CNaruto.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACNaruto_EI_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACNaruto, nullptr, "EI_Move", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACNaruto_EI_Move_Statics::CNaruto_eventEI_Move_Parms), Z_Construct_UFunction_ACNaruto_EI_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACNaruto_EI_Move_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACNaruto_EI_Move_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACNaruto_EI_Move_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACNaruto_EI_Move()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACNaruto_EI_Move_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACNaruto);
	UClass* Z_Construct_UClass_ACNaruto_NoRegister()
	{
		return ACNaruto::StaticClass();
	}
	struct Z_Construct_UClass_ACNaruto_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_Move_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Input_Move;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_Look_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Input_Look;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_Jump_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Input_Jump;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_Attack_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Input_Attack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_EquipSword_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Input_EquipSword;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_EquipRifle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Input_EquipRifle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACNaruto_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACUnit,
		(UObject* (*)())Z_Construct_UPackage__Script_UEProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACNaruto_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACNaruto_EI_Look, "EI_Look" }, // 1626938803
		{ &Z_Construct_UFunction_ACNaruto_EI_Move, "EI_Move" }, // 910622721
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACNaruto_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/CNaruto.h" },
		{ "ModuleRelativePath", "Character/CNaruto.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACNaruto_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "CNaruto" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/CNaruto.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACNaruto_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACNaruto, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACNaruto_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACNaruto_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACNaruto_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "CNaruto" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/CNaruto.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACNaruto_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACNaruto, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACNaruto_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACNaruto_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACNaruto_Statics::NewProp_MappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Enhanced Input\n" },
		{ "ModuleRelativePath", "Character/CNaruto.h" },
		{ "ToolTip", "Enhanced Input" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACNaruto_Statics::NewProp_MappingContext = { "MappingContext", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACNaruto, MappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACNaruto_Statics::NewProp_MappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACNaruto_Statics::NewProp_MappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACNaruto_Statics::NewProp_Input_Move_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Character/CNaruto.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACNaruto_Statics::NewProp_Input_Move = { "Input_Move", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACNaruto, Input_Move), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACNaruto_Statics::NewProp_Input_Move_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACNaruto_Statics::NewProp_Input_Move_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACNaruto_Statics::NewProp_Input_Look_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Character/CNaruto.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACNaruto_Statics::NewProp_Input_Look = { "Input_Look", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACNaruto, Input_Look), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACNaruto_Statics::NewProp_Input_Look_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACNaruto_Statics::NewProp_Input_Look_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACNaruto_Statics::NewProp_Input_Jump_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Character/CNaruto.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACNaruto_Statics::NewProp_Input_Jump = { "Input_Jump", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACNaruto, Input_Jump), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACNaruto_Statics::NewProp_Input_Jump_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACNaruto_Statics::NewProp_Input_Jump_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACNaruto_Statics::NewProp_Input_Attack_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Character/CNaruto.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACNaruto_Statics::NewProp_Input_Attack = { "Input_Attack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACNaruto, Input_Attack), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACNaruto_Statics::NewProp_Input_Attack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACNaruto_Statics::NewProp_Input_Attack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACNaruto_Statics::NewProp_Input_EquipSword_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Character/CNaruto.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACNaruto_Statics::NewProp_Input_EquipSword = { "Input_EquipSword", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACNaruto, Input_EquipSword), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACNaruto_Statics::NewProp_Input_EquipSword_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACNaruto_Statics::NewProp_Input_EquipSword_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACNaruto_Statics::NewProp_Input_EquipRifle_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Character/CNaruto.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACNaruto_Statics::NewProp_Input_EquipRifle = { "Input_EquipRifle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACNaruto, Input_EquipRifle), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACNaruto_Statics::NewProp_Input_EquipRifle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACNaruto_Statics::NewProp_Input_EquipRifle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACNaruto_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACNaruto_Statics::NewProp_SpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACNaruto_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACNaruto_Statics::NewProp_MappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACNaruto_Statics::NewProp_Input_Move,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACNaruto_Statics::NewProp_Input_Look,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACNaruto_Statics::NewProp_Input_Jump,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACNaruto_Statics::NewProp_Input_Attack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACNaruto_Statics::NewProp_Input_EquipSword,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACNaruto_Statics::NewProp_Input_EquipRifle,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACNaruto_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(ACNaruto, IGenericTeamAgentInterface), false },  // 3302830175
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACNaruto_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACNaruto>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACNaruto_Statics::ClassParams = {
		&ACNaruto::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACNaruto_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACNaruto_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACNaruto_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACNaruto_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACNaruto()
	{
		if (!Z_Registration_Info_UClass_ACNaruto.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACNaruto.OuterSingleton, Z_Construct_UClass_ACNaruto_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACNaruto.OuterSingleton;
	}
	template<> UEPROJECT_API UClass* StaticClass<ACNaruto>()
	{
		return ACNaruto::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACNaruto);
	ACNaruto::~ACNaruto() {}
	struct Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Character_CNaruto_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Character_CNaruto_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACNaruto, ACNaruto::StaticClass, TEXT("ACNaruto"), &Z_Registration_Info_UClass_ACNaruto, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACNaruto), 144463245U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Character_CNaruto_h_2698210812(TEXT("/Script/UEProject"),
		Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Character_CNaruto_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Character_CNaruto_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
