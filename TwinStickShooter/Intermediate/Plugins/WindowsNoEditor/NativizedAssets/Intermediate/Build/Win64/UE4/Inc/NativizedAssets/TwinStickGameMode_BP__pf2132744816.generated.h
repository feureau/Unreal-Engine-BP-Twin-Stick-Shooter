// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NATIVIZEDASSETS_TwinStickGameMode_BP__pf2132744816_generated_h
#error "TwinStickGameMode_BP__pf2132744816.generated.h already included, missing '#pragma once' in TwinStickGameMode_BP__pf2132744816.h"
#endif
#define NATIVIZEDASSETS_TwinStickGameMode_BP__pf2132744816_generated_h

#define TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_TwinStickGameMode_BP__pf2132744816_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__UserConstructionScript__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__UserConstructionScript__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__ReceiveBeginPlay__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__RespawnPlayer__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__RespawnPlayer__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__IncrementScore__pf) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__DeltaScore__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__IncrementScore__pf(Z_Param_bpp__DeltaScore__pf); \
		P_NATIVE_END; \
	}


#define TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_TwinStickGameMode_BP__pf2132744816_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__UserConstructionScript__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__UserConstructionScript__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__ReceiveBeginPlay__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__RespawnPlayer__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__RespawnPlayer__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__IncrementScore__pf) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__DeltaScore__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__IncrementScore__pf(Z_Param_bpp__DeltaScore__pf); \
		P_NATIVE_END; \
	}


#define TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_TwinStickGameMode_BP__pf2132744816_h_13_EVENT_PARMS
#define TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_TwinStickGameMode_BP__pf2132744816_h_13_CALLBACK_WRAPPERS \
	void eventbpf__ReceiveBeginPlay__pf(); \
 \
	void eventbpf__UserConstructionScript__pf(); \



#define TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_TwinStickGameMode_BP__pf2132744816_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATwinStickGameMode_BP_C__pf2132744816(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_ATwinStickGameMode_BP_C__pf2132744816(); \
public: \
	DECLARE_CLASS(ATwinStickGameMode_BP_C__pf2132744816, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Game/Blueprints/TwinStickGameMode_BP"), NO_API) \
	DECLARE_SERIALIZER(ATwinStickGameMode_BP_C__pf2132744816) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_TwinStickGameMode_BP__pf2132744816_h_13_INCLASS \
private: \
	static void StaticRegisterNativesATwinStickGameMode_BP_C__pf2132744816(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_ATwinStickGameMode_BP_C__pf2132744816(); \
public: \
	DECLARE_CLASS(ATwinStickGameMode_BP_C__pf2132744816, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Game/Blueprints/TwinStickGameMode_BP"), NO_API) \
	DECLARE_SERIALIZER(ATwinStickGameMode_BP_C__pf2132744816) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_TwinStickGameMode_BP__pf2132744816_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATwinStickGameMode_BP_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATwinStickGameMode_BP_C__pf2132744816) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATwinStickGameMode_BP_C__pf2132744816); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATwinStickGameMode_BP_C__pf2132744816); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATwinStickGameMode_BP_C__pf2132744816(ATwinStickGameMode_BP_C__pf2132744816&&); \
	NO_API ATwinStickGameMode_BP_C__pf2132744816(const ATwinStickGameMode_BP_C__pf2132744816&); \
public:


#define TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_TwinStickGameMode_BP__pf2132744816_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATwinStickGameMode_BP_C__pf2132744816(ATwinStickGameMode_BP_C__pf2132744816&&); \
	NO_API ATwinStickGameMode_BP_C__pf2132744816(const ATwinStickGameMode_BP_C__pf2132744816&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATwinStickGameMode_BP_C__pf2132744816); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATwinStickGameMode_BP_C__pf2132744816); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATwinStickGameMode_BP_C__pf2132744816)


#define TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_TwinStickGameMode_BP__pf2132744816_h_13_PRIVATE_PROPERTY_OFFSET
#define TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_TwinStickGameMode_BP__pf2132744816_h_9_PROLOG \
	TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_TwinStickGameMode_BP__pf2132744816_h_13_EVENT_PARMS


#define TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_TwinStickGameMode_BP__pf2132744816_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_TwinStickGameMode_BP__pf2132744816_h_13_PRIVATE_PROPERTY_OFFSET \
	TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_TwinStickGameMode_BP__pf2132744816_h_13_RPC_WRAPPERS \
	TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_TwinStickGameMode_BP__pf2132744816_h_13_CALLBACK_WRAPPERS \
	TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_TwinStickGameMode_BP__pf2132744816_h_13_INCLASS \
	TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_TwinStickGameMode_BP__pf2132744816_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_TwinStickGameMode_BP__pf2132744816_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_TwinStickGameMode_BP__pf2132744816_h_13_PRIVATE_PROPERTY_OFFSET \
	TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_TwinStickGameMode_BP__pf2132744816_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_TwinStickGameMode_BP__pf2132744816_h_13_CALLBACK_WRAPPERS \
	TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_TwinStickGameMode_BP__pf2132744816_h_13_INCLASS_NO_PURE_DECLS \
	TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_TwinStickGameMode_BP__pf2132744816_h_13_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_TwinStickGameMode_BP__pf2132744816_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
