// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEProject/Weapon/CWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCWeapon() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UEPROJECT_API UClass* Z_Construct_UClass_ACWeapon();
	UEPROJECT_API UClass* Z_Construct_UClass_ACWeapon_NoRegister();
	UEPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FComboData();
	UPackage* Z_Construct_UPackage__Script_UEProject();
// End Cross Module References

static_assert(std::is_polymorphic<FComboData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FComboData cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComboData;
class UScriptStruct* FComboData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComboData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComboData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComboData, Z_Construct_UPackage__Script_UEProject(), TEXT("ComboData"));
	}
	return Z_Registration_Info_UScriptStruct_ComboData.OuterSingleton;
}
template<> UEPROJECT_API UScriptStruct* StaticStruct<FComboData>()
{
	return FComboData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComboData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Motion_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Motion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attack_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Attack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanMove_MetaData[];
#endif
		static void NewProp_bCanMove_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanMove;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Effect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Weapon/CWeapon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComboData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComboData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboData_Statics::NewProp_Motion_MetaData[] = {
		{ "Category", "ComboData" },
		{ "ModuleRelativePath", "Weapon/CWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FComboData_Statics::NewProp_Motion = { "Motion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComboData, Motion), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FComboData_Statics::NewProp_Motion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboData_Statics::NewProp_Motion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboData_Statics::NewProp_Attack_MetaData[] = {
		{ "Category", "ComboData" },
		{ "ModuleRelativePath", "Weapon/CWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FComboData_Statics::NewProp_Attack = { "Attack", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComboData, Attack), METADATA_PARAMS(Z_Construct_UScriptStruct_FComboData_Statics::NewProp_Attack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboData_Statics::NewProp_Attack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboData_Statics::NewProp_bCanMove_MetaData[] = {
		{ "Category", "ComboData" },
		{ "ModuleRelativePath", "Weapon/CWeapon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FComboData_Statics::NewProp_bCanMove_SetBit(void* Obj)
	{
		((FComboData*)Obj)->bCanMove = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FComboData_Statics::NewProp_bCanMove = { "bCanMove", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FComboData), &Z_Construct_UScriptStruct_FComboData_Statics::NewProp_bCanMove_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FComboData_Statics::NewProp_bCanMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboData_Statics::NewProp_bCanMove_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboData_Statics::NewProp_Effect_MetaData[] = {
		{ "Category", "ComboData" },
		{ "ModuleRelativePath", "Weapon/CWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FComboData_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComboData, Effect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FComboData_Statics::NewProp_Effect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboData_Statics::NewProp_Effect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboData_Statics::NewProp_EffectOffset_MetaData[] = {
		{ "Category", "ComboData" },
		{ "ModuleRelativePath", "Weapon/CWeapon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComboData_Statics::NewProp_EffectOffset = { "EffectOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComboData, EffectOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FComboData_Statics::NewProp_EffectOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboData_Statics::NewProp_EffectOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComboData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboData_Statics::NewProp_Motion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboData_Statics::NewProp_Attack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboData_Statics::NewProp_bCanMove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboData_Statics::NewProp_Effect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboData_Statics::NewProp_EffectOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComboData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UEProject,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ComboData",
		sizeof(FComboData),
		alignof(FComboData),
		Z_Construct_UScriptStruct_FComboData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComboData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComboData()
	{
		if (!Z_Registration_Info_UScriptStruct_ComboData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComboData.InnerSingleton, Z_Construct_UScriptStruct_FComboData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComboData.InnerSingleton;
	}
	void ACWeapon::StaticRegisterNativesACWeapon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACWeapon);
	UClass* Z_Construct_UClass_ACWeapon_NoRegister()
	{
		return ACWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ACWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WeaponName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DrawMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SheathMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SheathMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HolsterSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_HolsterSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EquipSocketName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UEProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon/CWeapon.h" },
		{ "ModuleRelativePath", "Weapon/CWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Statics::NewProp_WeaponName_MetaData[] = {
		{ "Category", "CWeapon" },
		{ "ModuleRelativePath", "Weapon/CWeapon.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ACWeapon_Statics::NewProp_WeaponName = { "WeaponName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACWeapon, WeaponName), METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Statics::NewProp_WeaponName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::NewProp_WeaponName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Statics::NewProp_DrawMontage_MetaData[] = {
		{ "Category", "CWeapon" },
		{ "ModuleRelativePath", "Weapon/CWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACWeapon_Statics::NewProp_DrawMontage = { "DrawMontage", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACWeapon, DrawMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Statics::NewProp_DrawMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::NewProp_DrawMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Statics::NewProp_SheathMontage_MetaData[] = {
		{ "Category", "CWeapon" },
		{ "ModuleRelativePath", "Weapon/CWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACWeapon_Statics::NewProp_SheathMontage = { "SheathMontage", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACWeapon, SheathMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Statics::NewProp_SheathMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::NewProp_SheathMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Statics::NewProp_DataTable_MetaData[] = {
		{ "Category", "CWeapon" },
		{ "ModuleRelativePath", "Weapon/CWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACWeapon_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACWeapon, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Statics::NewProp_DataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::NewProp_DataTable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Statics::NewProp_HolsterSocketName_MetaData[] = {
		{ "Category", "CWeapon" },
		{ "ModuleRelativePath", "Weapon/CWeapon.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ACWeapon_Statics::NewProp_HolsterSocketName = { "HolsterSocketName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACWeapon, HolsterSocketName), METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Statics::NewProp_HolsterSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::NewProp_HolsterSocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Statics::NewProp_EquipSocketName_MetaData[] = {
		{ "Category", "CWeapon" },
		{ "ModuleRelativePath", "Weapon/CWeapon.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ACWeapon_Statics::NewProp_EquipSocketName = { "EquipSocketName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACWeapon, EquipSocketName), METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Statics::NewProp_EquipSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::NewProp_EquipSocketName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWeapon_Statics::NewProp_WeaponName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWeapon_Statics::NewProp_DrawMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWeapon_Statics::NewProp_SheathMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWeapon_Statics::NewProp_DataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWeapon_Statics::NewProp_HolsterSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWeapon_Statics::NewProp_EquipSocketName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACWeapon_Statics::ClassParams = {
		&ACWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACWeapon()
	{
		if (!Z_Registration_Info_UClass_ACWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACWeapon.OuterSingleton, Z_Construct_UClass_ACWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACWeapon.OuterSingleton;
	}
	template<> UEPROJECT_API UClass* StaticClass<ACWeapon>()
	{
		return ACWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACWeapon);
	ACWeapon::~ACWeapon() {}
	struct Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Weapon_CWeapon_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Weapon_CWeapon_h_Statics::ScriptStructInfo[] = {
		{ FComboData::StaticStruct, Z_Construct_UScriptStruct_FComboData_Statics::NewStructOps, TEXT("ComboData"), &Z_Registration_Info_UScriptStruct_ComboData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComboData), 2360598189U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Weapon_CWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACWeapon, ACWeapon::StaticClass, TEXT("ACWeapon"), &Z_Registration_Info_UClass_ACWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACWeapon), 3564993485U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Weapon_CWeapon_h_2760488488(TEXT("/Script/UEProject"),
		Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Weapon_CWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Weapon_CWeapon_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Weapon_CWeapon_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_REProject_2_Source_UEProject_Weapon_CWeapon_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
