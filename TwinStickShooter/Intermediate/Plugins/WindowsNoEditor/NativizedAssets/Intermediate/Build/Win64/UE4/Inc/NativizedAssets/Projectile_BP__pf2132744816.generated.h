// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef NATIVIZEDASSETS_Projectile_BP__pf2132744816_generated_h
#error "Projectile_BP__pf2132744816.generated.h already included, missing '#pragma once' in Projectile_BP__pf2132744816.h"
#endif
#define NATIVIZEDASSETS_Projectile_BP__pf2132744816_generated_h

#define TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Projectile_BP__pf2132744816_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__UserConstructionScript__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__UserConstructionScript__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ReceiveActorBeginOverlap__pf) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__ReceiveActorBeginOverlap__pf(Z_Param_bpp__OtherActor__pf); \
		P_NATIVE_END; \
	}


#define TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Projectile_BP__pf2132744816_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__UserConstructionScript__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__UserConstructionScript__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ReceiveActorBeginOverlap__pf) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__ReceiveActorBeginOverlap__pf(Z_Param_bpp__OtherActor__pf); \
		P_NATIVE_END; \
	}


#define TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Projectile_BP__pf2132744816_h_16_EVENT_PARMS \
	struct Projectile_BP_C__pf2132744816_eventbpf__ReceiveActorBeginOverlap__pf_Parms \
	{ \
		AActor* bpp__OtherActor__pf; \
	};


#define TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Projectile_BP__pf2132744816_h_16_CALLBACK_WRAPPERS \
	void eventbpf__ReceiveActorBeginOverlap__pf(AActor* bpp__OtherActor__pf); \
 \
	void eventbpf__UserConstructionScript__pf(); \



#define TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Projectile_BP__pf2132744816_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectile_BP_C__pf2132744816(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_AProjectile_BP_C__pf2132744816(); \
public: \
	DECLARE_CLASS(AProjectile_BP_C__pf2132744816, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/Blueprints/Projectile_BP"), NO_API) \
	DECLARE_SERIALIZER(AProjectile_BP_C__pf2132744816) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Projectile_BP__pf2132744816_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAProjectile_BP_C__pf2132744816(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_AProjectile_BP_C__pf2132744816(); \
public: \
	DECLARE_CLASS(AProjectile_BP_C__pf2132744816, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/Blueprints/Projectile_BP"), NO_API) \
	DECLARE_SERIALIZER(AProjectile_BP_C__pf2132744816) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Projectile_BP__pf2132744816_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectile_BP_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectile_BP_C__pf2132744816) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile_BP_C__pf2132744816); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile_BP_C__pf2132744816); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile_BP_C__pf2132744816(AProjectile_BP_C__pf2132744816&&); \
	NO_API AProjectile_BP_C__pf2132744816(const AProjectile_BP_C__pf2132744816&); \
public:


#define TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Projectile_BP__pf2132744816_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile_BP_C__pf2132744816(AProjectile_BP_C__pf2132744816&&); \
	NO_API AProjectile_BP_C__pf2132744816(const AProjectile_BP_C__pf2132744816&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile_BP_C__pf2132744816); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile_BP_C__pf2132744816); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectile_BP_C__pf2132744816)


#define TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Projectile_BP__pf2132744816_h_16_PRIVATE_PROPERTY_OFFSET
#define TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Projectile_BP__pf2132744816_h_12_PROLOG \
	TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Projectile_BP__pf2132744816_h_16_EVENT_PARMS


#define TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Projectile_BP__pf2132744816_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Projectile_BP__pf2132744816_h_16_PRIVATE_PROPERTY_OFFSET \
	TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Projectile_BP__pf2132744816_h_16_RPC_WRAPPERS \
	TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Projectile_BP__pf2132744816_h_16_CALLBACK_WRAPPERS \
	TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Projectile_BP__pf2132744816_h_16_INCLASS \
	TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Projectile_BP__pf2132744816_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Projectile_BP__pf2132744816_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Projectile_BP__pf2132744816_h_16_PRIVATE_PROPERTY_OFFSET \
	TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Projectile_BP__pf2132744816_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Projectile_BP__pf2132744816_h_16_CALLBACK_WRAPPERS \
	TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Projectile_BP__pf2132744816_h_16_INCLASS_NO_PURE_DECLS \
	TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Projectile_BP__pf2132744816_h_16_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_Projectile_BP__pf2132744816_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
