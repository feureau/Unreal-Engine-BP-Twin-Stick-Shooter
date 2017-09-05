// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NATIVIZEDASSETS_EnemyAIController_BP__pf2132744816_generated_h
#error "EnemyAIController_BP__pf2132744816.generated.h already included, missing '#pragma once' in EnemyAIController_BP__pf2132744816.h"
#endif
#define NATIVIZEDASSETS_EnemyAIController_BP__pf2132744816_generated_h

#define TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_EnemyAIController_BP__pf2132744816_h_13_DELEGATE \
struct EnemyAIController_BP_C__pf2132744816_event__OAISimpleDelegate__DelegateSignature__SC_0_Parms \
{ \
	TEnumAsByte<EPathFollowingResult::Type> bpp__MovementResult__pf; \
}; \
static inline void F__OAISimpleDelegate__DelegateSignature__SC_0_DelegateWrapper(const FScriptDelegate& __OAISimpleDelegate__DelegateSignature__SC_0, EPathFollowingResult::Type bpp__MovementResult__pf) \
{ \
	EnemyAIController_BP_C__pf2132744816_event__OAISimpleDelegate__DelegateSignature__SC_0_Parms Parms; \
	Parms.bpp__MovementResult__pf=bpp__MovementResult__pf; \
	__OAISimpleDelegate__DelegateSignature__SC_0.ProcessDelegate<UObject>(&Parms); \
}


#define TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_EnemyAIController_BP__pf2132744816_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__UserConstructionScript__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__UserConstructionScript__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnFail_40D8FBAB4E1AC040BAA5768276468F1C__pf) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_bpp__MovementResult__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__OnFail_40D8FBAB4E1AC040BAA5768276468F1C__pf(EPathFollowingResult::Type(Z_Param_bpp__MovementResult__pf)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnSuccess_40D8FBAB4E1AC040BAA5768276468F1C__pf) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_bpp__MovementResult__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__OnSuccess_40D8FBAB4E1AC040BAA5768276468F1C__pf(EPathFollowingResult::Type(Z_Param_bpp__MovementResult__pf)); \
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
	DECLARE_FUNCTION(execbpf__TrackPlayer__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__TrackPlayer__pf(); \
		P_NATIVE_END; \
	}


#define TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_EnemyAIController_BP__pf2132744816_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__UserConstructionScript__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__UserConstructionScript__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnFail_40D8FBAB4E1AC040BAA5768276468F1C__pf) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_bpp__MovementResult__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__OnFail_40D8FBAB4E1AC040BAA5768276468F1C__pf(EPathFollowingResult::Type(Z_Param_bpp__MovementResult__pf)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnSuccess_40D8FBAB4E1AC040BAA5768276468F1C__pf) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_bpp__MovementResult__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__OnSuccess_40D8FBAB4E1AC040BAA5768276468F1C__pf(EPathFollowingResult::Type(Z_Param_bpp__MovementResult__pf)); \
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
	DECLARE_FUNCTION(execbpf__TrackPlayer__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__TrackPlayer__pf(); \
		P_NATIVE_END; \
	}


#define TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_EnemyAIController_BP__pf2132744816_h_11_EVENT_PARMS
#define TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_EnemyAIController_BP__pf2132744816_h_11_CALLBACK_WRAPPERS \
	void eventbpf__ReceiveBeginPlay__pf(); \
 \
	void eventbpf__UserConstructionScript__pf(); \



#define TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_EnemyAIController_BP__pf2132744816_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyAIController_BP_C__pf2132744816(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_AEnemyAIController_BP_C__pf2132744816(); \
public: \
	DECLARE_CLASS(AEnemyAIController_BP_C__pf2132744816, AAIController, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/Blueprints/EnemyAIController_BP"), NO_API) \
	DECLARE_SERIALIZER(AEnemyAIController_BP_C__pf2132744816) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_EnemyAIController_BP__pf2132744816_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyAIController_BP_C__pf2132744816(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_AEnemyAIController_BP_C__pf2132744816(); \
public: \
	DECLARE_CLASS(AEnemyAIController_BP_C__pf2132744816, AAIController, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/Blueprints/EnemyAIController_BP"), NO_API) \
	DECLARE_SERIALIZER(AEnemyAIController_BP_C__pf2132744816) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_EnemyAIController_BP__pf2132744816_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyAIController_BP_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyAIController_BP_C__pf2132744816) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyAIController_BP_C__pf2132744816); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyAIController_BP_C__pf2132744816); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyAIController_BP_C__pf2132744816(AEnemyAIController_BP_C__pf2132744816&&); \
	NO_API AEnemyAIController_BP_C__pf2132744816(const AEnemyAIController_BP_C__pf2132744816&); \
public:


#define TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_EnemyAIController_BP__pf2132744816_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyAIController_BP_C__pf2132744816(AEnemyAIController_BP_C__pf2132744816&&); \
	NO_API AEnemyAIController_BP_C__pf2132744816(const AEnemyAIController_BP_C__pf2132744816&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyAIController_BP_C__pf2132744816); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyAIController_BP_C__pf2132744816); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyAIController_BP_C__pf2132744816)


#define TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_EnemyAIController_BP__pf2132744816_h_11_PRIVATE_PROPERTY_OFFSET
#define TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_EnemyAIController_BP__pf2132744816_h_7_PROLOG \
	TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_EnemyAIController_BP__pf2132744816_h_11_EVENT_PARMS


#define TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_EnemyAIController_BP__pf2132744816_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_EnemyAIController_BP__pf2132744816_h_11_PRIVATE_PROPERTY_OFFSET \
	TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_EnemyAIController_BP__pf2132744816_h_11_RPC_WRAPPERS \
	TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_EnemyAIController_BP__pf2132744816_h_11_CALLBACK_WRAPPERS \
	TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_EnemyAIController_BP__pf2132744816_h_11_INCLASS \
	TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_EnemyAIController_BP__pf2132744816_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_EnemyAIController_BP__pf2132744816_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_EnemyAIController_BP__pf2132744816_h_11_PRIVATE_PROPERTY_OFFSET \
	TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_EnemyAIController_BP__pf2132744816_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_EnemyAIController_BP__pf2132744816_h_11_CALLBACK_WRAPPERS \
	TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_EnemyAIController_BP__pf2132744816_h_11_INCLASS_NO_PURE_DECLS \
	TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_EnemyAIController_BP__pf2132744816_h_11_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TwinStickShooter_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_EnemyAIController_BP__pf2132744816_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
