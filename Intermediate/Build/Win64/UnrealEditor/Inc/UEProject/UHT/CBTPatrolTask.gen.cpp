// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEProject/AI/CBTPatrolTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCBTPatrolTask() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UEPROJECT_API UClass* Z_Construct_UClass_UCBTPatrolTask();
	UEPROJECT_API UClass* Z_Construct_UClass_UCBTPatrolTask_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UEProject();
// End Cross Module References
	void UCBTPatrolTask::StaticRegisterNativesUCBTPatrolTask()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCBTPatrolTask);
	UClass* Z_Construct_UClass_UCBTPatrolTask_NoRegister()
	{
		return UCBTPatrolTask::StaticClass();
	}
	struct Z_Construct_UClass_UCBTPatrolTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCBTPatrolTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_UEProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCBTPatrolTask_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI/CBTPatrolTask.h" },
		{ "ModuleRelativePath", "AI/CBTPatrolTask.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCBTPatrolTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCBTPatrolTask>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCBTPatrolTask_Statics::ClassParams = {
		&UCBTPatrolTask::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCBTPatrolTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCBTPatrolTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCBTPatrolTask()
	{
		if (!Z_Registration_Info_UClass_UCBTPatrolTask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCBTPatrolTask.OuterSingleton, Z_Construct_UClass_UCBTPatrolTask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCBTPatrolTask.OuterSingleton;
	}
	template<> UEPROJECT_API UClass* StaticClass<UCBTPatrolTask>()
	{
		return UCBTPatrolTask::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCBTPatrolTask);
	UCBTPatrolTask::~UCBTPatrolTask() {}
	struct Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_AI_CBTPatrolTask_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_AI_CBTPatrolTask_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCBTPatrolTask, UCBTPatrolTask::StaticClass, TEXT("UCBTPatrolTask"), &Z_Registration_Info_UClass_UCBTPatrolTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCBTPatrolTask), 1436635902U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_AI_CBTPatrolTask_h_2700265587(TEXT("/Script/UEProject"),
		Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_AI_CBTPatrolTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_AI_CBTPatrolTask_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
