// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/HeroCharacter_BP__pf2132744816.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroCharacter_BP__pf2132744816() {}
// Cross Module References
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AHeroCharacter_BP_C__pf2132744816_bpf__EffectxHealth__pfT();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AHeroCharacter_BP_C__pf2132744816();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AHeroCharacter_BP_C__pf2132744816_bpf__ExecuteUbergraph_HeroCharacter_BP__pf_2();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AHeroCharacter_BP_C__pf2132744816_bpf__InpAxisEvt_LookRight_K2Node_InputAxisEvent_6__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AHeroCharacter_BP_C__pf2132744816_bpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_3__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AHeroCharacter_BP_C__pf2132744816_bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AHeroCharacter_BP_C__pf2132744816_bpf__InpAxisEvt_MoveUp_K2Node_InputAxisEvent_0__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AHeroCharacter_BP_C__pf2132744816_bpf__ReceiveBeginPlay__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AHeroCharacter_BP_C__pf2132744816_bpf__UserConstructionScript__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AHeroCharacter_BP_C__pf2132744816_NoRegister();
	TWINSTICKSHOOTER_API UClass* Z_Construct_UClass_ABaseCharacter_CPP();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ATwinStickGameMode_BP_C__pf2132744816_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AWeapon_BP_C__pf2132744816_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UiDamageable_BP_C_NoRegister();
