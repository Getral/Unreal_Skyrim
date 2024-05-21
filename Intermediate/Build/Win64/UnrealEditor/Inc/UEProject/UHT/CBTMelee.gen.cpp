// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEProject/AI/CBTMelee.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCBTMelee() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UEPROJECT_API UClass* Z_Construct_UClass_UCBTMelee();
	UEPROJECT_API UClass* Z_Construct_UClass_UCBTMelee_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UEProject();
// End Cross Module References
	void UCBTMelee::StaticRegisterNativesUCBTMelee()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCBTMelee);
	UClass* Z_Construct_UClass_UCBTMelee_NoRegister()
	{
		return UCBTMelee::StaticClass();
	}
	struct Z_Construct_UClass_UCBTMelee_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCBTMelee_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_UEProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCBTMelee_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI/CBTMelee.h" },
		{ "ModuleRelativePath", "AI/CBTMelee.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCBTMelee_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCBTMelee>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCBTMelee_Statics::ClassParams = {
		&UCBTMelee::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCBTMelee_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCBTMelee_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCBTMelee()
	{
		if (!Z_Registration_Info_UClass_UCBTMelee.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCBTMelee.OuterSingleton, Z_Construct_UClass_UCBTMelee_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCBTMelee.OuterSingleton;
	}
	template<> UEPROJECT_API UClass* StaticClass<UCBTMelee>()
	{
		return UCBTMelee::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCBTMelee);
	UCBTMelee::~UCBTMelee() {}
	struct Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_AI_CBTMelee_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_AI_CBTMelee_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCBTMelee, UCBTMelee::StaticClass, TEXT("UCBTMelee"), &Z_Registration_Info_UClass_UCBTMelee, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCBTMelee), 3609756678U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_AI_CBTMelee_h_2992352840(TEXT("/Script/UEProject"),
		Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_AI_CBTMelee_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_AI_CBTMelee_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
