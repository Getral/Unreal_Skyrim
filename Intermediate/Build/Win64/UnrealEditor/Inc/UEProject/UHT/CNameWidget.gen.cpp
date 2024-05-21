// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEProject/Widgets/CNameWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCNameWidget() {}
// Cross Module References
	UEPROJECT_API UClass* Z_Construct_UClass_UCNameWidget();
	UEPROJECT_API UClass* Z_Construct_UClass_UCNameWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_UEProject();
// End Cross Module References
	struct CNameWidget_eventSetName_Parms
	{
		FString InName;
	};
	static FName NAME_UCNameWidget_SetName = FName(TEXT("SetName"));
	void UCNameWidget::SetName(const FString& InName)
	{
		CNameWidget_eventSetName_Parms Parms;
		Parms.InName=InName;
		ProcessEvent(FindFunctionChecked(NAME_UCNameWidget_SetName),&Parms);
	}
	void UCNameWidget::StaticRegisterNativesUCNameWidget()
	{
	}
	struct Z_Construct_UFunction_UCNameWidget_SetName_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCNameWidget_SetName_Statics::NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCNameWidget_SetName_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CNameWidget_eventSetName_Parms, InName), METADATA_PARAMS(Z_Construct_UFunction_UCNameWidget_SetName_Statics::NewProp_InName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCNameWidget_SetName_Statics::NewProp_InName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCNameWidget_SetName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCNameWidget_SetName_Statics::NewProp_InName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCNameWidget_SetName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widgets/CNameWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCNameWidget_SetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCNameWidget, nullptr, "SetName", nullptr, nullptr, sizeof(CNameWidget_eventSetName_Parms), Z_Construct_UFunction_UCNameWidget_SetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCNameWidget_SetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCNameWidget_SetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCNameWidget_SetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCNameWidget_SetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCNameWidget_SetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCNameWidget);
	UClass* Z_Construct_UClass_UCNameWidget_NoRegister()
	{
		return UCNameWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCNameWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCNameWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UEProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCNameWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCNameWidget_SetName, "SetName" }, // 2351129714
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCNameWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/CNameWidget.h" },
		{ "ModuleRelativePath", "Widgets/CNameWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCNameWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCNameWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCNameWidget_Statics::ClassParams = {
		&UCNameWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCNameWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCNameWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCNameWidget()
	{
		if (!Z_Registration_Info_UClass_UCNameWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCNameWidget.OuterSingleton, Z_Construct_UClass_UCNameWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCNameWidget.OuterSingleton;
	}
	template<> UEPROJECT_API UClass* StaticClass<UCNameWidget>()
	{
		return UCNameWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCNameWidget);
	UCNameWidget::~UCNameWidget() {}
	struct Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Widgets_CNameWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Widgets_CNameWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCNameWidget, UCNameWidget::StaticClass, TEXT("UCNameWidget"), &Z_Registration_Info_UClass_UCNameWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCNameWidget), 375551983U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Widgets_CNameWidget_h_2362733253(TEXT("/Script/UEProject"),
		Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Widgets_CNameWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Widgets_CNameWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
