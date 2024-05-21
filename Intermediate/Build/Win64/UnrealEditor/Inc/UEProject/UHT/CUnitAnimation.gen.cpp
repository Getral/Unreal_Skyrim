// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEProject/Character/CUnitAnimation.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCUnitAnimation() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UEPROJECT_API UClass* Z_Construct_UClass_UCUnitAnimation();
	UEPROJECT_API UClass* Z_Construct_UClass_UCUnitAnimation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UEProject();
// End Cross Module References
	void UCUnitAnimation::StaticRegisterNativesUCUnitAnimation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCUnitAnimation);
	UClass* Z_Construct_UClass_UCUnitAnimation_NoRegister()
	{
		return UCUnitAnimation::StaticClass();
	}
	struct Z_Construct_UClass_UCUnitAnimation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCUnitAnimation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_UEProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCUnitAnimation_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Character/CUnitAnimation.h" },
		{ "ModuleRelativePath", "Character/CUnitAnimation.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCUnitAnimation_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "CUnitAnimation" },
		{ "ModuleRelativePath", "Character/CUnitAnimation.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCUnitAnimation_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCUnitAnimation, Speed), METADATA_PARAMS(Z_Construct_UClass_UCUnitAnimation_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCUnitAnimation_Statics::NewProp_Speed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCUnitAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCUnitAnimation_Statics::NewProp_Speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCUnitAnimation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCUnitAnimation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCUnitAnimation_Statics::ClassParams = {
		&UCUnitAnimation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCUnitAnimation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCUnitAnimation_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCUnitAnimation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCUnitAnimation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCUnitAnimation()
	{
		if (!Z_Registration_Info_UClass_UCUnitAnimation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCUnitAnimation.OuterSingleton, Z_Construct_UClass_UCUnitAnimation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCUnitAnimation.OuterSingleton;
	}
	template<> UEPROJECT_API UClass* StaticClass<UCUnitAnimation>()
	{
		return UCUnitAnimation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCUnitAnimation);
	UCUnitAnimation::~UCUnitAnimation() {}
	struct Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Character_CUnitAnimation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Character_CUnitAnimation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCUnitAnimation, UCUnitAnimation::StaticClass, TEXT("UCUnitAnimation"), &Z_Registration_Info_UClass_UCUnitAnimation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCUnitAnimation), 3887665316U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Character_CUnitAnimation_h_3724631844(TEXT("/Script/UEProject"),
		Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Character_CUnitAnimation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Character_CUnitAnimation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
