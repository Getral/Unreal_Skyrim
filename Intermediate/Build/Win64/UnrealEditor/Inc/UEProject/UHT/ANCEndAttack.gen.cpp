// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEProject/Notifies/ANCEndAttack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeANCEndAttack() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UEPROJECT_API UClass* Z_Construct_UClass_UANCEndAttack();
	UEPROJECT_API UClass* Z_Construct_UClass_UANCEndAttack_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UEProject();
// End Cross Module References
	void UANCEndAttack::StaticRegisterNativesUANCEndAttack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UANCEndAttack);
	UClass* Z_Construct_UClass_UANCEndAttack_NoRegister()
	{
		return UANCEndAttack::StaticClass();
	}
	struct Z_Construct_UClass_UANCEndAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UANCEndAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_UEProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UANCEndAttack_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Notifies/ANCEndAttack.h" },
		{ "ModuleRelativePath", "Notifies/ANCEndAttack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UANCEndAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UANCEndAttack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UANCEndAttack_Statics::ClassParams = {
		&UANCEndAttack::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UANCEndAttack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UANCEndAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UANCEndAttack()
	{
		if (!Z_Registration_Info_UClass_UANCEndAttack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UANCEndAttack.OuterSingleton, Z_Construct_UClass_UANCEndAttack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UANCEndAttack.OuterSingleton;
	}
	template<> UEPROJECT_API UClass* StaticClass<UANCEndAttack>()
	{
		return UANCEndAttack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UANCEndAttack);
	UANCEndAttack::~UANCEndAttack() {}
	struct Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANCEndAttack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANCEndAttack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UANCEndAttack, UANCEndAttack::StaticClass, TEXT("UANCEndAttack"), &Z_Registration_Info_UClass_UANCEndAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UANCEndAttack), 2426931902U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANCEndAttack_h_587095458(TEXT("/Script/UEProject"),
		Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANCEndAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANCEndAttack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
