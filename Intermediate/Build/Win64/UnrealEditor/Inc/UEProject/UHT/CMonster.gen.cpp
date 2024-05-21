// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEProject/Character/CMonster.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCMonster() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	UEPROJECT_API UClass* Z_Construct_UClass_ACMonster();
	UEPROJECT_API UClass* Z_Construct_UClass_ACMonster_NoRegister();
	UEPROJECT_API UClass* Z_Construct_UClass_ACUnit();
	UEPROJECT_API UClass* Z_Construct_UClass_UPatrolComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UEProject();
// End Cross Module References
	void ACMonster::StaticRegisterNativesACMonster()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACMonster);
	UClass* Z_Construct_UClass_ACMonster_NoRegister()
	{
		return ACMonster::StaticClass();
	}
	struct Z_Construct_UClass_ACMonster_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Patrol_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Patrol;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACMonster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACUnit,
		(UObject* (*)())Z_Construct_UPackage__Script_UEProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACMonster_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/CMonster.h" },
		{ "ModuleRelativePath", "Character/CMonster.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACMonster_Statics::NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "CMonster" },
		{ "ModuleRelativePath", "Character/CMonster.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACMonster_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACMonster, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACMonster_Statics::NewProp_BehaviorTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACMonster_Statics::NewProp_BehaviorTree_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACMonster_Statics::NewProp_Patrol_MetaData[] = {
		{ "Category", "CMonster" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/CMonster.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACMonster_Statics::NewProp_Patrol = { "Patrol", nullptr, (EPropertyFlags)0x00200800000a0809, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACMonster, Patrol), Z_Construct_UClass_UPatrolComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACMonster_Statics::NewProp_Patrol_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACMonster_Statics::NewProp_Patrol_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACMonster_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACMonster_Statics::NewProp_BehaviorTree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACMonster_Statics::NewProp_Patrol,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACMonster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACMonster>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACMonster_Statics::ClassParams = {
		&ACMonster::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACMonster_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACMonster_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACMonster_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACMonster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACMonster()
	{
		if (!Z_Registration_Info_UClass_ACMonster.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACMonster.OuterSingleton, Z_Construct_UClass_ACMonster_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACMonster.OuterSingleton;
	}
	template<> UEPROJECT_API UClass* StaticClass<ACMonster>()
	{
		return ACMonster::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACMonster);
	ACMonster::~ACMonster() {}
	struct Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Character_CMonster_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Character_CMonster_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACMonster, ACMonster::StaticClass, TEXT("ACMonster"), &Z_Registration_Info_UClass_ACMonster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACMonster), 1246335666U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Character_CMonster_h_1605336016(TEXT("/Script/UEProject"),
		Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Character_CMonster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Character_CMonster_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
