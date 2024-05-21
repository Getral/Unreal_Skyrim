// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEProject/Notifies/ANCEndDraw.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeANCEndDraw() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UEPROJECT_API UClass* Z_Construct_UClass_UANCEndDraw();
	UEPROJECT_API UClass* Z_Construct_UClass_UANCEndDraw_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UEProject();
// End Cross Module References
	void UANCEndDraw::StaticRegisterNativesUANCEndDraw()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UANCEndDraw);
	UClass* Z_Construct_UClass_UANCEndDraw_NoRegister()
	{
		return UANCEndDraw::StaticClass();
	}
	struct Z_Construct_UClass_UANCEndDraw_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UANCEndDraw_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_UEProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UANCEndDraw_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Notifies/ANCEndDraw.h" },
		{ "ModuleRelativePath", "Notifies/ANCEndDraw.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UANCEndDraw_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UANCEndDraw>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UANCEndDraw_Statics::ClassParams = {
		&UANCEndDraw::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UANCEndDraw_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UANCEndDraw_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UANCEndDraw()
	{
		if (!Z_Registration_Info_UClass_UANCEndDraw.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UANCEndDraw.OuterSingleton, Z_Construct_UClass_UANCEndDraw_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UANCEndDraw.OuterSingleton;
	}
	template<> UEPROJECT_API UClass* StaticClass<UANCEndDraw>()
	{
		return UANCEndDraw::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UANCEndDraw);
	UANCEndDraw::~UANCEndDraw() {}
	struct Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANCEndDraw_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANCEndDraw_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UANCEndDraw, UANCEndDraw::StaticClass, TEXT("UANCEndDraw"), &Z_Registration_Info_UClass_UANCEndDraw, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UANCEndDraw), 1912042535U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANCEndDraw_h_3771146748(TEXT("/Script/UEProject"),
		Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANCEndDraw_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANCEndDraw_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
