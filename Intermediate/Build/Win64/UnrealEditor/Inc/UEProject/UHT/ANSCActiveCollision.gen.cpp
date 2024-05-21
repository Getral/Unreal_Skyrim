// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEProject/Notifies/ANSCActiveCollision.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeANSCActiveCollision() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UEPROJECT_API UClass* Z_Construct_UClass_UANSCActiveCollision();
	UEPROJECT_API UClass* Z_Construct_UClass_UANSCActiveCollision_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UEProject();
// End Cross Module References
	void UANSCActiveCollision::StaticRegisterNativesUANSCActiveCollision()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UANSCActiveCollision);
	UClass* Z_Construct_UClass_UANSCActiveCollision_NoRegister()
	{
		return UANSCActiveCollision::StaticClass();
	}
	struct Z_Construct_UClass_UANSCActiveCollision_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UANSCActiveCollision_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_UEProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UANSCActiveCollision_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Notifies/ANSCActiveCollision.h" },
		{ "ModuleRelativePath", "Notifies/ANSCActiveCollision.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UANSCActiveCollision_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UANSCActiveCollision>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UANSCActiveCollision_Statics::ClassParams = {
		&UANSCActiveCollision::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UANSCActiveCollision_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UANSCActiveCollision_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UANSCActiveCollision()
	{
		if (!Z_Registration_Info_UClass_UANSCActiveCollision.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UANSCActiveCollision.OuterSingleton, Z_Construct_UClass_UANSCActiveCollision_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UANSCActiveCollision.OuterSingleton;
	}
	template<> UEPROJECT_API UClass* StaticClass<UANSCActiveCollision>()
	{
		return UANSCActiveCollision::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UANSCActiveCollision);
	UANSCActiveCollision::~UANSCActiveCollision() {}
	struct Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANSCActiveCollision_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANSCActiveCollision_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UANSCActiveCollision, UANSCActiveCollision::StaticClass, TEXT("UANSCActiveCollision"), &Z_Registration_Info_UClass_UANSCActiveCollision, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UANSCActiveCollision), 3572413467U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANSCActiveCollision_h_711310048(TEXT("/Script/UEProject"),
		Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANSCActiveCollision_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Notifies_ANSCActiveCollision_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
