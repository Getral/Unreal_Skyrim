// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEProject/Notifies/ANCDropSword.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeANCDropSword() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UEPROJECT_API UClass* Z_Construct_UClass_UANCDropSword();
	UEPROJECT_API UClass* Z_Construct_UClass_UANCDropSword_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UEProject();
// End Cross Module References
	void UANCDropSword::StaticRegisterNativesUANCDropSword()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UANCDropSword);
	UClass* Z_Construct_UClass_UANCDropSword_NoRegister()
	{
		return UANCDropSword::StaticClass();
	}
	struct Z_Construct_UClass_UANCDropSword_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UANCDropSword_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_UEProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UANCDropSword_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Notifies/ANCDropSword.h" },
		{ "ModuleRelativePath", "Notifies/ANCDropSword.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UANCDropSword_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UANCDropSword>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UANCDropSword_Statics::ClassParams = {
		&UANCDropSword::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UANCDropSword_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UANCDropSword_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UANCDropSword()
	{
		if (!Z_Registration_Info_UClass_UANCDropSword.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UANCDropSword.OuterSingleton, Z_Construct_UClass_UANCDropSword_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UANCDropSword.OuterSingleton;
	}
	template<> UEPROJECT_API UClass* StaticClass<UANCDropSword>()
	{
		return UANCDropSword::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UANCDropSword);
	UANCDropSword::~UANCDropSword() {}
	struct Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANCDropSword_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANCDropSword_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UANCDropSword, UANCDropSword::StaticClass, TEXT("UANCDropSword"), &Z_Registration_Info_UClass_UANCDropSword, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UANCDropSword), 1446346771U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANCDropSword_h_2815016549(TEXT("/Script/UEProject"),
		Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANCDropSword_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANCDropSword_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
