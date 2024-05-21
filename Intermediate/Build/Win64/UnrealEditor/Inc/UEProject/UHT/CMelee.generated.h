// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/CMelee.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef UEPROJECT_CMelee_generated_h
#error "CMelee.generated.h already included, missing '#pragma once' in CMelee.h"
#endif
#define UEPROJECT_CMelee_generated_h

#define FID_REProject_2_Source_UEProject_Weapon_CMelee_h_15_SPARSE_DATA
#define FID_REProject_2_Source_UEProject_Weapon_CMelee_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHitBeginOverlap);


#define FID_REProject_2_Source_UEProject_Weapon_CMelee_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHitBeginOverlap);


#define FID_REProject_2_Source_UEProject_Weapon_CMelee_h_15_ACCESSORS
#define FID_REProject_2_Source_UEProject_Weapon_CMelee_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACMelee(); \
	friend struct Z_Construct_UClass_ACMelee_Statics; \
public: \
	DECLARE_CLASS(ACMelee, ACWeapon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UEProject"), NO_API) \
	DECLARE_SERIALIZER(ACMelee)


#define FID_REProject_2_Source_UEProject_Weapon_CMelee_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACMelee(); \
	friend struct Z_Construct_UClass_ACMelee_Statics; \
public: \
	DECLARE_CLASS(ACMelee, ACWeapon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UEProject"), NO_API) \
	DECLARE_SERIALIZER(ACMelee)


#define FID_REProject_2_Source_UEProject_Weapon_CMelee_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACMelee(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACMelee) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACMelee); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACMelee); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACMelee(ACMelee&&); \
	NO_API ACMelee(const ACMelee&); \
public: \
	NO_API virtual ~ACMelee();


#define FID_REProject_2_Source_UEProject_Weapon_CMelee_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACMelee() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACMelee(ACMelee&&); \
	NO_API ACMelee(const ACMelee&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACMelee); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACMelee); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACMelee) \
	NO_API virtual ~ACMelee();


#define FID_REProject_2_Source_UEProject_Weapon_CMelee_h_12_PROLOG
#define FID_REProject_2_Source_UEProject_Weapon_CMelee_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_REProject_2_Source_UEProject_Weapon_CMelee_h_15_SPARSE_DATA \
	FID_REProject_2_Source_UEProject_Weapon_CMelee_h_15_RPC_WRAPPERS \
	FID_REProject_2_Source_UEProject_Weapon_CMelee_h_15_ACCESSORS \
	FID_REProject_2_Source_UEProject_Weapon_CMelee_h_15_INCLASS \
	FID_REProject_2_Source_UEProject_Weapon_CMelee_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_REProject_2_Source_UEProject_Weapon_CMelee_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_REProject_2_Source_UEProject_Weapon_CMelee_h_15_SPARSE_DATA \
	FID_REProject_2_Source_UEProject_Weapon_CMelee_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_REProject_2_Source_UEProject_Weapon_CMelee_h_15_ACCESSORS \
	FID_REProject_2_Source_UEProject_Weapon_CMelee_h_15_INCLASS_NO_PURE_DECLS \
	FID_REProject_2_Source_UEProject_Weapon_CMelee_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UEPROJECT_API UClass* StaticClass<class ACMelee>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_REProject_2_Source_UEProject_Weapon_CMelee_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
