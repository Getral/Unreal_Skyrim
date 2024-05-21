// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEProject/Components/CBehaviorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCBehaviorComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UEPROJECT_API UClass* Z_Construct_UClass_UCBehaviorComponent();
	UEPROJECT_API UClass* Z_Construct_UClass_UCBehaviorComponent_NoRegister();
	UEPROJECT_API UEnum* Z_Construct_UEnum_UEProject_EBehaviorType();
	UPackage* Z_Construct_UPackage__Script_UEProject();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBehaviorType;
	static UEnum* EBehaviorType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBehaviorType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBehaviorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UEProject_EBehaviorType, Z_Construct_UPackage__Script_UEProject(), TEXT("EBehaviorType"));
		}
		return Z_Registration_Info_UEnum_EBehaviorType.OuterSingleton;
	}
	template<> UEPROJECT_API UEnum* StaticEnum<EBehaviorType>()
	{
		return EBehaviorType_StaticEnum();
	}
	struct Z_Construct_UEnum_UEProject_EBehaviorType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UEProject_EBehaviorType_Statics::Enumerators[] = {
		{ "EBehaviorType::Wait", (int64)EBehaviorType::Wait },
		{ "EBehaviorType::Patrol", (int64)EBehaviorType::Patrol },
		{ "EBehaviorType::Trace", (int64)EBehaviorType::Trace },
		{ "EBehaviorType::Attack", (int64)EBehaviorType::Attack },
		{ "EBehaviorType::Hit", (int64)EBehaviorType::Hit },
		{ "EBehaviorType::Death", (int64)EBehaviorType::Death },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UEProject_EBehaviorType_Statics::Enum_MetaDataParams[] = {
		{ "Attack.Name", "EBehaviorType::Attack" },
		{ "BlueprintType", "true" },
		{ "Death.Name", "EBehaviorType::Death" },
		{ "Hit.Name", "EBehaviorType::Hit" },
		{ "ModuleRelativePath", "Components/CBehaviorComponent.h" },
		{ "Patrol.Name", "EBehaviorType::Patrol" },
		{ "Trace.Name", "EBehaviorType::Trace" },
		{ "Wait.Name", "EBehaviorType::Wait" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UEProject_EBehaviorType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UEProject,
		nullptr,
		"EBehaviorType",
		"EBehaviorType",
		Z_Construct_UEnum_UEProject_EBehaviorType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UEProject_EBehaviorType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UEProject_EBehaviorType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UEProject_EBehaviorType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UEProject_EBehaviorType()
	{
		if (!Z_Registration_Info_UEnum_EBehaviorType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBehaviorType.InnerSingleton, Z_Construct_UEnum_UEProject_EBehaviorType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBehaviorType.InnerSingleton;
	}
	DEFINE_FUNCTION(UCBehaviorComponent::execIsType)
	{
		P_GET_ENUM(EBehaviorType,Z_Param_InType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsType(EBehaviorType(Z_Param_InType));
		P_NATIVE_END;
	}
	void UCBehaviorComponent::StaticRegisterNativesUCBehaviorComponent()
	{
		UClass* Class = UCBehaviorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsType", &UCBehaviorComponent::execIsType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCBehaviorComponent_IsType_Statics
	{
		struct CBehaviorComponent_eventIsType_Parms
		{
			EBehaviorType InType;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCBehaviorComponent_IsType_Statics::NewProp_InType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCBehaviorComponent_IsType_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CBehaviorComponent_eventIsType_Parms, InType), Z_Construct_UEnum_UEProject_EBehaviorType, METADATA_PARAMS(nullptr, 0) }; // 1883138704
	void Z_Construct_UFunction_UCBehaviorComponent_IsType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CBehaviorComponent_eventIsType_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCBehaviorComponent_IsType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CBehaviorComponent_eventIsType_Parms), &Z_Construct_UFunction_UCBehaviorComponent_IsType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCBehaviorComponent_IsType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCBehaviorComponent_IsType_Statics::NewProp_InType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCBehaviorComponent_IsType_Statics::NewProp_InType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCBehaviorComponent_IsType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCBehaviorComponent_IsType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CBehaviorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCBehaviorComponent_IsType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCBehaviorComponent, nullptr, "IsType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCBehaviorComponent_IsType_Statics::CBehaviorComponent_eventIsType_Parms), Z_Construct_UFunction_UCBehaviorComponent_IsType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCBehaviorComponent_IsType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCBehaviorComponent_IsType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCBehaviorComponent_IsType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCBehaviorComponent_IsType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCBehaviorComponent_IsType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCBehaviorComponent);
	UClass* Z_Construct_UClass_UCBehaviorComponent_NoRegister()
	{
		return UCBehaviorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCBehaviorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorKey_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BehaviorKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerKey_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PlayerKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCBehaviorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UEProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCBehaviorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCBehaviorComponent_IsType, "IsType" }, // 1951913574
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCBehaviorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/CBehaviorComponent.h" },
		{ "ModuleRelativePath", "Components/CBehaviorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCBehaviorComponent_Statics::NewProp_BehaviorKey_MetaData[] = {
		{ "Category", "CBehaviorComponent" },
		{ "ModuleRelativePath", "Components/CBehaviorComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCBehaviorComponent_Statics::NewProp_BehaviorKey = { "BehaviorKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCBehaviorComponent, BehaviorKey), METADATA_PARAMS(Z_Construct_UClass_UCBehaviorComponent_Statics::NewProp_BehaviorKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCBehaviorComponent_Statics::NewProp_BehaviorKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCBehaviorComponent_Statics::NewProp_PlayerKey_MetaData[] = {
		{ "Category", "CBehaviorComponent" },
		{ "ModuleRelativePath", "Components/CBehaviorComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCBehaviorComponent_Statics::NewProp_PlayerKey = { "PlayerKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCBehaviorComponent, PlayerKey), METADATA_PARAMS(Z_Construct_UClass_UCBehaviorComponent_Statics::NewProp_PlayerKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCBehaviorComponent_Statics::NewProp_PlayerKey_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCBehaviorComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCBehaviorComponent_Statics::NewProp_BehaviorKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCBehaviorComponent_Statics::NewProp_PlayerKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCBehaviorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCBehaviorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCBehaviorComponent_Statics::ClassParams = {
		&UCBehaviorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCBehaviorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCBehaviorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCBehaviorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCBehaviorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCBehaviorComponent()
	{
		if (!Z_Registration_Info_UClass_UCBehaviorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCBehaviorComponent.OuterSingleton, Z_Construct_UClass_UCBehaviorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCBehaviorComponent.OuterSingleton;
	}
	template<> UEPROJECT_API UClass* StaticClass<UCBehaviorComponent>()
	{
		return UCBehaviorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCBehaviorComponent);
	UCBehaviorComponent::~UCBehaviorComponent() {}
	struct Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Components_CBehaviorComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Components_CBehaviorComponent_h_Statics::EnumInfo[] = {
		{ EBehaviorType_StaticEnum, TEXT("EBehaviorType"), &Z_Registration_Info_UEnum_EBehaviorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1883138704U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Components_CBehaviorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCBehaviorComponent, UCBehaviorComponent::StaticClass, TEXT("UCBehaviorComponent"), &Z_Registration_Info_UClass_UCBehaviorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCBehaviorComponent), 137311858U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Components_CBehaviorComponent_h_985027984(TEXT("/Script/UEProject"),
		Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Components_CBehaviorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Components_CBehaviorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Components_CBehaviorComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Components_CBehaviorComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
