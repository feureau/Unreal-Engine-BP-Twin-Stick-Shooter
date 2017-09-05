// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/EnemyCharacter_BP__pf2132744816.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyCharacter_BP__pf2132744816() {}
// Cross Module References
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AEnemyCharacter_BP_C__pf2132744816_bpf__DamagexHero__pfT();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AEnemyCharacter_BP_C__pf2132744816();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AEnemyCharacter_BP_C__pf2132744816_bpf__EffectxHealth__pfT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AEnemyCharacter_BP_C__pf2132744816_bpf__ExecuteUbergraph_EnemyCharacter_BP__pf_1();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AEnemyCharacter_BP_C__pf2132744816_bpf__ReceiveActorBeginOverlap__pf();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AEnemyCharacter_BP_C__pf2132744816_bpf__ReceiveActorEndOverlap__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AEnemyCharacter_BP_C__pf2132744816_bpf__UserConstructionScript__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AEnemyCharacter_BP_C__pf2132744816_NoRegister();
	TWINSTICKSHOOTER_API UClass* Z_Construct_UClass_ABaseCharacter_CPP();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AHeroCharacter_BP_C__pf2132744816_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ATwinStickGameMode_BP_C__pf2132744816_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UiDamageable_BP_C_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	static FName NAME_AEnemyCharacter_BP_C__pf2132744816_bpf__EffectxHealth__pfT = FName(TEXT("Effect Health"));
	void AEnemyCharacter_BP_C__pf2132744816::eventbpf__EffectxHealth__pfT(float bpp__DeltaxHealth__pfT)
	{
		EnemyCharacter_BP_C__pf2132744816_eventbpf__EffectxHealth__pfT_Parms Parms;
		Parms.bpp__DeltaxHealth__pfT=bpp__DeltaxHealth__pfT;
		ProcessEvent(FindFunctionChecked(NAME_AEnemyCharacter_BP_C__pf2132744816_bpf__EffectxHealth__pfT),&Parms);
	}
	static FName NAME_AEnemyCharacter_BP_C__pf2132744816_bpf__ReceiveActorBeginOverlap__pf = FName(TEXT("ReceiveActorBeginOverlap"));
	void AEnemyCharacter_BP_C__pf2132744816::eventbpf__ReceiveActorBeginOverlap__pf(AActor* bpp__OtherActor__pf)
	{
		EnemyCharacter_BP_C__pf2132744816_eventbpf__ReceiveActorBeginOverlap__pf_Parms Parms;
		Parms.bpp__OtherActor__pf=bpp__OtherActor__pf;
		ProcessEvent(FindFunctionChecked(NAME_AEnemyCharacter_BP_C__pf2132744816_bpf__ReceiveActorBeginOverlap__pf),&Parms);
	}
	static FName NAME_AEnemyCharacter_BP_C__pf2132744816_bpf__ReceiveActorEndOverlap__pf = FName(TEXT("ReceiveActorEndOverlap"));
	void AEnemyCharacter_BP_C__pf2132744816::eventbpf__ReceiveActorEndOverlap__pf(AActor* bpp__OtherActor__pf)
	{
		EnemyCharacter_BP_C__pf2132744816_eventbpf__ReceiveActorEndOverlap__pf_Parms Parms;
		Parms.bpp__OtherActor__pf=bpp__OtherActor__pf;
		ProcessEvent(FindFunctionChecked(NAME_AEnemyCharacter_BP_C__pf2132744816_bpf__ReceiveActorEndOverlap__pf),&Parms);
	}
	static FName NAME_AEnemyCharacter_BP_C__pf2132744816_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void AEnemyCharacter_BP_C__pf2132744816::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AEnemyCharacter_BP_C__pf2132744816_bpf__UserConstructionScript__pf),NULL);
	}
	void AEnemyCharacter_BP_C__pf2132744816::StaticRegisterNativesAEnemyCharacter_BP_C__pf2132744816()
	{
		UClass* Class = AEnemyCharacter_BP_C__pf2132744816::StaticClass();
		static const TNameNativePtrPair<TCHAR> TCharFuncs[] = {
			{ TEXT("Damage Hero"), (Native)&AEnemyCharacter_BP_C__pf2132744816::execbpf__DamagexHero__pfT },
			{ TEXT("Effect Health"), (Native)&AEnemyCharacter_BP_C__pf2132744816::execbpf__EffectxHealth__pfT },
			{ TEXT("ExecuteUbergraph_EnemyCharacter_BP_1"), (Native)&AEnemyCharacter_BP_C__pf2132744816::execbpf__ExecuteUbergraph_EnemyCharacter_BP__pf_1 },
			{ TEXT("ReceiveActorBeginOverlap"), (Native)&AEnemyCharacter_BP_C__pf2132744816::execbpf__ReceiveActorBeginOverlap__pf },
			{ TEXT("ReceiveActorEndOverlap"), (Native)&AEnemyCharacter_BP_C__pf2132744816::execbpf__ReceiveActorEndOverlap__pf },
			{ TEXT("UserConstructionScript"), (Native)&AEnemyCharacter_BP_C__pf2132744816::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, TCharFuncs, ARRAY_COUNT(TCharFuncs));
	}
	UFunction* Z_Construct_UFunction_AEnemyCharacter_BP_C__pf2132744816_bpf__DamagexHero__pfT()
	{
		UObject* Outer = Z_Construct_UClass_AEnemyCharacter_BP_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Damage Hero") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Damage Hero"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/EnemyCharacter_BP__pf2132744816.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("Damage Hero"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AEnemyCharacter_BP_C__pf2132744816_bpf__EffectxHealth__pfT()
	{
		UObject* Outer = Z_Construct_UClass_AEnemyCharacter_BP_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Effect Health") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Effect Health"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020C01, 65535, sizeof(EnemyCharacter_BP_C__pf2132744816_eventbpf__EffectxHealth__pfT_Parms));
			UProperty* NewProp_bpp__DeltaxHealth__pfT = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__DeltaxHealth__pfT"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpp__DeltaxHealth__pfT, EnemyCharacter_BP_C__pf2132744816_eventbpf__EffectxHealth__pfT_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("CppFromBpEvent"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/EnemyCharacter_BP__pf2132744816.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("Effect Health"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AEnemyCharacter_BP_C__pf2132744816_bpf__ExecuteUbergraph_EnemyCharacter_BP__pf_1()
	{
		struct EnemyCharacter_BP_C__pf2132744816_eventbpf__ExecuteUbergraph_EnemyCharacter_BP__pf_1_Parms
		{
			int32 bpp__EntryPoint__pf;
		};
		UObject* Outer = Z_Construct_UClass_AEnemyCharacter_BP_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ExecuteUbergraph_EnemyCharacter_BP_1") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ExecuteUbergraph_EnemyCharacter_BP_1"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020401, 65535, sizeof(EnemyCharacter_BP_C__pf2132744816_eventbpf__ExecuteUbergraph_EnemyCharacter_BP__pf_1_Parms));
			UProperty* NewProp_bpp__EntryPoint__pf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__EntryPoint__pf"), RF_Public|RF_Transient) UIntProperty(CPP_PROPERTY_BASE(bpp__EntryPoint__pf, EnemyCharacter_BP_C__pf2132744816_eventbpf__ExecuteUbergraph_EnemyCharacter_BP__pf_1_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/EnemyCharacter_BP__pf2132744816.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("ExecuteUbergraph_EnemyCharacter_BP_1"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AEnemyCharacter_BP_C__pf2132744816_bpf__ReceiveActorBeginOverlap__pf()
	{
		UObject* Outer = Z_Construct_UClass_AEnemyCharacter_BP_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveActorBeginOverlap") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ReceiveActorBeginOverlap"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020C01, 65535, sizeof(EnemyCharacter_BP_C__pf2132744816_eventbpf__ReceiveActorBeginOverlap__pf_Parms));
			UProperty* NewProp_bpp__OtherActor__pf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__OtherActor__pf"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpp__OtherActor__pf, EnemyCharacter_BP_C__pf2132744816_eventbpf__ReceiveActorBeginOverlap__pf_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Collision"));
			MetaData->SetValue(ReturnFunction, TEXT("CppFromBpEvent"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("ActorBeginOverlap"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/EnemyCharacter_BP__pf2132744816.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("ReceiveActorBeginOverlap"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Event when this actor overlaps another actor, for example a player walking into a trigger.For events when objects have a blocking collision, for example a player hitting a wall, see 'Hit' events.@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AEnemyCharacter_BP_C__pf2132744816_bpf__ReceiveActorEndOverlap__pf()
	{
		UObject* Outer = Z_Construct_UClass_AEnemyCharacter_BP_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveActorEndOverlap") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ReceiveActorEndOverlap"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020C01, 65535, sizeof(EnemyCharacter_BP_C__pf2132744816_eventbpf__ReceiveActorEndOverlap__pf_Parms));
			UProperty* NewProp_bpp__OtherActor__pf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__OtherActor__pf"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpp__OtherActor__pf, EnemyCharacter_BP_C__pf2132744816_eventbpf__ReceiveActorEndOverlap__pf_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Collision"));
			MetaData->SetValue(ReturnFunction, TEXT("CppFromBpEvent"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("ActorEndOverlap"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/EnemyCharacter_BP__pf2132744816.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("ReceiveActorEndOverlap"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Event when an actor no longer overlaps another actor, and they have separated.@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AEnemyCharacter_BP_C__pf2132744816_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_AEnemyCharacter_BP_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("UserConstructionScript") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UserConstructionScript"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020C01, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("BlueprintInternalUseOnly"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("CppFromBpEvent"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Construction Script"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/EnemyCharacter_BP__pf2132744816.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("UserConstructionScript"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation."));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEnemyCharacter_BP_C__pf2132744816_NoRegister()
	{
		return AEnemyCharacter_BP_C__pf2132744816::StaticClass();
	}
	UClass* Z_Construct_UClass_AEnemyCharacter_BP_C__pf2132744816()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/EnemyCharacter_BP"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("EnemyCharacter_BP_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			Z_Construct_UClass_ABaseCharacter_CPP();
			OuterClass = AEnemyCharacter_BP_C__pf2132744816::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20800080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AEnemyCharacter_BP_C__pf2132744816_bpf__DamagexHero__pfT());
				OuterClass->LinkChild(Z_Construct_UFunction_AEnemyCharacter_BP_C__pf2132744816_bpf__EffectxHealth__pfT());
				OuterClass->LinkChild(Z_Construct_UFunction_AEnemyCharacter_BP_C__pf2132744816_bpf__ExecuteUbergraph_EnemyCharacter_BP__pf_1());
				OuterClass->LinkChild(Z_Construct_UFunction_AEnemyCharacter_BP_C__pf2132744816_bpf__ReceiveActorBeginOverlap__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_AEnemyCharacter_BP_C__pf2132744816_bpf__ReceiveActorEndOverlap__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_AEnemyCharacter_BP_C__pf2132744816_bpf__UserConstructionScript__pf());

				CPP_BOOL_PROPERTY_BITMASK_STRUCT(b0l__K2Node_DynamicCast_bSuccess2__pf, AEnemyCharacter_BP_C__pf2132744816);
				UProperty* NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_DynamicCast_bSuccess2"), RF_Public|RF_Transient) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(b0l__K2Node_DynamicCast_bSuccess2__pf, AEnemyCharacter_BP_C__pf2132744816), 0x0010000000202000, CPP_BOOL_PROPERTY_BITMASK(b0l__K2Node_DynamicCast_bSuccess2__pf, AEnemyCharacter_BP_C__pf2132744816), sizeof(bool), true);
				UProperty* NewProp_b0l__K2Node_DynamicCast_AsHero_Character_BP__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_DynamicCast_AsHero_Character_BP"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(b0l__K2Node_DynamicCast_AsHero_Character_BP__pf, AEnemyCharacter_BP_C__pf2132744816), 0x0010000000202000, Z_Construct_UClass_AHeroCharacter_BP_C__pf2132744816_NoRegister());
				UProperty* NewProp_b0l__K2Node_Event_OtherActor__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_Event_OtherActor"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(b0l__K2Node_Event_OtherActor__pf, AEnemyCharacter_BP_C__pf2132744816), 0x0010000000202000, Z_Construct_UClass_AActor_NoRegister());
				UProperty* NewProp_b0l__K2Node_Event_Delta_Health__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_Event_Delta_Health"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(b0l__K2Node_Event_Delta_Health__pf, AEnemyCharacter_BP_C__pf2132744816), 0x0010000000202000);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(b0l__K2Node_DynamicCast_bSuccess__pf, AEnemyCharacter_BP_C__pf2132744816);
				UProperty* NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_DynamicCast_bSuccess"), RF_Public|RF_Transient) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(b0l__K2Node_DynamicCast_bSuccess__pf, AEnemyCharacter_BP_C__pf2132744816), 0x0010000000202000, CPP_BOOL_PROPERTY_BITMASK(b0l__K2Node_DynamicCast_bSuccess__pf, AEnemyCharacter_BP_C__pf2132744816), sizeof(bool), true);
				UProperty* NewProp_b0l__K2Node_DynamicCast_AsTwin_Stick_Game_Mode_BP__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_DynamicCast_AsTwin_Stick_Game_Mode_BP"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(b0l__K2Node_DynamicCast_AsTwin_Stick_Game_Mode_BP__pf, AEnemyCharacter_BP_C__pf2132744816), 0x0010000000202000, Z_Construct_UClass_ATwinStickGameMode_BP_C__pf2132744816_NoRegister());
				UProperty* NewProp_b0l__K2Node_Event_OtherActor2__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_Event_OtherActor2"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(b0l__K2Node_Event_OtherActor2__pf, AEnemyCharacter_BP_C__pf2132744816), 0x0010000000202000, Z_Construct_UClass_AActor_NoRegister());
				UProperty* NewProp_b0l__CallFunc_Effect_Health_self_CastInput__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_Effect_Health_self_CastInput"), RF_Public|RF_Transient) UInterfaceProperty(CPP_PROPERTY_BASE(b0l__CallFunc_Effect_Health_self_CastInput__pf, AEnemyCharacter_BP_C__pf2132744816), 0x0014000000202000, Z_Construct_UClass_UiDamageable_BP_C_NoRegister());
				UProperty* NewProp_bpv__ScoreForKillingThisGuy__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ScoreForKillingThisGuy"), RF_Public|RF_Transient) UIntProperty(CPP_PROPERTY_BASE(bpv__ScoreForKillingThisGuy__pf, AEnemyCharacter_BP_C__pf2132744816), 0x0010000000010005);
				UProperty* NewProp_bpv__AttacksxperxSecond__pfTT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Attacks per Second"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__AttacksxperxSecond__pfTT, AEnemyCharacter_BP_C__pf2132744816), 0x0010000000010005);
				UProperty* NewProp_bpv__Damage__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Damage"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__Damage__pf, AEnemyCharacter_BP_C__pf2132744816), 0x0010000000010005);
				UProperty* NewProp_bpv__HeroxCharacter__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Hero Character"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__HeroxCharacter__pfT, AEnemyCharacter_BP_C__pf2132744816), 0x0010000000010005, Z_Construct_UClass_AHeroCharacter_BP_C__pf2132744816_NoRegister());
				UProperty* NewProp_bpv__DynaxMat__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Dyna Mat"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__DynaxMat__pfT, AEnemyCharacter_BP_C__pf2132744816), 0x0010000000010005, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister());
				UProperty* NewProp_bpv__DamagexVolume__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Damage Volume"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__DamagexVolume__pfT, AEnemyCharacter_BP_C__pf2132744816), 0x001000040008000c, Z_Construct_UClass_UBoxComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AEnemyCharacter_BP_C__pf2132744816_bpf__DamagexHero__pfT(), TEXT("Damage Hero")); // 2947410141
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AEnemyCharacter_BP_C__pf2132744816_bpf__EffectxHealth__pfT(), TEXT("Effect Health")); // 2113680415
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AEnemyCharacter_BP_C__pf2132744816_bpf__ExecuteUbergraph_EnemyCharacter_BP__pf_1(), TEXT("ExecuteUbergraph_EnemyCharacter_BP_1")); // 1074641575
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AEnemyCharacter_BP_C__pf2132744816_bpf__ReceiveActorBeginOverlap__pf(), TEXT("ReceiveActorBeginOverlap")); // 3026362795
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AEnemyCharacter_BP_C__pf2132744816_bpf__ReceiveActorEndOverlap__pf(), TEXT("ReceiveActorEndOverlap")); // 4063077995
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AEnemyCharacter_BP_C__pf2132744816_bpf__UserConstructionScript__pf(), TEXT("UserConstructionScript")); // 2792691323
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<AEnemyCharacter_BP_C__pf2132744816> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->Interfaces.Add(FImplementedInterface(Z_Construct_UClass_UiDamageable_BP_C_NoRegister(), VTABLE_OFFSET(AEnemyCharacter_BP_C__pf2132744816, IiDamageable_BP_C), false ));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("EnemyCharacter_BP__pf2132744816.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/EnemyCharacter_BP__pf2132744816.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("OverrideNativeName"), TEXT("EnemyCharacter_BP_C"));
				MetaData->SetValue(OuterClass, TEXT("ReplaceConverted"), TEXT("/Game/Blueprints/EnemyCharacter_BP.EnemyCharacter_BP_C"));
				MetaData->SetValue(NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf, TEXT("ModuleRelativePath"), TEXT("Public/EnemyCharacter_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf, TEXT("OverrideNativeName"), TEXT("K2Node_DynamicCast_bSuccess2"));
				MetaData->SetValue(NewProp_b0l__K2Node_DynamicCast_AsHero_Character_BP__pf, TEXT("ModuleRelativePath"), TEXT("Public/EnemyCharacter_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_DynamicCast_AsHero_Character_BP__pf, TEXT("OverrideNativeName"), TEXT("K2Node_DynamicCast_AsHero_Character_BP"));
				MetaData->SetValue(NewProp_b0l__K2Node_Event_OtherActor__pf, TEXT("ModuleRelativePath"), TEXT("Public/EnemyCharacter_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_Event_OtherActor__pf, TEXT("OverrideNativeName"), TEXT("K2Node_Event_OtherActor"));
				MetaData->SetValue(NewProp_b0l__K2Node_Event_Delta_Health__pf, TEXT("ModuleRelativePath"), TEXT("Public/EnemyCharacter_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_Event_Delta_Health__pf, TEXT("OverrideNativeName"), TEXT("K2Node_Event_Delta_Health"));
				MetaData->SetValue(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf, TEXT("ModuleRelativePath"), TEXT("Public/EnemyCharacter_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf, TEXT("OverrideNativeName"), TEXT("K2Node_DynamicCast_bSuccess"));
				MetaData->SetValue(NewProp_b0l__K2Node_DynamicCast_AsTwin_Stick_Game_Mode_BP__pf, TEXT("ModuleRelativePath"), TEXT("Public/EnemyCharacter_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_DynamicCast_AsTwin_Stick_Game_Mode_BP__pf, TEXT("OverrideNativeName"), TEXT("K2Node_DynamicCast_AsTwin_Stick_Game_Mode_BP"));
				MetaData->SetValue(NewProp_b0l__K2Node_Event_OtherActor2__pf, TEXT("ModuleRelativePath"), TEXT("Public/EnemyCharacter_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_Event_OtherActor2__pf, TEXT("OverrideNativeName"), TEXT("K2Node_Event_OtherActor2"));
				MetaData->SetValue(NewProp_b0l__CallFunc_Effect_Health_self_CastInput__pf, TEXT("ModuleRelativePath"), TEXT("Public/EnemyCharacter_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_Effect_Health_self_CastInput__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_Effect_Health_self_CastInput"));
				MetaData->SetValue(NewProp_bpv__ScoreForKillingThisGuy__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__ScoreForKillingThisGuy__pf, TEXT("DisplayName"), TEXT("Score for Killing This Guy"));
				MetaData->SetValue(NewProp_bpv__ScoreForKillingThisGuy__pf, TEXT("ModuleRelativePath"), TEXT("Public/EnemyCharacter_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_bpv__ScoreForKillingThisGuy__pf, TEXT("OverrideNativeName"), TEXT("ScoreForKillingThisGuy"));
				MetaData->SetValue(NewProp_bpv__AttacksxperxSecond__pfTT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__AttacksxperxSecond__pfTT, TEXT("DisplayName"), TEXT("Attacks Per Second"));
				MetaData->SetValue(NewProp_bpv__AttacksxperxSecond__pfTT, TEXT("ModuleRelativePath"), TEXT("Public/EnemyCharacter_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_bpv__AttacksxperxSecond__pfTT, TEXT("OverrideNativeName"), TEXT("Attacks per Second"));
				MetaData->SetValue(NewProp_bpv__Damage__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__Damage__pf, TEXT("DisplayName"), TEXT("Damage"));
				MetaData->SetValue(NewProp_bpv__Damage__pf, TEXT("ModuleRelativePath"), TEXT("Public/EnemyCharacter_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_bpv__Damage__pf, TEXT("OverrideNativeName"), TEXT("Damage"));
				MetaData->SetValue(NewProp_bpv__HeroxCharacter__pfT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__HeroxCharacter__pfT, TEXT("DisplayName"), TEXT("Hero Character"));
				MetaData->SetValue(NewProp_bpv__HeroxCharacter__pfT, TEXT("ModuleRelativePath"), TEXT("Public/EnemyCharacter_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_bpv__HeroxCharacter__pfT, TEXT("OverrideNativeName"), TEXT("Hero Character"));
				MetaData->SetValue(NewProp_bpv__DynaxMat__pfT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__DynaxMat__pfT, TEXT("DisplayName"), TEXT("Dyna Mat"));
				MetaData->SetValue(NewProp_bpv__DynaxMat__pfT, TEXT("ModuleRelativePath"), TEXT("Public/EnemyCharacter_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_bpv__DynaxMat__pfT, TEXT("OverrideNativeName"), TEXT("Dyna Mat"));
				MetaData->SetValue(NewProp_bpv__DamagexVolume__pfT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__DamagexVolume__pfT, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__DamagexVolume__pfT, TEXT("ModuleRelativePath"), TEXT("Public/EnemyCharacter_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_bpv__DamagexVolume__pfT, TEXT("OverrideNativeName"), TEXT("Damage Volume"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AEnemyCharacter_BP_C__pf2132744816, TEXT("EnemyCharacter_BP_C"), 3589209175);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyCharacter_BP_C__pf2132744816(Z_Construct_UClass_AEnemyCharacter_BP_C__pf2132744816, &AEnemyCharacter_BP_C__pf2132744816::StaticClass, TEXT("/Game/Blueprints/EnemyCharacter_BP"), TEXT("EnemyCharacter_BP_C"), true, TEXT("/Game/Blueprints/EnemyCharacter_BP"), TEXT("/Game/Blueprints/EnemyCharacter_BP.EnemyCharacter_BP_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyCharacter_BP_C__pf2132744816);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
