// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TWINSTICKSHOOTER_BaseCharacter_CPP_generated_h
#error "BaseCharacter_CPP.generated.h already included, missing '#pragma once' in BaseCharacter_CPP.h"
#endif
#define TWINSTICKSHOOTER_BaseCharacter_CPP_generated_h

#define TwinStickShooter_Source_TwinStickShooter_BaseCharacter_CPP_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCalculateHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_deltaHealth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CalculateHealth(Z_Param_deltaHealth); \
		P_NATIVE_END; \
	}


#define TwinStickShooter_Source_TwinStickShooter_BaseCharacter_CPP_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCalculateHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_deltaHealth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CalculateHealth(Z_Param_deltaHealth); \
		P_NATIVE_END; \
	}


#define TwinStickShooter_Source_TwinStickShooter_BaseCharacter_CPP_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseCharacter_CPP(); \
	friend TWINSTICKSHOOTER_API class UClass* Z_Construct_UClass_ABaseCharacter_CPP(); \
public: \
	DECLARE_CLASS(ABaseCharacter_CPP, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TwinStickShooter"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter_CPP) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TwinStickShooter_Source_TwinStickShooter_BaseCharacter_CPP_h_11_INCLASS \
private: \
	static void StaticRegisterNativesABaseCharacter_CPP(); \
	friend TWINSTICKSHOOTER_API class UClass* Z_Construct_UClass_ABaseCharacter_CPP(); \
public: \
	DECLARE_CLASS(ABaseCharacter_CPP, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TwinStickShooter"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter_CPP) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TwinStickShooter_Source_TwinStickShooter_BaseCharacter_CPP_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseCharacter_CPP(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseCharacter_CPP) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter_CPP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter_CPP); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter_CPP(ABaseCharacter_CPP&&); \
	NO_API ABaseCharacter_CPP(const ABaseCharacter_CPP&); \
public:


#define TwinStickShooter_Source_TwinStickShooter_BaseCharacter_CPP_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter_CPP(ABaseCharacter_CPP&&); \
	NO_API ABaseCharacter_CPP(const ABaseCharacter_CPP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter_CPP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter_CPP); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseCharacter_CPP)


#define TwinStickShooter_Source_TwinStickShooter_BaseCharacter_CPP_h_11_PRIVATE_PROPERTY_OFFSET
#define TwinStickShooter_Source_TwinStickShooter_BaseCharacter_CPP_h_9_PROLOG
#define TwinStickShooter_Source_TwinStickShooter_BaseCharacter_CPP_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinStickShooter_Source_TwinStickShooter_BaseCharacter_CPP_h_11_PRIVATE_PROPERTY_OFFSET \
	TwinStickShooter_Source_TwinStickShooter_BaseCharacter_CPP_h_11_RPC_WRAPPERS \
	TwinStickShooter_Source_TwinStickShooter_BaseCharacter_CPP_h_11_INCLASS \
	TwinStickShooter_Source_TwinStickShooter_BaseCharacter_CPP_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TwinStickShooter_Source_TwinStickShooter_BaseCharacter_CPP_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinStickShooter_Source_TwinStickShooter_BaseCharacter_CPP_h_11_PRIVATE_PROPERTY_OFFSET \
	TwinStickShooter_Source_TwinStickShooter_BaseCharacter_CPP_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	TwinStickShooter_Source_TwinStickShooter_BaseCharacter_CPP_h_11_INCLASS_NO_PURE_DECLS \
	TwinStickShooter_Source_TwinStickShooter_BaseCharacter_CPP_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TwinStickShooter_Source_TwinStickShooter_BaseCharacter_CPP_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
