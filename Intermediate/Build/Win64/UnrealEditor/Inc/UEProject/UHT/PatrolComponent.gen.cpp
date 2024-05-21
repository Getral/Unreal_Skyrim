// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEProject/Components/PatrolComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatrolComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UEPROJECT_API UClass* Z_Construct_UClass_ACPatrolPath_NoRegister();
	UEPROJECT_API UClass* Z_Construct_UClass_UPatrolComponent();
	UEPROJECT_API UClass* Z_Construct_UClass_UPatrolComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UEProject();
// End Cross Module References
	void UPatrolComponent::StaticRegisterNativesUPatrolComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPatrolComponent);
	UClass* Z_Construct_UClass_UPatrolComponent_NoRegister()
	{
		return UPatrolComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPatrolComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Path;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReverse_MetaData[];
#endif
		static void NewProp_bReverse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AcceptanceRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AcceptanceRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPatrolComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UEProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatrolComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/PatrolComponent.h" },
		{ "ModuleRelativePath", "Components/PatrolComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatrolComponent_Statics::NewProp_Path_MetaData[] = {
		{ "Category", "PatrolComponent" },
		{ "ModuleRelativePath", "Components/PatrolComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPatrolComponent_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatrolComponent, Path), Z_Construct_UClass_ACPatrolPath_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPatrolComponent_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatrolComponent_Statics::NewProp_Path_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatrolComponent_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "PatrolComponent" },
		{ "ModuleRelativePath", "Components/PatrolComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPatrolComponent_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatrolComponent, Index), METADATA_PARAMS(Z_Construct_UClass_UPatrolComponent_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatrolComponent_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatrolComponent_Statics::NewProp_bReverse_MetaData[] = {
		{ "Category", "PatrolComponent" },
		{ "ModuleRelativePath", "Components/PatrolComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPatrolComponent_Statics::NewProp_bReverse_SetBit(void* Obj)
	{
		((UPatrolComponent*)Obj)->bReverse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatrolComponent_Statics::NewProp_bReverse = { "bReverse", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPatrolComponent), &Z_Construct_UClass_UPatrolComponent_Statics::NewProp_bReverse_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPatrolComponent_Statics::NewProp_bReverse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatrolComponent_Statics::NewProp_bReverse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatrolComponent_Statics::NewProp_AcceptanceRadius_MetaData[] = {
		{ "Category", "PatrolComponent" },
		{ "ModuleRelativePath", "Components/PatrolComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPatrolComponent_Statics::NewProp_AcceptanceRadius = { "AcceptanceRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatrolComponent, AcceptanceRadius), METADATA_PARAMS(Z_Construct_UClass_UPatrolComponent_Statics::NewProp_AcceptanceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatrolComponent_Statics::NewProp_AcceptanceRadius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPatrolComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatrolComponent_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatrolComponent_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatrolComponent_Statics::NewProp_bReverse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatrolComponent_Statics::NewProp_AcceptanceRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPatrolComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPatrolComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPatrolComponent_Statics::ClassParams = {
		&UPatrolComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPatrolComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPatrolComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPatrolComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPatrolComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPatrolComponent()
	{
		if (!Z_Registration_Info_UClass_UPatrolComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPatrolComponent.OuterSingleton, Z_Construct_UClass_UPatrolComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPatrolComponent.OuterSingleton;
	}
	template<> UEPROJECT_API UClass* StaticClass<UPatrolComponent>()
	{
		return UPatrolComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPatrolComponent);
	UPatrolComponent::~UPatrolComponent() {}
	struct Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Components_PatrolComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Components_PatrolComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPatrolComponent, UPatrolComponent::StaticClass, TEXT("UPatrolComponent"), &Z_Registration_Info_UClass_UPatrolComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPatrolComponent), 3769651279U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Components_PatrolComponent_h_3391009994(TEXT("/Script/UEProject"),
		Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Components_PatrolComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Components_PatrolComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
