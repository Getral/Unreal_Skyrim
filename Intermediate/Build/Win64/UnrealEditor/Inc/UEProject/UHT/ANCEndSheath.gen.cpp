// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEProject/Notifies/ANCEndSheath.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeANCEndSheath() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UEPROJECT_API UClass* Z_Construct_UClass_UANCEndSheath();
	UEPROJECT_API UClass* Z_Construct_UClass_UANCEndSheath_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UEProject();
// End Cross Module References
	void UANCEndSheath::StaticRegisterNativesUANCEndSheath()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UANCEndSheath);
	UClass* Z_Construct_UClass_UANCEndSheath_NoRegister()
	{
		return UANCEndSheath::StaticClass();
	}
	struct Z_Construct_UClass_UANCEndSheath_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UANCEndSheath_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_UEProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UANCEndSheath_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Notifies/ANCEndSheath.h" },
		{ "ModuleRelativePath", "Notifies/ANCEndSheath.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UANCEndSheath_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UANCEndSheath>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UANCEndSheath_Statics::ClassParams = {
		&UANCEndSheath::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UANCEndSheath_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UANCEndSheath_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UANCEndSheath()
	{
		if (!Z_Registration_Info_UClass_UANCEndSheath.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UANCEndSheath.OuterSingleton, Z_Construct_UClass_UANCEndSheath_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UANCEndSheath.OuterSingleton;
	}
	template<> UEPROJECT_API UClass* StaticClass<UANCEndSheath>()
	{
		return UANCEndSheath::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UANCEndSheath);
	UANCEndSheath::~UANCEndSheath() {}
	struct Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANCEndSheath_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANCEndSheath_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UANCEndSheath, UANCEndSheath::StaticClass, TEXT("UANCEndSheath"), &Z_Registration_Info_UClass_UANCEndSheath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UANCEndSheath), 1406481391U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANCEndSheath_h_1168164318(TEXT("/Script/UEProject"),
		Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANCEndSheath_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANCEndSheath_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
