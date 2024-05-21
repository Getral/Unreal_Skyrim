// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEProject/Notifies/ANCEndDeath.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeANCEndDeath() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UEPROJECT_API UClass* Z_Construct_UClass_UANCEndDeath();
	UEPROJECT_API UClass* Z_Construct_UClass_UANCEndDeath_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UEProject();
// End Cross Module References
	void UANCEndDeath::StaticRegisterNativesUANCEndDeath()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UANCEndDeath);
	UClass* Z_Construct_UClass_UANCEndDeath_NoRegister()
	{
		return UANCEndDeath::StaticClass();
	}
	struct Z_Construct_UClass_UANCEndDeath_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UANCEndDeath_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_UEProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UANCEndDeath_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Notifies/ANCEndDeath.h" },
		{ "ModuleRelativePath", "Notifies/ANCEndDeath.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UANCEndDeath_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UANCEndDeath>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UANCEndDeath_Statics::ClassParams = {
		&UANCEndDeath::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UANCEndDeath_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UANCEndDeath_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UANCEndDeath()
	{
		if (!Z_Registration_Info_UClass_UANCEndDeath.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UANCEndDeath.OuterSingleton, Z_Construct_UClass_UANCEndDeath_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UANCEndDeath.OuterSingleton;
	}
	template<> UEPROJECT_API UClass* StaticClass<UANCEndDeath>()
	{
		return UANCEndDeath::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UANCEndDeath);
	UANCEndDeath::~UANCEndDeath() {}
	struct Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANCEndDeath_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANCEndDeath_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UANCEndDeath, UANCEndDeath::StaticClass, TEXT("UANCEndDeath"), &Z_Registration_Info_UClass_UANCEndDeath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UANCEndDeath), 2010865032U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANCEndDeath_h_611234954(TEXT("/Script/UEProject"),
		Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANCEndDeath_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANCEndDeath_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
