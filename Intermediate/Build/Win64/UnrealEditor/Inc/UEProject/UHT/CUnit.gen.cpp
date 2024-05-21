// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEProject/Character/CUnit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCUnit() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	UEPROJECT_API UClass* Z_Construct_UClass_ACUnit();
	UEPROJECT_API UClass* Z_Construct_UClass_ACUnit_NoRegister();
	UEPROJECT_API UClass* Z_Construct_UClass_ACWeapon_NoRegister();
	UEPROJECT_API UClass* Z_Construct_UClass_UCStatusComponent_NoRegister();
	UEPROJECT_API UEnum* Z_Construct_UEnum_UEProject_EActionState();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UEProject();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EActionState;
	static UEnum* EActionState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EActionState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EActionState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UEProject_EActionState, Z_Construct_UPackage__Script_UEProject(), TEXT("EActionState"));
		}
		return Z_Registration_Info_UEnum_EActionState.OuterSingleton;
	}
	template<> UEPROJECT_API UEnum* StaticEnum<EActionState>()
	{
		return EActionState_StaticEnum();
	}
	struct Z_Construct_UEnum_UEProject_EActionState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UEProject_EActionState_Statics::Enumerators[] = {
		{ "EActionState::Unarmed", (int64)EActionState::Unarmed },
		{ "EActionState::Sword", (int64)EActionState::Sword },
		{ "EActionState::Rifle", (int64)EActionState::Rifle },
		{ "EActionState::Blade", (int64)EActionState::Blade },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UEProject_EActionState_Statics::Enum_MetaDataParams[] = {
		{ "Blade.Name", "EActionState::Blade" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Character/CUnit.h" },
		{ "Rifle.Name", "EActionState::Rifle" },
		{ "Sword.Name", "EActionState::Sword" },
		{ "Unarmed.Name", "EActionState::Unarmed" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UEProject_EActionState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UEProject,
		nullptr,
		"EActionState",
		"EActionState",
		Z_Construct_UEnum_UEProject_EActionState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UEProject_EActionState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UEProject_EActionState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UEProject_EActionState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UEProject_EActionState()
	{
		if (!Z_Registration_Info_UEnum_EActionState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EActionState.InnerSingleton, Z_Construct_UEnum_UEProject_EActionState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EActionState.InnerSingleton;
	}
	DEFINE_FUNCTION(ACUnit::execSetOriginBodyColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOriginBodyColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACUnit::execTerminate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Terminate();
		P_NATIVE_END;
	}
	void ACUnit::StaticRegisterNativesACUnit()
	{
		UClass* Class = ACUnit::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetOriginBodyColor", &ACUnit::execSetOriginBodyColor },
			{ "Terminate", &ACUnit::execTerminate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACUnit_SetOriginBodyColor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACUnit_SetOriginBodyColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/CUnit.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACUnit_SetOriginBodyColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACUnit, nullptr, "SetOriginBodyColor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACUnit_SetOriginBodyColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACUnit_SetOriginBodyColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACUnit_SetOriginBodyColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACUnit_SetOriginBodyColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACUnit_Terminate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACUnit_Terminate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/CUnit.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACUnit_Terminate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACUnit, nullptr, "Terminate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACUnit_Terminate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACUnit_Terminate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACUnit_Terminate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACUnit_Terminate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACUnit);
	UClass* Z_Construct_UClass_ACUnit_NoRegister()
	{
		return ACUnit::StaticClass();
	}
	struct Z_Construct_UClass_ACUnit_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnitName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UnitName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeamID_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TeamID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NameWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HPBarWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HPBarWidget;
		static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponClasses_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WeaponClasses_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WeaponClasses_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponClasses_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_WeaponClasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitMotion_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitMotion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeathMotion_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DeathMotion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeathSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DeathSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACUnit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UEProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACUnit_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACUnit_SetOriginBodyColor, "SetOriginBodyColor" }, // 2104083947
		{ &Z_Construct_UFunction_ACUnit_Terminate, "Terminate" }, // 3520593299
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACUnit_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/CUnit.h" },
		{ "ModuleRelativePath", "Character/CUnit.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACUnit_Statics::NewProp_UnitName_MetaData[] = {
		{ "Category", "CUnit" },
		{ "ModuleRelativePath", "Character/CUnit.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACUnit_Statics::NewProp_UnitName = { "UnitName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACUnit, UnitName), METADATA_PARAMS(Z_Construct_UClass_ACUnit_Statics::NewProp_UnitName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACUnit_Statics::NewProp_UnitName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACUnit_Statics::NewProp_TeamID_MetaData[] = {
		{ "Category", "CUnit" },
		{ "ModuleRelativePath", "Character/CUnit.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACUnit_Statics::NewProp_TeamID = { "TeamID", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACUnit, TeamID), nullptr, METADATA_PARAMS(Z_Construct_UClass_ACUnit_Statics::NewProp_TeamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACUnit_Statics::NewProp_TeamID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACUnit_Statics::NewProp_Status_MetaData[] = {
		{ "Category", "CUnit" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/CUnit.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACUnit_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACUnit, Status), Z_Construct_UClass_UCStatusComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACUnit_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACUnit_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACUnit_Statics::NewProp_NameWidget_MetaData[] = {
		{ "Category", "CUnit" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/CUnit.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACUnit_Statics::NewProp_NameWidget = { "NameWidget", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACUnit, NameWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACUnit_Statics::NewProp_NameWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACUnit_Statics::NewProp_NameWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACUnit_Statics::NewProp_HPBarWidget_MetaData[] = {
		{ "Category", "CUnit" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/CUnit.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACUnit_Statics::NewProp_HPBarWidget = { "HPBarWidget", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACUnit, HPBarWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACUnit_Statics::NewProp_HPBarWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACUnit_Statics::NewProp_HPBarWidget_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACUnit_Statics::NewProp_WeaponClasses_ValueProp = { "WeaponClasses", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_ACWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACUnit_Statics::NewProp_WeaponClasses_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACUnit_Statics::NewProp_WeaponClasses_Key_KeyProp = { "WeaponClasses_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_UEProject_EActionState, METADATA_PARAMS(nullptr, 0) }; // 2772738904
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACUnit_Statics::NewProp_WeaponClasses_MetaData[] = {
		{ "Category", "CUnit" },
		{ "ModuleRelativePath", "Character/CUnit.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ACUnit_Statics::NewProp_WeaponClasses = { "WeaponClasses", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACUnit, WeaponClasses), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACUnit_Statics::NewProp_WeaponClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACUnit_Statics::NewProp_WeaponClasses_MetaData)) }; // 2772738904
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACUnit_Statics::NewProp_HitMotion_MetaData[] = {
		{ "Category", "CUnit" },
		{ "ModuleRelativePath", "Character/CUnit.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACUnit_Statics::NewProp_HitMotion = { "HitMotion", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACUnit, HitMotion), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACUnit_Statics::NewProp_HitMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACUnit_Statics::NewProp_HitMotion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACUnit_Statics::NewProp_DeathMotion_MetaData[] = {
		{ "Category", "CUnit" },
		{ "ModuleRelativePath", "Character/CUnit.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACUnit_Statics::NewProp_DeathMotion = { "DeathMotion", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACUnit, DeathMotion), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACUnit_Statics::NewProp_DeathMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACUnit_Statics::NewProp_DeathMotion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACUnit_Statics::NewProp_HitSound_MetaData[] = {
		{ "Category", "CUnit" },
		{ "ModuleRelativePath", "Character/CUnit.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACUnit_Statics::NewProp_HitSound = { "HitSound", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACUnit, HitSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACUnit_Statics::NewProp_HitSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACUnit_Statics::NewProp_HitSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACUnit_Statics::NewProp_DeathSound_MetaData[] = {
		{ "Category", "CUnit" },
		{ "ModuleRelativePath", "Character/CUnit.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACUnit_Statics::NewProp_DeathSound = { "DeathSound", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACUnit, DeathSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACUnit_Statics::NewProp_DeathSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACUnit_Statics::NewProp_DeathSound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACUnit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACUnit_Statics::NewProp_UnitName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACUnit_Statics::NewProp_TeamID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACUnit_Statics::NewProp_Status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACUnit_Statics::NewProp_NameWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACUnit_Statics::NewProp_HPBarWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACUnit_Statics::NewProp_WeaponClasses_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACUnit_Statics::NewProp_WeaponClasses_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACUnit_Statics::NewProp_WeaponClasses_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACUnit_Statics::NewProp_WeaponClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACUnit_Statics::NewProp_HitMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACUnit_Statics::NewProp_DeathMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACUnit_Statics::NewProp_HitSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACUnit_Statics::NewProp_DeathSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACUnit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACUnit>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACUnit_Statics::ClassParams = {
		&ACUnit::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACUnit_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACUnit_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACUnit_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACUnit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACUnit()
	{
		if (!Z_Registration_Info_UClass_ACUnit.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACUnit.OuterSingleton, Z_Construct_UClass_ACUnit_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACUnit.OuterSingleton;
	}
	template<> UEPROJECT_API UClass* StaticClass<ACUnit>()
	{
		return ACUnit::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACUnit);
	ACUnit::~ACUnit() {}
	struct Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Character_CUnit_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Character_CUnit_h_Statics::EnumInfo[] = {
		{ EActionState_StaticEnum, TEXT("EActionState"), &Z_Registration_Info_UEnum_EActionState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2772738904U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Character_CUnit_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACUnit, ACUnit::StaticClass, TEXT("ACUnit"), &Z_Registration_Info_UClass_ACUnit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACUnit), 543084927U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Character_CUnit_h_2137200181(TEXT("/Script/UEProject"),
		Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Character_CUnit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Character_CUnit_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Character_CUnit_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Character_CUnit_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
