// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/CBehaviorComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EBehaviorType : uint8;
#ifdef UEPROJECT_CBehaviorComponent_generated_h
#error "CBehaviorComponent.generated.h already included, missing '#pragma once' in CBehaviorComponent.h"
#endif
#define UEPROJECT_CBehaviorComponent_generated_h

#define FID_REProject_2_Source_UEProject_Components_CBehaviorComponent_h_21_SPARSE_DATA
#define FID_REProject_2_Source_UEProject_Components_CBehaviorComponent_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsType);


#define FID_REProject_2_Source_UEProject_Components_CBehaviorComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsType);


#define FID_REProject_2_Source_UEProject_Components_CBehaviorComponent_h_21_ACCESSORS
#define FID_REProject_2_Source_UEProject_Components_CBehaviorComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCBehaviorComponent(); \
	friend struct Z_Construct_UClass_UCBehaviorComponent_Statics; \
public: \
	DECLARE_CLASS(UCBehaviorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UEProject"), NO_API) \
	DECLARE_SERIALIZER(UCBehaviorComponent)


#define FID_REProject_2_Source_UEProject_Components_CBehaviorComponent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUCBehaviorComponent(); \
	friend struct Z_Construct_UClass_UCBehaviorComponent_Statics; \
public: \
	DECLARE_CLASS(UCBehaviorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UEProject"), NO_API) \
	DECLARE_SERIALIZER(UCBehaviorComponent)


#define FID_REProject_2_Source_UEProject_Components_CBehaviorComponent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCBehaviorComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCBehaviorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCBehaviorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCBehaviorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCBehaviorComponent(UCBehaviorComponent&&); \
	NO_API UCBehaviorComponent(const UCBehaviorComponent&); \
public: \
	NO_API virtual ~UCBehaviorComponent();


#define FID_REProject_2_Source_UEProject_Components_CBehaviorComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCBehaviorComponent(UCBehaviorComponent&&); \
	NO_API UCBehaviorComponent(const UCBehaviorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCBehaviorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCBehaviorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCBehaviorComponent) \
	NO_API virtual ~UCBehaviorComponent();


#define FID_REProject_2_Source_UEProject_Components_CBehaviorComponent_h_18_PROLOG
#define FID_REProject_2_Source_UEProject_Components_CBehaviorComponent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_REProject_2_Source_UEProject_Components_CBehaviorComponent_h_21_SPARSE_DATA \
	FID_REProject_2_Source_UEProject_Components_CBehaviorComponent_h_21_RPC_WRAPPERS \
	FID_REProject_2_Source_UEProject_Components_CBehaviorComponent_h_21_ACCESSORS \
	FID_REProject_2_Source_UEProject_Components_CBehaviorComponent_h_21_INCLASS \
	FID_REProject_2_Source_UEProject_Components_CBehaviorComponent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_REProject_2_Source_UEProject_Components_CBehaviorComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_REProject_2_Source_UEProject_Components_CBehaviorComponent_h_21_SPARSE_DATA \
	FID_REProject_2_Source_UEProject_Components_CBehaviorComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_REProject_2_Source_UEProject_Components_CBehaviorComponent_h_21_ACCESSORS \
	FID_REProject_2_Source_UEProject_Components_CBehaviorComponent_h_21_INCLASS_NO_PURE_DECLS \
	FID_REProject_2_Source_UEProject_Components_CBehaviorComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UEPROJECT_API UClass* StaticClass<class UCBehaviorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_REProject_2_Source_UEProject_Components_CBehaviorComponent_h


#define FOREACH_ENUM_EBEHAVIORTYPE(op) \
	op(EBehaviorType::Wait) \
	op(EBehaviorType::Patrol) \
	op(EBehaviorType::Trace) \
	op(EBehaviorType::Attack) \
	op(EBehaviorType::Hit) \
	op(EBehaviorType::Death) 

enum class EBehaviorType : uint8;
template<> struct TIsUEnumClass<EBehaviorType> { enum { Value = true }; };
template<> UEPROJECT_API UEnum* StaticEnum<EBehaviorType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
