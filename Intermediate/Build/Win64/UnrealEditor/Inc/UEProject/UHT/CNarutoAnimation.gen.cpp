// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEProject/Character/CNarutoAnimation.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCNarutoAnimation() {}
// Cross Module References
	UEPROJECT_API UClass* Z_Construct_UClass_UCNarutoAnimation();
	UEPROJECT_API UClass* Z_Construct_UClass_UCNarutoAnimation_NoRegister();
	UEPROJECT_API UClass* Z_Construct_UClass_UCUnitAnimation();
	UEPROJECT_API UEnum* Z_Construct_UEnum_UEProject_EActionState();
	UPackage* Z_Construct_UPackage__Script_UEProject();
// End Cross Module References
	void UCNarutoAnimation::StaticRegisterNativesUCNarutoAnimation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCNarutoAnimation);
	UClass* Z_Construct_UClass_UCNarutoAnimation_NoRegister()
	{
		return UCNarutoAnimation::StaticClass();
	}
	struct Z_Construct_UClass_UCNarutoAnimation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFalling_MetaData[];
#endif
		static void NewProp_bFalling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFalling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAirJump_MetaData[];
#endif
		static void NewProp_bAirJump_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAirJump;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_State;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCNarutoAnimation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCUnitAnimation,
		(UObject* (*)())Z_Construct_UPackage__Script_UEProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCNarutoAnimation_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Character/CNarutoAnimation.h" },
		{ "ModuleRelativePath", "Character/CNarutoAnimation.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCNarutoAnimation_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "CNarutoAnimation" },
		{ "ModuleRelativePath", "Character/CNarutoAnimation.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCNarutoAnimation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCNarutoAnimation, Rotation), METADATA_PARAMS(Z_Construct_UClass_UCNarutoAnimation_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCNarutoAnimation_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCNarutoAnimation_Statics::NewProp_bFalling_MetaData[] = {
		{ "Category", "CNarutoAnimation" },
		{ "ModuleRelativePath", "Character/CNarutoAnimation.h" },
	};
#endif
	void Z_Construct_UClass_UCNarutoAnimation_Statics::NewProp_bFalling_SetBit(void* Obj)
	{
		((UCNarutoAnimation*)Obj)->bFalling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCNarutoAnimation_Statics::NewProp_bFalling = { "bFalling", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCNarutoAnimation), &Z_Construct_UClass_UCNarutoAnimation_Statics::NewProp_bFalling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCNarutoAnimation_Statics::NewProp_bFalling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCNarutoAnimation_Statics::NewProp_bFalling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCNarutoAnimation_Statics::NewProp_bAirJump_MetaData[] = {
		{ "Category", "CNarutoAnimation" },
		{ "ModuleRelativePath", "Character/CNarutoAnimation.h" },
	};
#endif
	void Z_Construct_UClass_UCNarutoAnimation_Statics::NewProp_bAirJump_SetBit(void* Obj)
	{
		((UCNarutoAnimation*)Obj)->bAirJump = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCNarutoAnimation_Statics::NewProp_bAirJump = { "bAirJump", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCNarutoAnimation), &Z_Construct_UClass_UCNarutoAnimation_Statics::NewProp_bAirJump_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCNarutoAnimation_Statics::NewProp_bAirJump_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCNarutoAnimation_Statics::NewProp_bAirJump_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCNarutoAnimation_Statics::NewProp_State_MetaData[] = {
		{ "Category", "CNarutoAnimation" },
		{ "ModuleRelativePath", "Character/CNarutoAnimation.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCNarutoAnimation_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCNarutoAnimation, State), Z_Construct_UEnum_UEProject_EActionState, METADATA_PARAMS(Z_Construct_UClass_UCNarutoAnimation_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCNarutoAnimation_Statics::NewProp_State_MetaData)) }; // 2772738904
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCNarutoAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCNarutoAnimation_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCNarutoAnimation_Statics::NewProp_bFalling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCNarutoAnimation_Statics::NewProp_bAirJump,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCNarutoAnimation_Statics::NewProp_State,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCNarutoAnimation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCNarutoAnimation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCNarutoAnimation_Statics::ClassParams = {
		&UCNarutoAnimation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCNarutoAnimation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCNarutoAnimation_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCNarutoAnimation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCNarutoAnimation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCNarutoAnimation()
	{
		if (!Z_Registration_Info_UClass_UCNarutoAnimation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCNarutoAnimation.OuterSingleton, Z_Construct_UClass_UCNarutoAnimation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCNarutoAnimation.OuterSingleton;
	}
	template<> UEPROJECT_API UClass* StaticClass<UCNarutoAnimation>()
	{
		return UCNarutoAnimation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCNarutoAnimation);
	UCNarutoAnimation::~UCNarutoAnimation() {}
	struct Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Character_CNarutoAnimation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Character_CNarutoAnimation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCNarutoAnimation, UCNarutoAnimation::StaticClass, TEXT("UCNarutoAnimation"), &Z_Registration_Info_UClass_UCNarutoAnimation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCNarutoAnimation), 3116280155U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Character_CNarutoAnimation_h_1207105388(TEXT("/Script/UEProject"),
		Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Character_CNarutoAnimation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Character_CNarutoAnimation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
