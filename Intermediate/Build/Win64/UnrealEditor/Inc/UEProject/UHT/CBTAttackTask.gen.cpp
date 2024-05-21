// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEProject/AI/CBTAttackTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCBTAttackTask() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UEPROJECT_API UClass* Z_Construct_UClass_UCBTAttackTask();
	UEPROJECT_API UClass* Z_Construct_UClass_UCBTAttackTask_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UEProject();
// End Cross Module References
	void UCBTAttackTask::StaticRegisterNativesUCBTAttackTask()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCBTAttackTask);
	UClass* Z_Construct_UClass_UCBTAttackTask_NoRegister()
	{
		return UCBTAttackTask::StaticClass();
	}
	struct Z_Construct_UClass_UCBTAttackTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCBTAttackTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_UEProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCBTAttackTask_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI/CBTAttackTask.h" },
		{ "ModuleRelativePath", "AI/CBTAttackTask.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCBTAttackTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCBTAttackTask>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCBTAttackTask_Statics::ClassParams = {
		&UCBTAttackTask::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCBTAttackTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCBTAttackTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCBTAttackTask()
	{
		if (!Z_Registration_Info_UClass_UCBTAttackTask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCBTAttackTask.OuterSingleton, Z_Construct_UClass_UCBTAttackTask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCBTAttackTask.OuterSingleton;
	}
	template<> UEPROJECT_API UClass* StaticClass<UCBTAttackTask>()
	{
		return UCBTAttackTask::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCBTAttackTask);
	UCBTAttackTask::~UCBTAttackTask() {}
	struct Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_AI_CBTAttackTask_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_AI_CBTAttackTask_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCBTAttackTask, UCBTAttackTask::StaticClass, TEXT("UCBTAttackTask"), &Z_Registration_Info_UClass_UCBTAttackTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCBTAttackTask), 1966269015U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_AI_CBTAttackTask_h_965375338(TEXT("/Script/UEProject"),
		Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_AI_CBTAttackTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_AI_CBTAttackTask_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
