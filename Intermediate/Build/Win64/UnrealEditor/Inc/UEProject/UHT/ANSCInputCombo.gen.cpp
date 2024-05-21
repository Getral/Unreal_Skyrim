// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEProject/Notifies/ANSCInputCombo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeANSCInputCombo() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UEPROJECT_API UClass* Z_Construct_UClass_UANSCInputCombo();
	UEPROJECT_API UClass* Z_Construct_UClass_UANSCInputCombo_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UEProject();
// End Cross Module References
	void UANSCInputCombo::StaticRegisterNativesUANSCInputCombo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UANSCInputCombo);
	UClass* Z_Construct_UClass_UANSCInputCombo_NoRegister()
	{
		return UANSCInputCombo::StaticClass();
	}
	struct Z_Construct_UClass_UANSCInputCombo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UANSCInputCombo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_UEProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UANSCInputCombo_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Notifies/ANSCInputCombo.h" },
		{ "ModuleRelativePath", "Notifies/ANSCInputCombo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UANSCInputCombo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UANSCInputCombo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UANSCInputCombo_Statics::ClassParams = {
		&UANSCInputCombo::StaticClass,
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
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UANSCInputCombo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UANSCInputCombo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UANSCInputCombo()
	{
		if (!Z_Registration_Info_UClass_UANSCInputCombo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UANSCInputCombo.OuterSingleton, Z_Construct_UClass_UANSCInputCombo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UANSCInputCombo.OuterSingleton;
	}
	template<> UEPROJECT_API UClass* StaticClass<UANSCInputCombo>()
	{
		return UANSCInputCombo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UANSCInputCombo);
	UANSCInputCombo::~UANSCInputCombo() {}
	struct Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANSCInputCombo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANSCInputCombo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UANSCInputCombo, UANSCInputCombo::StaticClass, TEXT("UANSCInputCombo"), &Z_Registration_Info_UClass_UANSCInputCombo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UANSCInputCombo), 3621427616U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANSCInputCombo_h_112827699(TEXT("/Script/UEProject"),
		Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANSCInputCombo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANSCInputCombo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
