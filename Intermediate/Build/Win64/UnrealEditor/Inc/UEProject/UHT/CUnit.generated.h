// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/CUnit.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UEPROJECT_CUnit_generated_h
#error "CUnit.generated.h already included, missing '#pragma once' in CUnit.h"
#endif
#define UEPROJECT_CUnit_generated_h

#define FID_REProject_2_Source_UEProject_Character_CUnit_h_19_SPARSE_DATA
#define FID_REProject_2_Source_UEProject_Character_CUnit_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetOriginBodyColor); \
	DECLARE_FUNCTION(execTerminate);


#define FID_REProject_2_Source_UEProject_Character_CUnit_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetOriginBodyColor); \
	DECLARE_FUNCTION(execTerminate);


#define FID_REProject_2_Source_UEProject_Character_CUnit_h_19_ACCESSORS
#define FID_REProject_2_Source_UEProject_Character_CUnit_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACUnit(); \
	friend struct Z_Construct_UClass_ACUnit_Statics; \
public: \
	DECLARE_CLASS(ACUnit, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UEProject"), NO_API) \
	DECLARE_SERIALIZER(ACUnit)


#define FID_REProject_2_Source_UEProject_Character_CUnit_h_19_INCLASS \
private: \
	static void StaticRegisterNativesACUnit(); \
	friend struct Z_Construct_UClass_ACUnit_Statics; \
public: \
	DECLARE_CLASS(ACUnit, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UEProject"), NO_API) \
	DECLARE_SERIALIZER(ACUnit)


#define FID_REProject_2_Source_UEProject_Character_CUnit_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACUnit(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACUnit) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACUnit); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACUnit); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACUnit(ACUnit&&); \
	NO_API ACUnit(const ACUnit&); \
public: \
	NO_API virtual ~ACUnit();


#define FID_REProject_2_Source_UEProject_Character_CUnit_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACUnit(ACUnit&&); \
	NO_API ACUnit(const ACUnit&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACUnit); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACUnit); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACUnit) \
	NO_API virtual ~ACUnit();


#define FID_REProject_2_Source_UEProject_Character_CUnit_h_16_PROLOG
#define FID_REProject_2_Source_UEProject_Character_CUnit_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_REProject_2_Source_UEProject_Character_CUnit_h_19_SPARSE_DATA \
	FID_REProject_2_Source_UEProject_Character_CUnit_h_19_RPC_WRAPPERS \
	FID_REProject_2_Source_UEProject_Character_CUnit_h_19_ACCESSORS \
	FID_REProject_2_Source_UEProject_Character_CUnit_h_19_INCLASS \
	FID_REProject_2_Source_UEProject_Character_CUnit_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_REProject_2_Source_UEProject_Character_CUnit_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_REProject_2_Source_UEProject_Character_CUnit_h_19_SPARSE_DATA \
	FID_REProject_2_Source_UEProject_Character_CUnit_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_REProject_2_Source_UEProject_Character_CUnit_h_19_ACCESSORS \
	FID_REProject_2_Source_UEProject_Character_CUnit_h_19_INCLASS_NO_PURE_DECLS \
	FID_REProject_2_Source_UEProject_Character_CUnit_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UEPROJECT_API UClass* StaticClass<class ACUnit>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_REProject_2_Source_UEProject_Character_CUnit_h


#define FOREACH_ENUM_EACTIONSTATE(op) \
	op(EActionState::Unarmed) \
	op(EActionState::Sword) \
	op(EActionState::Rifle) \
	op(EActionState::Blade) 

enum class EActionState : uint8;
template<> struct TIsUEnumClass<EActionState> { enum { Value = true }; };
template<> UEPROJECT_API UEnum* StaticEnum<EActionState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
