// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEProject/Notifies/ANCActiveCombo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeANCActiveCombo() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UEPROJECT_API UClass* Z_Construct_UClass_UANCActiveCombo();
	UEPROJECT_API UClass* Z_Construct_UClass_UANCActiveCombo_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UEProject();
// End Cross Module References
	void UANCActiveCombo::StaticRegisterNativesUANCActiveCombo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UANCActiveCombo);
	UClass* Z_Construct_UClass_UANCActiveCombo_NoRegister()
	{
		return UANCActiveCombo::StaticClass();
	}
	struct Z_Construct_UClass_UANCActiveCombo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UANCActiveCombo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_UEProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UANCActiveCombo_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Notifies/ANCActiveCombo.h" },
		{ "ModuleRelativePath", "Notifies/ANCActiveCombo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UANCActiveCombo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UANCActiveCombo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UANCActiveCombo_Statics::ClassParams = {
		&UANCActiveCombo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UANCActiveCombo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UANCActiveCombo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UANCActiveCombo()
	{
		if (!Z_Registration_Info_UClass_UANCActiveCombo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UANCActiveCombo.OuterSingleton, Z_Construct_UClass_UANCActiveCombo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UANCActiveCombo.OuterSingleton;
	}
	template<> UEPROJECT_API UClass* StaticClass<UANCActiveCombo>()
	{
		return UANCActiveCombo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UANCActiveCombo);
	UANCActiveCombo::~UANCActiveCombo() {}
	struct Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANCActiveCombo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANCActiveCombo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UANCActiveCombo, UANCActiveCombo::StaticClass, TEXT("UANCActiveCombo"), &Z_Registration_Info_UClass_UANCActiveCombo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UANCActiveCombo), 1731149364U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANCActiveCombo_h_3992545483(TEXT("/Script/UEProject"),
		Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANCActiveCombo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANCActiveCombo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
