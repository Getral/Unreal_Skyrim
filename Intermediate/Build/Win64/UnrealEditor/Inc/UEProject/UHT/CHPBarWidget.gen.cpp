// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEProject/Widgets/CHPBarWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCHPBarWidget() {}
// Cross Module References
	UEPROJECT_API UClass* Z_Construct_UClass_UCHPBarWidget();
	UEPROJECT_API UClass* Z_Construct_UClass_UCHPBarWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_UEProject();
// End Cross Module References
	struct CHPBarWidget_eventUpdate_Parms
	{
		float CurHealth;
		float MaxHealth;
	};
	static FName NAME_UCHPBarWidget_Update = FName(TEXT("Update"));
	void UCHPBarWidget::Update(float CurHealth, float MaxHealth)
	{
		CHPBarWidget_eventUpdate_Parms Parms;
		Parms.CurHealth=CurHealth;
		Parms.MaxHealth=MaxHealth;
		ProcessEvent(FindFunctionChecked(NAME_UCHPBarWidget_Update),&Parms);
	}
	void UCHPBarWidget::StaticRegisterNativesUCHPBarWidget()
	{
	}
	struct Z_Construct_UFunction_UCHPBarWidget_Update_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurHealth;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCHPBarWidget_Update_Statics::NewProp_CurHealth = { "CurHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CHPBarWidget_eventUpdate_Parms, CurHealth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCHPBarWidget_Update_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CHPBarWidget_eventUpdate_Parms, MaxHealth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCHPBarWidget_Update_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHPBarWidget_Update_Statics::NewProp_CurHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHPBarWidget_Update_Statics::NewProp_MaxHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCHPBarWidget_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widgets/CHPBarWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCHPBarWidget_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCHPBarWidget, nullptr, "Update", nullptr, nullptr, sizeof(CHPBarWidget_eventUpdate_Parms), Z_Construct_UFunction_UCHPBarWidget_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCHPBarWidget_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCHPBarWidget_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCHPBarWidget_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCHPBarWidget_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCHPBarWidget_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCHPBarWidget);
	UClass* Z_Construct_UClass_UCHPBarWidget_NoRegister()
	{
		return UCHPBarWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCHPBarWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCHPBarWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UEProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCHPBarWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCHPBarWidget_Update, "Update" }, // 4179837419
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCHPBarWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/CHPBarWidget.h" },
		{ "ModuleRelativePath", "Widgets/CHPBarWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCHPBarWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCHPBarWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCHPBarWidget_Statics::ClassParams = {
		&UCHPBarWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCHPBarWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCHPBarWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCHPBarWidget()
	{
		if (!Z_Registration_Info_UClass_UCHPBarWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCHPBarWidget.OuterSingleton, Z_Construct_UClass_UCHPBarWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCHPBarWidget.OuterSingleton;
	}
	template<> UEPROJECT_API UClass* StaticClass<UCHPBarWidget>()
	{
		return UCHPBarWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCHPBarWidget);
	UCHPBarWidget::~UCHPBarWidget() {}
	struct Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Widgets_CHPBarWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Widgets_CHPBarWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCHPBarWidget, UCHPBarWidget::StaticClass, TEXT("UCHPBarWidget"), &Z_Registration_Info_UClass_UCHPBarWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCHPBarWidget), 2648657680U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Widgets_CHPBarWidget_h_3750006876(TEXT("/Script/UEProject"),
		Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Widgets_CHPBarWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Widgets_CHPBarWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
