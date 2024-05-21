// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEProject/AI/CPatrolPath.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPatrolPath() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	UEPROJECT_API UClass* Z_Construct_UClass_ACPatrolPath();
	UEPROJECT_API UClass* Z_Construct_UClass_ACPatrolPath_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UEProject();
// End Cross Module References
	void ACPatrolPath::StaticRegisterNativesACPatrolPath()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPatrolPath);
	UClass* Z_Construct_UClass_ACPatrolPath_NoRegister()
	{
		return ACPatrolPath::StaticClass();
	}
	struct Z_Construct_UClass_ACPatrolPath_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[];
#endif
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Spline;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPatrolPath_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UEProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPatrolPath_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI/CPatrolPath.h" },
		{ "ModuleRelativePath", "AI/CPatrolPath.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPatrolPath_Statics::NewProp_bLoop_MetaData[] = {
		{ "Category", "CPatrolPath" },
		{ "ModuleRelativePath", "AI/CPatrolPath.h" },
	};
#endif
	void Z_Construct_UClass_ACPatrolPath_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((ACPatrolPath*)Obj)->bLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPatrolPath_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACPatrolPath), &Z_Construct_UClass_ACPatrolPath_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPatrolPath_Statics::NewProp_bLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPatrolPath_Statics::NewProp_bLoop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPatrolPath_Statics::NewProp_Spline_MetaData[] = {
		{ "Category", "CPatrolPath" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/CPatrolPath.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPatrolPath_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPatrolPath, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPatrolPath_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPatrolPath_Statics::NewProp_Spline_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPatrolPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPatrolPath_Statics::NewProp_bLoop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPatrolPath_Statics::NewProp_Spline,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPatrolPath_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPatrolPath>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPatrolPath_Statics::ClassParams = {
		&ACPatrolPath::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACPatrolPath_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACPatrolPath_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACPatrolPath_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPatrolPath_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPatrolPath()
	{
		if (!Z_Registration_Info_UClass_ACPatrolPath.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPatrolPath.OuterSingleton, Z_Construct_UClass_ACPatrolPath_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPatrolPath.OuterSingleton;
	}
	template<> UEPROJECT_API UClass* StaticClass<ACPatrolPath>()
	{
		return ACPatrolPath::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPatrolPath);
	ACPatrolPath::~ACPatrolPath() {}
	struct Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_AI_CPatrolPath_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_AI_CPatrolPath_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPatrolPath, ACPatrolPath::StaticClass, TEXT("ACPatrolPath"), &Z_Registration_Info_UClass_ACPatrolPath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPatrolPath), 893439360U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_AI_CPatrolPath_h_3386257295(TEXT("/Script/UEProject"),
		Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_AI_CPatrolPath_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_AI_CPatrolPath_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