// End Cross Module References
	static FName NAME_AHeroCharacter_BP_C__pf2132744816_bpf__EffectxHealth__pfT = FName(TEXT("Effect Health"));
	void AHeroCharacter_BP_C__pf2132744816::eventbpf__EffectxHealth__pfT(float bpp__DeltaxHealth__pfT)
	{
		HeroCharacter_BP_C__pf2132744816_eventbpf__EffectxHealth__pfT_Parms Parms;
		Parms.bpp__DeltaxHealth__pfT=bpp__DeltaxHealth__pfT;
		ProcessEvent(FindFunctionChecked(NAME_AHeroCharacter_BP_C__pf2132744816_bpf__EffectxHealth__pfT),&Parms);
	}
	static FName NAME_AHeroCharacter_BP_C__pf2132744816_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void AHeroCharacter_BP_C__pf2132744816::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AHeroCharacter_BP_C__pf2132744816_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_AHeroCharacter_BP_C__pf2132744816_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void AHeroCharacter_BP_C__pf2132744816::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AHeroCharacter_BP_C__pf2132744816_bpf__UserConstructionScript__pf),NULL);
	}
	void AHeroCharacter_BP_C__pf2132744816::StaticRegisterNativesAHeroCharacter_BP_C__pf2132744816()
	{
		UClass* Class = AHeroCharacter_BP_C__pf2132744816::StaticClass();
		static const TNameNativePtrPair<TCHAR> TCharFuncs[] = {
			{ TEXT("Effect Health"), (Native)&AHeroCharacter_BP_C__pf2132744816::execbpf__EffectxHealth__pfT },
			{ TEXT("ExecuteUbergraph_HeroCharacter_BP_2"), (Native)&AHeroCharacter_BP_C__pf2132744816::execbpf__ExecuteUbergraph_HeroCharacter_BP__pf_2 },
			{ TEXT("InpAxisEvt_LookRight_K2Node_InputAxisEvent_6"), (Native)&AHeroCharacter_BP_C__pf2132744816::execbpf__InpAxisEvt_LookRight_K2Node_InputAxisEvent_6__pf },
			{ TEXT("InpAxisEvt_LookUp_K2Node_InputAxisEvent_3"), (Native)&AHeroCharacter_BP_C__pf2132744816::execbpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_3__pf },
			{ TEXT("InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1"), (Native)&AHeroCharacter_BP_C__pf2132744816::execbpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1__pf },
			{ TEXT("InpAxisEvt_MoveUp_K2Node_InputAxisEvent_0"), (Native)&AHeroCharacter_BP_C__pf2132744816::execbpf__InpAxisEvt_MoveUp_K2Node_InputAxisEvent_0__pf },
			{ TEXT("ReceiveBeginPlay"), (Native)&AHeroCharacter_BP_C__pf2132744816::execbpf__ReceiveBeginPlay__pf },
			{ TEXT("UserConstructionScript"), (Native)&AHeroCharacter_BP_C__pf2132744816::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, TCharFuncs, ARRAY_COUNT(TCharFuncs));
	}
	UFunction* Z_Construct_UFunction_AHeroCharacter_BP_C__pf2132744816_bpf__EffectxHealth__pfT()
	{
		UObject* Outer = Z_Construct_UClass_AHeroCharacter_BP_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Effect Health") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Effect Health"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020C01, 65535, sizeof(HeroCharacter_BP_C__pf2132744816_eventbpf__EffectxHealth__pfT_Parms));
			UProperty* NewProp_bpp__DeltaxHealth__pfT = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__DeltaxHealth__pfT"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpp__DeltaxHealth__pfT, HeroCharacter_BP_C__pf2132744816_eventbpf__EffectxHealth__pfT_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("CppFromBpEvent"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter_BP__pf2132744816.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("Effect Health"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeroCharacter_BP_C__pf2132744816_bpf__ExecuteUbergraph_HeroCharacter_BP__pf_2()
	{
		struct HeroCharacter_BP_C__pf2132744816_eventbpf__ExecuteUbergraph_HeroCharacter_BP__pf_2_Parms
		{
			int32 bpp__EntryPoint__pf;
		};
		UObject* Outer = Z_Construct_UClass_AHeroCharacter_BP_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ExecuteUbergraph_HeroCharacter_BP_2") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ExecuteUbergraph_HeroCharacter_BP_2"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020401, 65535, sizeof(HeroCharacter_BP_C__pf2132744816_eventbpf__ExecuteUbergraph_HeroCharacter_BP__pf_2_Parms));
			UProperty* NewProp_bpp__EntryPoint__pf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__EntryPoint__pf"), RF_Public|RF_Transient) UIntProperty(CPP_PROPERTY_BASE(bpp__EntryPoint__pf, HeroCharacter_BP_C__pf2132744816_eventbpf__ExecuteUbergraph_HeroCharacter_BP__pf_2_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter_BP__pf2132744816.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("ExecuteUbergraph_HeroCharacter_BP_2"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeroCharacter_BP_C__pf2132744816_bpf__InpAxisEvt_LookRight_K2Node_InputAxisEvent_6__pf()
	{
		struct HeroCharacter_BP_C__pf2132744816_eventbpf__InpAxisEvt_LookRight_K2Node_InputAxisEvent_6__pf_Parms
		{
			float bpp__AxisValue__pf;
		};
		UObject* Outer = Z_Construct_UClass_AHeroCharacter_BP_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpAxisEvt_LookRight_K2Node_InputAxisEvent_6") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("InpAxisEvt_LookRight_K2Node_InputAxisEvent_6"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020400, 65535, sizeof(HeroCharacter_BP_C__pf2132744816_eventbpf__InpAxisEvt_LookRight_K2Node_InputAxisEvent_6__pf_Parms));
			UProperty* NewProp_bpp__AxisValue__pf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__AxisValue__pf"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpp__AxisValue__pf, HeroCharacter_BP_C__pf2132744816_eventbpf__InpAxisEvt_LookRight_K2Node_InputAxisEvent_6__pf_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter_BP__pf2132744816.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("InpAxisEvt_LookRight_K2Node_InputAxisEvent_6"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeroCharacter_BP_C__pf2132744816_bpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_3__pf()
	{
		struct HeroCharacter_BP_C__pf2132744816_eventbpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_3__pf_Parms
		{
			float bpp__AxisValue__pf;
		};
		UObject* Outer = Z_Construct_UClass_AHeroCharacter_BP_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpAxisEvt_LookUp_K2Node_InputAxisEvent_3") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("InpAxisEvt_LookUp_K2Node_InputAxisEvent_3"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020400, 65535, sizeof(HeroCharacter_BP_C__pf2132744816_eventbpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_3__pf_Parms));
			UProperty* NewProp_bpp__AxisValue__pf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__AxisValue__pf"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpp__AxisValue__pf, HeroCharacter_BP_C__pf2132744816_eventbpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_3__pf_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter_BP__pf2132744816.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("InpAxisEvt_LookUp_K2Node_InputAxisEvent_3"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeroCharacter_BP_C__pf2132744816_bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1__pf()
	{
		struct HeroCharacter_BP_C__pf2132744816_eventbpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1__pf_Parms
		{
			float bpp__AxisValue__pf;
		};
		UObject* Outer = Z_Construct_UClass_AHeroCharacter_BP_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020400, 65535, sizeof(HeroCharacter_BP_C__pf2132744816_eventbpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1__pf_Parms));
			UProperty* NewProp_bpp__AxisValue__pf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__AxisValue__pf"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpp__AxisValue__pf, HeroCharacter_BP_C__pf2132744816_eventbpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1__pf_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter_BP__pf2132744816.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeroCharacter_BP_C__pf2132744816_bpf__InpAxisEvt_MoveUp_K2Node_InputAxisEvent_0__pf()
	{
		struct HeroCharacter_BP_C__pf2132744816_eventbpf__InpAxisEvt_MoveUp_K2Node_InputAxisEvent_0__pf_Parms
		{
			float bpp__AxisValue__pf;
		};
		UObject* Outer = Z_Construct_UClass_AHeroCharacter_BP_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpAxisEvt_MoveUp_K2Node_InputAxisEvent_0") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("InpAxisEvt_MoveUp_K2Node_InputAxisEvent_0"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020400, 65535, sizeof(HeroCharacter_BP_C__pf2132744816_eventbpf__InpAxisEvt_MoveUp_K2Node_InputAxisEvent_0__pf_Parms));
			UProperty* NewProp_bpp__AxisValue__pf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__AxisValue__pf"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpp__AxisValue__pf, HeroCharacter_BP_C__pf2132744816_eventbpf__InpAxisEvt_MoveUp_K2Node_InputAxisEvent_0__pf_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter_BP__pf2132744816.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("InpAxisEvt_MoveUp_K2Node_InputAxisEvent_0"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeroCharacter_BP_C__pf2132744816_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_AHeroCharacter_BP_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveBeginPlay") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ReceiveBeginPlay"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020C01, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("CppFromBpEvent"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("BeginPlay"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter_BP__pf2132744816.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("ReceiveBeginPlay"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Event when play begins for this actor."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeroCharacter_BP_C__pf2132744816_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_AHeroCharacter_BP_C__pf2132744816();
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
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter_BP__pf2132744816.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("UserConstructionScript"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation."));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHeroCharacter_BP_C__pf2132744816_NoRegister()
	{
		return AHeroCharacter_BP_C__pf2132744816::StaticClass();
	}
	UClass* Z_Construct_UClass_AHeroCharacter_BP_C__pf2132744816()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/HeroCharacter_BP"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("HeroCharacter_BP_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			Z_Construct_UClass_ABaseCharacter_CPP();
			OuterClass = AHeroCharacter_BP_C__pf2132744816::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20800080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AHeroCharacter_BP_C__pf2132744816_bpf__EffectxHealth__pfT());
				OuterClass->LinkChild(Z_Construct_UFunction_AHeroCharacter_BP_C__pf2132744816_bpf__ExecuteUbergraph_HeroCharacter_BP__pf_2());
				OuterClass->LinkChild(Z_Construct_UFunction_AHeroCharacter_BP_C__pf2132744816_bpf__InpAxisEvt_LookRight_K2Node_InputAxisEvent_6__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_AHeroCharacter_BP_C__pf2132744816_bpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_3__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_AHeroCharacter_BP_C__pf2132744816_bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_AHeroCharacter_BP_C__pf2132744816_bpf__InpAxisEvt_MoveUp_K2Node_InputAxisEvent_0__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_AHeroCharacter_BP_C__pf2132744816_bpf__ReceiveBeginPlay__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_AHeroCharacter_BP_C__pf2132744816_bpf__UserConstructionScript__pf());

				UProperty* NewProp_b0l__K2Node_InputAxisEvent_AxisValue__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_InputAxisEvent_AxisValue"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(b0l__K2Node_InputAxisEvent_AxisValue__pf, AHeroCharacter_BP_C__pf2132744816), 0x0010000000202000);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(b0l__K2Node_DynamicCast_bSuccess__pf, AHeroCharacter_BP_C__pf2132744816);
				UProperty* NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_DynamicCast_bSuccess"), RF_Public|RF_Transient) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(b0l__K2Node_DynamicCast_bSuccess__pf, AHeroCharacter_BP_C__pf2132744816), 0x0010000000202000, CPP_BOOL_PROPERTY_BITMASK(b0l__K2Node_DynamicCast_bSuccess__pf, AHeroCharacter_BP_C__pf2132744816), sizeof(bool), true);
				UProperty* NewProp_b0l__K2Node_DynamicCast_AsTwin_Stick_Game_Mode_BP__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_DynamicCast_AsTwin_Stick_Game_Mode_BP"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(b0l__K2Node_DynamicCast_AsTwin_Stick_Game_Mode_BP__pf, AHeroCharacter_BP_C__pf2132744816), 0x0010000000202000, Z_Construct_UClass_ATwinStickGameMode_BP_C__pf2132744816_NoRegister());
				UProperty* NewProp_b0l__K2Node_Event_Delta_Health__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_Event_Delta_Health"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(b0l__K2Node_Event_Delta_Health__pf, AHeroCharacter_BP_C__pf2132744816), 0x0010000000202000);
				UProperty* NewProp_b0l__K2Node_InputAxisEvent_AxisValue2__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_InputAxisEvent_AxisValue2"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(b0l__K2Node_InputAxisEvent_AxisValue2__pf, AHeroCharacter_BP_C__pf2132744816), 0x0010000000202000);
				UProperty* NewProp_b0l__K2Node_InputAxisEvent_AxisValue4__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_InputAxisEvent_AxisValue4"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(b0l__K2Node_InputAxisEvent_AxisValue4__pf, AHeroCharacter_BP_C__pf2132744816), 0x0010000000202000);
				UProperty* NewProp_b0l__K2Node_InputAxisEvent_AxisValue3__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_InputAxisEvent_AxisValue3"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(b0l__K2Node_InputAxisEvent_AxisValue3__pf, AHeroCharacter_BP_C__pf2132744816), 0x0010000000202000);
				UProperty* NewProp_bpv__GameMode__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GameMode"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__GameMode__pf, AHeroCharacter_BP_C__pf2132744816), 0x0010000000010005, Z_Construct_UClass_ATwinStickGameMode_BP_C__pf2132744816_NoRegister());
				UProperty* NewProp_bpv__Weapon__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Weapon"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Weapon__pf, AHeroCharacter_BP_C__pf2132744816), 0x0010000000010005, Z_Construct_UClass_AWeapon_BP_C__pf2132744816_NoRegister());
				UProperty* NewProp_bpv__DynaxMat__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Dyna Mat"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__DynaxMat__pfT, AHeroCharacter_BP_C__pf2132744816), 0x0010000000010005, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister());
				UProperty* NewProp_bpv__SpringArm__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SpringArm"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__SpringArm__pf, AHeroCharacter_BP_C__pf2132744816), 0x001000040008000c, Z_Construct_UClass_USpringArmComponent_NoRegister());
				UProperty* NewProp_bpv__HeroCamera__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HeroCamera"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__HeroCamera__pf, AHeroCharacter_BP_C__pf2132744816), 0x001000040008000c, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_bpv__GunTemp__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GunTemp"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__GunTemp__pf, AHeroCharacter_BP_C__pf2132744816), 0x001000040008000c, Z_Construct_UClass_UArrowComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AHeroCharacter_BP_C__pf2132744816_bpf__EffectxHealth__pfT(), TEXT("Effect Health")); // 2073736895
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AHeroCharacter_BP_C__pf2132744816_bpf__ExecuteUbergraph_HeroCharacter_BP__pf_2(), TEXT("ExecuteUbergraph_HeroCharacter_BP_2")); // 273452661
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AHeroCharacter_BP_C__pf2132744816_bpf__InpAxisEvt_LookRight_K2Node_InputAxisEvent_6__pf(), TEXT("InpAxisEvt_LookRight_K2Node_InputAxisEvent_6")); // 3098387212
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AHeroCharacter_BP_C__pf2132744816_bpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_3__pf(), TEXT("InpAxisEvt_LookUp_K2Node_InputAxisEvent_3")); // 2719738605
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AHeroCharacter_BP_C__pf2132744816_bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1__pf(), TEXT("InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1")); // 2268452284
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AHeroCharacter_BP_C__pf2132744816_bpf__InpAxisEvt_MoveUp_K2Node_InputAxisEvent_0__pf(), TEXT("InpAxisEvt_MoveUp_K2Node_InputAxisEvent_0")); // 1414467606
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AHeroCharacter_BP_C__pf2132744816_bpf__ReceiveBeginPlay__pf(), TEXT("ReceiveBeginPlay")); // 1649127070
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AHeroCharacter_BP_C__pf2132744816_bpf__UserConstructionScript__pf(), TEXT("UserConstructionScript")); // 3725713109
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<AHeroCharacter_BP_C__pf2132744816> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->Interfaces.Add(FImplementedInterface(Z_Construct_UClass_UiDamageable_BP_C_NoRegister(), VTABLE_OFFSET(AHeroCharacter_BP_C__pf2132744816, IiDamageable_BP_C), false ));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("HeroCharacter_BP__pf2132744816.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter_BP__pf2132744816.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("OverrideNativeName"), TEXT("HeroCharacter_BP_C"));
				MetaData->SetValue(OuterClass, TEXT("ReplaceConverted"), TEXT("/Game/Blueprints/HeroCharacter_BP.HeroCharacter_BP_C"));
				MetaData->SetValue(NewProp_b0l__K2Node_InputAxisEvent_AxisValue__pf, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_InputAxisEvent_AxisValue__pf, TEXT("OverrideNativeName"), TEXT("K2Node_InputAxisEvent_AxisValue"));
				MetaData->SetValue(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf, TEXT("OverrideNativeName"), TEXT("K2Node_DynamicCast_bSuccess"));
				MetaData->SetValue(NewProp_b0l__K2Node_DynamicCast_AsTwin_Stick_Game_Mode_BP__pf, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_DynamicCast_AsTwin_Stick_Game_Mode_BP__pf, TEXT("OverrideNativeName"), TEXT("K2Node_DynamicCast_AsTwin_Stick_Game_Mode_BP"));
				MetaData->SetValue(NewProp_b0l__K2Node_Event_Delta_Health__pf, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_Event_Delta_Health__pf, TEXT("OverrideNativeName"), TEXT("K2Node_Event_Delta_Health"));
				MetaData->SetValue(NewProp_b0l__K2Node_InputAxisEvent_AxisValue2__pf, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_InputAxisEvent_AxisValue2__pf, TEXT("OverrideNativeName"), TEXT("K2Node_InputAxisEvent_AxisValue2"));
				MetaData->SetValue(NewProp_b0l__K2Node_InputAxisEvent_AxisValue4__pf, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_InputAxisEvent_AxisValue4__pf, TEXT("OverrideNativeName"), TEXT("K2Node_InputAxisEvent_AxisValue4"));
				MetaData->SetValue(NewProp_b0l__K2Node_InputAxisEvent_AxisValue3__pf, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_InputAxisEvent_AxisValue3__pf, TEXT("OverrideNativeName"), TEXT("K2Node_InputAxisEvent_AxisValue3"));
				MetaData->SetValue(NewProp_bpv__GameMode__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__GameMode__pf, TEXT("DisplayName"), TEXT("Game Mode"));
				MetaData->SetValue(NewProp_bpv__GameMode__pf, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_bpv__GameMode__pf, TEXT("OverrideNativeName"), TEXT("GameMode"));
				MetaData->SetValue(NewProp_bpv__Weapon__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__Weapon__pf, TEXT("DisplayName"), TEXT("Weapon"));
				MetaData->SetValue(NewProp_bpv__Weapon__pf, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_bpv__Weapon__pf, TEXT("OverrideNativeName"), TEXT("Weapon"));
				MetaData->SetValue(NewProp_bpv__DynaxMat__pfT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__DynaxMat__pfT, TEXT("DisplayName"), TEXT("Dyna Mat"));
				MetaData->SetValue(NewProp_bpv__DynaxMat__pfT, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_bpv__DynaxMat__pfT, TEXT("OverrideNativeName"), TEXT("Dyna Mat"));
				MetaData->SetValue(NewProp_bpv__SpringArm__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__SpringArm__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__SpringArm__pf, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_bpv__SpringArm__pf, TEXT("OverrideNativeName"), TEXT("SpringArm"));
				MetaData->SetValue(NewProp_bpv__HeroCamera__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__HeroCamera__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__HeroCamera__pf, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_bpv__HeroCamera__pf, TEXT("OverrideNativeName"), TEXT("HeroCamera"));
				MetaData->SetValue(NewProp_bpv__GunTemp__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__GunTemp__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__GunTemp__pf, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_bpv__GunTemp__pf, TEXT("OverrideNativeName"), TEXT("GunTemp"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AHeroCharacter_BP_C__pf2132744816, TEXT("HeroCharacter_BP_C"), 4112200886);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHeroCharacter_BP_C__pf2132744816(Z_Construct_UClass_AHeroCharacter_BP_C__pf2132744816, &AHeroCharacter_BP_C__pf2132744816::StaticClass, TEXT("/Game/Blueprints/HeroCharacter_BP"), TEXT("HeroCharacter_BP_C"), true, TEXT("/Game/Blueprints/HeroCharacter_BP"), TEXT("/Game/Blueprints/HeroCharacter_BP.HeroCharacter_BP_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHeroCharacter_BP_C__pf2132744816);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
