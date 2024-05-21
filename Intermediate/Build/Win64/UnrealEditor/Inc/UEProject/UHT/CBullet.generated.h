// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/CBullet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef UEPROJECT_CBullet_generated_h
#error "CBullet.generated.h already included, missing '#pragma once' in CBullet.h"
#endif
#define UEPROJECT_CBullet_generated_h

#define FID_REProject_2_Source_UEProject_Weapon_CBullet_h_12_SPARSE_DATA
#define FID_REProject_2_Source_UEProject_Weapon_CBullet_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInactive); \
	DECLARE_FUNCTION(execOnHitBeginOverlap);


#define FID_REProject_2_Source_UEProject_Weapon_CBullet_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInactive); \
	DECLARE_FUNCTION(execOnHitBeginOverlap);


#define FID_REProject_2_Source_UEProject_Weapon_CBullet_h_12_ACCESSORS
#define FID_REProject_2_Source_UEProject_Weapon_CBullet_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACBullet(); \
	friend struct Z_Construct_UClass_ACBullet_Statics; \
public: \
	DECLARE_CLASS(ACBullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UEProject"), NO_API) \
	DECLARE_SERIALIZER(ACBullet)


#define FID_REProject_2_Source_UEProject_Weapon_CBullet_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACBullet(); \
	friend struct Z_Construct_UClass_ACBullet_Statics; \
public: \
	DECLARE_CLASS(ACBullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UEProject"), NO_API) \
	DECLARE_SERIALIZER(ACBullet)


#define FID_REProject_2_Source_UEProject_Weapon_CBullet_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACBullet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACBullet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACBullet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACBullet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACBullet(ACBullet&&); \
	NO_API ACBullet(const ACBullet&); \
public: \
	NO_API virtual ~ACBullet();


#define FID_REProject_2_Source_UEProject_Weapon_CBullet_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACBullet(ACBullet&&); \
	NO_API ACBullet(const ACBullet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACBullet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACBullet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACBullet) \
	NO_API virtual ~ACBullet();


#define FID_REProject_2_Source_UEProject_Weapon_CBullet_h_9_PROLOG
#define FID_REProject_2_Source_UEProject_Weapon_CBullet_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_REProject_2_Source_UEProject_Weapon_CBullet_h_12_SPARSE_DATA \
	FID_REProject_2_Source_UEProject_Weapon_CBullet_h_12_RPC_WRAPPERS \
	FID_REProject_2_Source_UEProject_Weapon_CBullet_h_12_ACCESSORS \
	FID_REProject_2_Source_UEProject_Weapon_CBullet_h_12_INCLASS \
	FID_REProject_2_Source_UEProject_Weapon_CBullet_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_REProject_2_Source_UEProject_Weapon_CBullet_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_REProject_2_Source_UEProject_Weapon_CBullet_h_12_SPARSE_DATA \
	FID_REProject_2_Source_UEProject_Weapon_CBullet_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_REProject_2_Source_UEProject_Weapon_CBullet_h_12_ACCESSORS \
	FID_REProject_2_Source_UEProject_Weapon_CBullet_h_12_INCLASS_NO_PURE_DECLS \
	FID_REProject_2_Source_UEProject_Weapon_CBullet_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UEPROJECT_API UClass* StaticClass<class ACBullet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_REProject_2_Source_UEProject_Weapon_CBullet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
