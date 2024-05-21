// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/CRanged.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef UEPROJECT_CRanged_generated_h
#error "CRanged.generated.h already included, missing '#pragma once' in CRanged.h"
#endif
#define UEPROJECT_CRanged_generated_h

#define FID_REProject_2_Source_UEProject_Weapon_CRanged_h_10_SPARSE_DATA
#define FID_REProject_2_Source_UEProject_Weapon_CRanged_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHitBeginOverlap);


#define FID_REProject_2_Source_UEProject_Weapon_CRanged_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHitBeginOverlap);


#define FID_REProject_2_Source_UEProject_Weapon_CRanged_h_10_ACCESSORS
#define FID_REProject_2_Source_UEProject_Weapon_CRanged_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACRanged(); \
	friend struct Z_Construct_UClass_ACRanged_Statics; \
public: \
	DECLARE_CLASS(ACRanged, ACWeapon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UEProject"), NO_API) \
	DECLARE_SERIALIZER(ACRanged)


#define FID_REProject_2_Source_UEProject_Weapon_CRanged_h_10_INCLASS \
private: \
	static void StaticRegisterNativesACRanged(); \
	friend struct Z_Construct_UClass_ACRanged_Statics; \
public: \
	DECLARE_CLASS(ACRanged, ACWeapon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UEProject"), NO_API) \
	DECLARE_SERIALIZER(ACRanged)


#define FID_REProject_2_Source_UEProject_Weapon_CRanged_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACRanged(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACRanged) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACRanged); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACRanged); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACRanged(ACRanged&&); \
	NO_API ACRanged(const ACRanged&); \
public: \
	NO_API virtual ~ACRanged();


#define FID_REProject_2_Source_UEProject_Weapon_CRanged_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACRanged() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACRanged(ACRanged&&); \
	NO_API ACRanged(const ACRanged&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACRanged); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACRanged); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACRanged) \
	NO_API virtual ~ACRanged();


#define FID_REProject_2_Source_UEProject_Weapon_CRanged_h_7_PROLOG
#define FID_REProject_2_Source_UEProject_Weapon_CRanged_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_REProject_2_Source_UEProject_Weapon_CRanged_h_10_SPARSE_DATA \
	FID_REProject_2_Source_UEProject_Weapon_CRanged_h_10_RPC_WRAPPERS \
	FID_REProject_2_Source_UEProject_Weapon_CRanged_h_10_ACCESSORS \
	FID_REProject_2_Source_UEProject_Weapon_CRanged_h_10_INCLASS \
	FID_REProject_2_Source_UEProject_Weapon_CRanged_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_REProject_2_Source_UEProject_Weapon_CRanged_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_REProject_2_Source_UEProject_Weapon_CRanged_h_10_SPARSE_DATA \
	FID_REProject_2_Source_UEProject_Weapon_CRanged_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_REProject_2_Source_UEProject_Weapon_CRanged_h_10_ACCESSORS \
	FID_REProject_2_Source_UEProject_Weapon_CRanged_h_10_INCLASS_NO_PURE_DECLS \
	FID_REProject_2_Source_UEProject_Weapon_CRanged_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UEPROJECT_API UClass* StaticClass<class ACRanged>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_REProject_2_Source_UEProject_Weapon_CRanged_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
