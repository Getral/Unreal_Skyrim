// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEProject/Widgets/CInGameUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCInGameUI() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UEPROJECT_API UClass* Z_Construct_UClass_ACInGameUI();
	UEPROJECT_API UClass* Z_Construct_UClass_ACInGameUI_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UEProject();
// End Cross Module References
	void ACInGameUI::StaticRegisterNativesACInGameUI()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACInGameUI);
	UClass* Z_Construct_UClass_ACInGameUI_NoRegister()
	{
		return ACInGameUI::StaticClass();
	}
	struct Z_Construct_UClass_ACInGameUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrossHair_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CrossHair;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACInGameUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_UEProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACInGameUI_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Widgets/CInGameUI.h" },
		{ "ModuleRelativePath", "Widgets/CInGameUI.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACInGameUI_Statics::NewProp_CrossHair_MetaData[] = {
		{ "Category", "CInGameUI" },
		{ "ModuleRelativePath", "Widgets/CInGameUI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACInGameUI_Statics::NewProp_CrossHair = { "CrossHair", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACInGameUI, CrossHair), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACInGameUI_Statics::NewProp_CrossHair_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACInGameUI_Statics::NewProp_CrossHair_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACInGameUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACInGameUI_Statics::NewProp_CrossHair,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACInGameUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACInGameUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACInGameUI_Statics::ClassParams = {
		&ACInGameUI::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACInGameUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACInGameUI_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACInGameUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACInGameUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACInGameUI()
	{
		if (!Z_Registration_Info_UClass_ACInGameUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACInGameUI.OuterSingleton, Z_Construct_UClass_ACInGameUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACInGameUI.OuterSingleton;
	}
	template<> UEPROJECT_API UClass* StaticClass<ACInGameUI>()
	{
		return ACInGameUI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACInGameUI);
	ACInGameUI::~ACInGameUI() {}
	struct Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Widgets_CInGameUI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Widgets_CInGameUI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACInGameUI, ACInGameUI::StaticClass, TEXT("ACInGameUI"), &Z_Registration_Info_UClass_ACInGameUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACInGameUI), 2155871734U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Widgets_CInGameUI_h_1251026699(TEXT("/Script/UEProject"),
		Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Widgets_CInGameUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Widgets_CInGameUI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
