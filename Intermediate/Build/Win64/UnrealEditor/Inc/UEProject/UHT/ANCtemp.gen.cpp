// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEProject/Notifies/ANCtemp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeANCtemp() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UEPROJECT_API UClass* Z_Construct_UClass_UANCtemp();
	UEPROJECT_API UClass* Z_Construct_UClass_UANCtemp_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UEProject();
// End Cross Module References
	void UANCtemp::StaticRegisterNativesUANCtemp()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UANCtemp);
	UClass* Z_Construct_UClass_UANCtemp_NoRegister()
	{
		return UANCtemp::StaticClass();
	}
	struct Z_Construct_UClass_UANCtemp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UANCtemp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_UEProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UANCtemp_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Notifies/ANCtemp.h" },
		{ "ModuleRelativePath", "Notifies/ANCtemp.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UANCtemp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UANCtemp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UANCtemp_Statics::ClassParams = {
		&UANCtemp::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UANCtemp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UANCtemp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UANCtemp()
	{
		if (!Z_Registration_Info_UClass_UANCtemp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UANCtemp.OuterSingleton, Z_Construct_UClass_UANCtemp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UANCtemp.OuterSingleton;
	}
	template<> UEPROJECT_API UClass* StaticClass<UANCtemp>()
	{
		return UANCtemp::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UANCtemp);
	UANCtemp::~UANCtemp() {}
	struct Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANCtemp_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANCtemp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UANCtemp, UANCtemp::StaticClass, TEXT("UANCtemp"), &Z_Registration_Info_UClass_UANCtemp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UANCtemp), 3115132411U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANCtemp_h_1073712876(TEXT("/Script/UEProject"),
		Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANCtemp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANCtemp_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
