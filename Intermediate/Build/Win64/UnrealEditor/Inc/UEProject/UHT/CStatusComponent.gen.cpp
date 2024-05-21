// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEProject/Components/CStatusComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCStatusComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UEPROJECT_API UClass* Z_Construct_UClass_UCStatusComponent();
	UEPROJECT_API UClass* Z_Construct_UClass_UCStatusComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UEProject();
// End Cross Module References
	void UCStatusComponent::StaticRegisterNativesUCStatusComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCStatusComponent);
	UClass* Z_Construct_UClass_UCStatusComponent_NoRegister()
	{
		return UCStatusComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCStatusComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attack_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Attack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Defence_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Defence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CriticalRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CriticalRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CriticalAttack_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CriticalAttack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCStatusComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UEProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCStatusComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/CStatusComponent.h" },
		{ "ModuleRelativePath", "Components/CStatusComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCStatusComponent_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "CStatusComponent" },
		{ "ModuleRelativePath", "Components/CStatusComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCStatusComponent_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCStatusComponent, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_UCStatusComponent_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCStatusComponent_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCStatusComponent_Statics::NewProp_Attack_MetaData[] = {
		{ "Category", "CStatusComponent" },
		{ "ModuleRelativePath", "Components/CStatusComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCStatusComponent_Statics::NewProp_Attack = { "Attack", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCStatusComponent, Attack), METADATA_PARAMS(Z_Construct_UClass_UCStatusComponent_Statics::NewProp_Attack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCStatusComponent_Statics::NewProp_Attack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCStatusComponent_Statics::NewProp_Defence_MetaData[] = {
		{ "Category", "CStatusComponent" },
		{ "ModuleRelativePath", "Components/CStatusComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCStatusComponent_Statics::NewProp_Defence = { "Defence", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCStatusComponent, Defence), METADATA_PARAMS(Z_Construct_UClass_UCStatusComponent_Statics::NewProp_Defence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCStatusComponent_Statics::NewProp_Defence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCStatusComponent_Statics::NewProp_CriticalRate_MetaData[] = {
		{ "Category", "CStatusComponent" },
		{ "ModuleRelativePath", "Components/CStatusComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCStatusComponent_Statics::NewProp_CriticalRate = { "CriticalRate", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCStatusComponent, CriticalRate), METADATA_PARAMS(Z_Construct_UClass_UCStatusComponent_Statics::NewProp_CriticalRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCStatusComponent_Statics::NewProp_CriticalRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCStatusComponent_Statics::NewProp_CriticalAttack_MetaData[] = {
		{ "Category", "CStatusComponent" },
		{ "ModuleRelativePath", "Components/CStatusComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCStatusComponent_Statics::NewProp_CriticalAttack = { "CriticalAttack", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCStatusComponent, CriticalAttack), METADATA_PARAMS(Z_Construct_UClass_UCStatusComponent_Statics::NewProp_CriticalAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCStatusComponent_Statics::NewProp_CriticalAttack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCStatusComponent_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "CStatusComponent" },
		{ "ModuleRelativePath", "Components/CStatusComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCStatusComponent_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCStatusComponent, Speed), METADATA_PARAMS(Z_Construct_UClass_UCStatusComponent_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCStatusComponent_Statics::NewProp_Speed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCStatusComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCStatusComponent_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCStatusComponent_Statics::NewProp_Attack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCStatusComponent_Statics::NewProp_Defence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCStatusComponent_Statics::NewProp_CriticalRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCStatusComponent_Statics::NewProp_CriticalAttack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCStatusComponent_Statics::NewProp_Speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCStatusComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCStatusComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCStatusComponent_Statics::ClassParams = {
		&UCStatusComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCStatusComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCStatusComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCStatusComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCStatusComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCStatusComponent()
	{
		if (!Z_Registration_Info_UClass_UCStatusComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCStatusComponent.OuterSingleton, Z_Construct_UClass_UCStatusComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCStatusComponent.OuterSingleton;
	}
	template<> UEPROJECT_API UClass* StaticClass<UCStatusComponent>()
	{
		return UCStatusComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCStatusComponent);
	UCStatusComponent::~UCStatusComponent() {}
	struct Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Components_CStatusComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Components_CStatusComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCStatusComponent, UCStatusComponent::StaticClass, TEXT("UCStatusComponent"), &Z_Registration_Info_UClass_UCStatusComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCStatusComponent), 324920296U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Components_CStatusComponent_h_343681849(TEXT("/Script/UEProject"),
		Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Components_CStatusComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Components_CStatusComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
