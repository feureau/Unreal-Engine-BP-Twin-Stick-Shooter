// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/CharacterAnim_BP__pf1804850088.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterAnim_BP__pf1804850088() {}
// Cross Module References
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UCharacterAnim_BP_C__pf1804850088_bpf__BlueprintUpdateAnimation__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UCharacterAnim_BP_C__pf1804850088();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UCharacterAnim_BP_C__pf1804850088_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_CharacterAnim_BP_AnimGraphNode_BlendListByInt_C632EB4943D644601A50EBAD0DA508B9__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UCharacterAnim_BP_C__pf1804850088_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_CharacterAnim_BP_AnimGraphNode_BlendSpacePlayer_8B656F3B4204114B9FA8E698BC9DB38F__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UCharacterAnim_BP_C__pf1804850088_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_CharacterAnim_BP_AnimGraphNode_TransitionResult_ECDBEBD64B432FE2AD6EDAB46CCBE346__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UCharacterAnim_BP_C__pf1804850088_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	TWINSTICKSHOOTER_API UClass* Z_Construct_UClass_ABaseCharacter_CPP_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_StateMachine();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Root();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SequencePlayer();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendListByInt();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TransitionResult();
// End Cross Module References
	static FName NAME_UCharacterAnim_BP_C__pf1804850088_bpf__BlueprintUpdateAnimation__pf = FName(TEXT("BlueprintUpdateAnimation"));
	void UCharacterAnim_BP_C__pf1804850088::eventbpf__BlueprintUpdateAnimation__pf(float bpp__DeltaTimeX__pf)
	{
		CharacterAnim_BP_C__pf1804850088_eventbpf__BlueprintUpdateAnimation__pf_Parms Parms;
		Parms.bpp__DeltaTimeX__pf=bpp__DeltaTimeX__pf;
		ProcessEvent(FindFunctionChecked(NAME_UCharacterAnim_BP_C__pf1804850088_bpf__BlueprintUpdateAnimation__pf),&Parms);
	}
	void UCharacterAnim_BP_C__pf1804850088::StaticRegisterNativesUCharacterAnim_BP_C__pf1804850088()
	{
		UClass* Class = UCharacterAnim_BP_C__pf1804850088::StaticClass();
		static const TNameNativePtrPair<TCHAR> TCharFuncs[] = {
			{ TEXT("BlueprintUpdateAnimation"), (Native)&UCharacterAnim_BP_C__pf1804850088::execbpf__BlueprintUpdateAnimation__pf },
			{ TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_CharacterAnim_BP_AnimGraphNode_BlendListByInt_C632EB4943D644601A50EBAD0DA508B9"), (Native)&UCharacterAnim_BP_C__pf1804850088::execbpf__EvaluateGraphExposedInputs_ExecuteUbergraph_CharacterAnim_BP_AnimGraphNode_BlendListByInt_C632EB4943D644601A50EBAD0DA508B9__pf },
			{ TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_CharacterAnim_BP_AnimGraphNode_BlendSpacePlayer_8B656F3B4204114B9FA8E698BC9DB38F"), (Native)&UCharacterAnim_BP_C__pf1804850088::execbpf__EvaluateGraphExposedInputs_ExecuteUbergraph_CharacterAnim_BP_AnimGraphNode_BlendSpacePlayer_8B656F3B4204114B9FA8E698BC9DB38F__pf },
			{ TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_CharacterAnim_BP_AnimGraphNode_TransitionResult_ECDBEBD64B432FE2AD6EDAB46CCBE346"), (Native)&UCharacterAnim_BP_C__pf1804850088::execbpf__EvaluateGraphExposedInputs_ExecuteUbergraph_CharacterAnim_BP_AnimGraphNode_TransitionResult_ECDBEBD64B432FE2AD6EDAB46CCBE346__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, TCharFuncs, ARRAY_COUNT(TCharFuncs));
	}
	UFunction* Z_Construct_UFunction_UCharacterAnim_BP_C__pf1804850088_bpf__BlueprintUpdateAnimation__pf()
	{
		UObject* Outer = Z_Construct_UClass_UCharacterAnim_BP_C__pf1804850088();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("BlueprintUpdateAnimation") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BlueprintUpdateAnimation"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020C01, 65535, sizeof(CharacterAnim_BP_C__pf1804850088_eventbpf__BlueprintUpdateAnimation__pf_Parms));
			UProperty* NewProp_bpp__DeltaTimeX__pf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__DeltaTimeX__pf"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpp__DeltaTimeX__pf, CharacterAnim_BP_C__pf1804850088_eventbpf__BlueprintUpdateAnimation__pf_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("CppFromBpEvent"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/CharacterAnim_BP__pf1804850088.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("BlueprintUpdateAnimation"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Executed when the Animation is updated"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCharacterAnim_BP_C__pf1804850088_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_CharacterAnim_BP_AnimGraphNode_BlendListByInt_C632EB4943D644601A50EBAD0DA508B9__pf()
	{
		UObject* Outer = Z_Construct_UClass_UCharacterAnim_BP_C__pf1804850088();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_CharacterAnim_BP_AnimGraphNode_BlendListByInt_C632EB4943D644601A50EBAD0DA508B9") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_CharacterAnim_BP_AnimGraphNode_BlendListByInt_C632EB4943D644601A50EBAD0DA508B9"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/CharacterAnim_BP__pf1804850088.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_CharacterAnim_BP_AnimGraphNode_BlendListByInt_C632EB4943D644601A50EBAD0DA508B9"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCharacterAnim_BP_C__pf1804850088_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_CharacterAnim_BP_AnimGraphNode_BlendSpacePlayer_8B656F3B4204114B9FA8E698BC9DB38F__pf()
	{
		UObject* Outer = Z_Construct_UClass_UCharacterAnim_BP_C__pf1804850088();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_CharacterAnim_BP_AnimGraphNode_BlendSpacePlayer_8B656F3B4204114B9FA8E698BC9DB38F") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_CharacterAnim_BP_AnimGraphNode_BlendSpacePlayer_8B656F3B4204114B9FA8E698BC9DB38F"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/CharacterAnim_BP__pf1804850088.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_CharacterAnim_BP_AnimGraphNode_BlendSpacePlayer_8B656F3B4204114B9FA8E698BC9DB38F"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCharacterAnim_BP_C__pf1804850088_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_CharacterAnim_BP_AnimGraphNode_TransitionResult_ECDBEBD64B432FE2AD6EDAB46CCBE346__pf()
	{
		UObject* Outer = Z_Construct_UClass_UCharacterAnim_BP_C__pf1804850088();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_CharacterAnim_BP_AnimGraphNode_TransitionResult_ECDBEBD64B432FE2AD6EDAB46CCBE346") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_CharacterAnim_BP_AnimGraphNode_TransitionResult_ECDBEBD64B432FE2AD6EDAB46CCBE346"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/CharacterAnim_BP__pf1804850088.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_CharacterAnim_BP_AnimGraphNode_TransitionResult_ECDBEBD64B432FE2AD6EDAB46CCBE346"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCharacterAnim_BP_C__pf1804850088_NoRegister()
	{
		return UCharacterAnim_BP_C__pf1804850088::StaticClass();
	}
	UClass* Z_Construct_UClass_UCharacterAnim_BP_C__pf1804850088()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Animation/CharacterAnim_BP"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("CharacterAnim_BP_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			Z_Construct_UClass_UAnimInstance();
			OuterClass = UCharacterAnim_BP_C__pf1804850088::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20800088u;

				OuterClass->LinkChild(Z_Construct_UFunction_UCharacterAnim_BP_C__pf1804850088_bpf__BlueprintUpdateAnimation__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_UCharacterAnim_BP_C__pf1804850088_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_CharacterAnim_BP_AnimGraphNode_BlendListByInt_C632EB4943D644601A50EBAD0DA508B9__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_UCharacterAnim_BP_C__pf1804850088_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_CharacterAnim_BP_AnimGraphNode_BlendSpacePlayer_8B656F3B4204114B9FA8E698BC9DB38F__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_UCharacterAnim_BP_C__pf1804850088_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_CharacterAnim_BP_AnimGraphNode_TransitionResult_ECDBEBD64B432FE2AD6EDAB46CCBE346__pf());

				UProperty* NewProp_b0l__CallFunc_BreakRotator_Yaw__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_BreakRotator_Yaw"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(b0l__CallFunc_BreakRotator_Yaw__pf, UCharacterAnim_BP_C__pf1804850088), 0x0010000000202000);
				UProperty* NewProp_b0l__CallFunc_BreakRotator_Pitch__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_BreakRotator_Pitch"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(b0l__CallFunc_BreakRotator_Pitch__pf, UCharacterAnim_BP_C__pf1804850088), 0x0010000000202000);
				UProperty* NewProp_b0l__CallFunc_BreakRotator_Roll__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_BreakRotator_Roll"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(b0l__CallFunc_BreakRotator_Roll__pf, UCharacterAnim_BP_C__pf1804850088), 0x0010000000202000);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(b0l__K2Node_DynamicCast_bSuccess__pf, UCharacterAnim_BP_C__pf1804850088);
				UProperty* NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_DynamicCast_bSuccess"), RF_Public|RF_Transient) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(b0l__K2Node_DynamicCast_bSuccess__pf, UCharacterAnim_BP_C__pf1804850088), 0x0010000000202000, CPP_BOOL_PROPERTY_BITMASK(b0l__K2Node_DynamicCast_bSuccess__pf, UCharacterAnim_BP_C__pf1804850088), sizeof(bool), true);
				UProperty* NewProp_b0l__K2Node_DynamicCast_AsBase_Character_CPP__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_DynamicCast_AsBase_Character_CPP"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(b0l__K2Node_DynamicCast_AsBase_Character_CPP__pf, UCharacterAnim_BP_C__pf1804850088), 0x0010000000202000, Z_Construct_UClass_ABaseCharacter_CPP_NoRegister());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(b0l__Temp_bool_Has_Been_Initd_Variable__pf, UCharacterAnim_BP_C__pf1804850088);
				UProperty* NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Temp_bool_Has_Been_Initd_Variable"), RF_Public|RF_Transient) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(b0l__Temp_bool_Has_Been_Initd_Variable__pf, UCharacterAnim_BP_C__pf1804850088), 0x0010000000202000, CPP_BOOL_PROPERTY_BITMASK(b0l__Temp_bool_Has_Been_Initd_Variable__pf, UCharacterAnim_BP_C__pf1804850088), sizeof(bool), true);
				UProperty* NewProp_b0l__K2Node_Event_DeltaTimeX__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_Event_DeltaTimeX"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(b0l__K2Node_Event_DeltaTimeX__pf, UCharacterAnim_BP_C__pf1804850088), 0x0010000000202000);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(b0l__Temp_bool_IsClosed_Variable__pf, UCharacterAnim_BP_C__pf1804850088);
				UProperty* NewProp_b0l__Temp_bool_IsClosed_Variable__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Temp_bool_IsClosed_Variable"), RF_Public|RF_Transient) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(b0l__Temp_bool_IsClosed_Variable__pf, UCharacterAnim_BP_C__pf1804850088), 0x0010000000202000, CPP_BOOL_PROPERTY_BITMASK(b0l__Temp_bool_IsClosed_Variable__pf, UCharacterAnim_BP_C__pf1804850088), sizeof(bool), true);
				UProperty* NewProp_bpv__Deathxanimationxselector__pfTT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Death animation selector"), RF_Public|RF_Transient) UIntProperty(CPP_PROPERTY_BASE(bpv__Deathxanimationxselector__pfTT, UCharacterAnim_BP_C__pf1804850088), 0x0010000000010005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bpv__IsxDead__pfT, UCharacterAnim_BP_C__pf1804850088);
				UProperty* NewProp_bpv__IsxDead__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Is Dead"), RF_Public|RF_Transient) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bpv__IsxDead__pfT, UCharacterAnim_BP_C__pf1804850088), 0x0010000000010005, CPP_BOOL_PROPERTY_BITMASK(bpv__IsxDead__pfT, UCharacterAnim_BP_C__pf1804850088), sizeof(bool), true);
				UProperty* NewProp_bpv__Direction__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Direction"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__Direction__pf, UCharacterAnim_BP_C__pf1804850088), 0x0010000000010005);
				UProperty* NewProp_bpv__Speed__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Speed"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__Speed__pf, UCharacterAnim_BP_C__pf1804850088), 0x0010000000010005);
				UProperty* NewProp_bpv__AnimGraphNode_StateMachine_6A15B18945429A9ABCF39D9A19820951__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AnimGraphNode_StateMachine_6A15B18945429A9ABCF39D9A19820951"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(bpv__AnimGraphNode_StateMachine_6A15B18945429A9ABCF39D9A19820951__pf, UCharacterAnim_BP_C__pf1804850088), 0x0010000000000000, Z_Construct_UScriptStruct_FAnimNode_StateMachine());
				UProperty* NewProp_bpv__AnimGraphNode_StateResult_E1E8E8C04C28A2F0952ACC935CF2042E__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AnimGraphNode_StateResult_E1E8E8C04C28A2F0952ACC935CF2042E"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(bpv__AnimGraphNode_StateResult_E1E8E8C04C28A2F0952ACC935CF2042E__pf, UCharacterAnim_BP_C__pf1804850088), 0x0010000000000000, Z_Construct_UScriptStruct_FAnimNode_Root());
				UProperty* NewProp_bpv__AnimGraphNode_BlendSpacePlayer_8B656F3B4204114B9FA8E698BC9DB38F__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AnimGraphNode_BlendSpacePlayer_8B656F3B4204114B9FA8E698BC9DB38F"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(bpv__AnimGraphNode_BlendSpacePlayer_8B656F3B4204114B9FA8E698BC9DB38F__pf, UCharacterAnim_BP_C__pf1804850088), 0x0010000000000000, Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer());
				UProperty* NewProp_bpv__AnimGraphNode_StateResult_A385F11C46942C275C78ADA80EA7E746__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AnimGraphNode_StateResult_A385F11C46942C275C78ADA80EA7E746"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(bpv__AnimGraphNode_StateResult_A385F11C46942C275C78ADA80EA7E746__pf, UCharacterAnim_BP_C__pf1804850088), 0x0010000000000000, Z_Construct_UScriptStruct_FAnimNode_Root());
				UProperty* NewProp_bpv__AnimGraphNode_SequencePlayer_A38CA2A3408F57E155793DB0C3CCB45B__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AnimGraphNode_SequencePlayer_A38CA2A3408F57E155793DB0C3CCB45B"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(bpv__AnimGraphNode_SequencePlayer_A38CA2A3408F57E155793DB0C3CCB45B__pf, UCharacterAnim_BP_C__pf1804850088), 0x0010000000000000, Z_Construct_UScriptStruct_FAnimNode_SequencePlayer());
				UProperty* NewProp_bpv__AnimGraphNode_SequencePlayer_E709CDC940FBF8F7A0EED28FC9327729__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AnimGraphNode_SequencePlayer_E709CDC940FBF8F7A0EED28FC9327729"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(bpv__AnimGraphNode_SequencePlayer_E709CDC940FBF8F7A0EED28FC9327729__pf, UCharacterAnim_BP_C__pf1804850088), 0x0010000000000000, Z_Construct_UScriptStruct_FAnimNode_SequencePlayer());
				UProperty* NewProp_bpv__AnimGraphNode_SequencePlayer_B51D3B6941047FFD184293841EF4F5BE__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AnimGraphNode_SequencePlayer_B51D3B6941047FFD184293841EF4F5BE"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(bpv__AnimGraphNode_SequencePlayer_B51D3B6941047FFD184293841EF4F5BE__pf, UCharacterAnim_BP_C__pf1804850088), 0x0010000000000000, Z_Construct_UScriptStruct_FAnimNode_SequencePlayer());
				UProperty* NewProp_bpv__AnimGraphNode_BlendListByInt_C632EB4943D644601A50EBAD0DA508B9__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AnimGraphNode_BlendListByInt_C632EB4943D644601A50EBAD0DA508B9"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(bpv__AnimGraphNode_BlendListByInt_C632EB4943D644601A50EBAD0DA508B9__pf, UCharacterAnim_BP_C__pf1804850088), 0x0010000000000000, Z_Construct_UScriptStruct_FAnimNode_BlendListByInt());
				UProperty* NewProp_bpv__AnimGraphNode_TransitionResult_ECDBEBD64B432FE2AD6EDAB46CCBE346__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AnimGraphNode_TransitionResult_ECDBEBD64B432FE2AD6EDAB46CCBE346"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(bpv__AnimGraphNode_TransitionResult_ECDBEBD64B432FE2AD6EDAB46CCBE346__pf, UCharacterAnim_BP_C__pf1804850088), 0x0010000000000000, Z_Construct_UScriptStruct_FAnimNode_TransitionResult());
				UProperty* NewProp_bpv__AnimGraphNode_Root_BC6D52CF47617E9A56B583B9E6697649__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AnimGraphNode_Root_BC6D52CF47617E9A56B583B9E6697649"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(bpv__AnimGraphNode_Root_BC6D52CF47617E9A56B583B9E6697649__pf, UCharacterAnim_BP_C__pf1804850088), 0x0010000000000000, Z_Construct_UScriptStruct_FAnimNode_Root());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCharacterAnim_BP_C__pf1804850088_bpf__BlueprintUpdateAnimation__pf(), TEXT("BlueprintUpdateAnimation")); // 1453524646
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCharacterAnim_BP_C__pf1804850088_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_CharacterAnim_BP_AnimGraphNode_BlendListByInt_C632EB4943D644601A50EBAD0DA508B9__pf(), TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_CharacterAnim_BP_AnimGraphNode_BlendListByInt_C632EB4943D644601A50EBAD0DA508B9")); // 3164041036
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCharacterAnim_BP_C__pf1804850088_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_CharacterAnim_BP_AnimGraphNode_BlendSpacePlayer_8B656F3B4204114B9FA8E698BC9DB38F__pf(), TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_CharacterAnim_BP_AnimGraphNode_BlendSpacePlayer_8B656F3B4204114B9FA8E698BC9DB38F")); // 280998201
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCharacterAnim_BP_C__pf1804850088_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_CharacterAnim_BP_AnimGraphNode_TransitionResult_ECDBEBD64B432FE2AD6EDAB46CCBE346__pf(), TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_CharacterAnim_BP_AnimGraphNode_TransitionResult_ECDBEBD64B432FE2AD6EDAB46CCBE346")); // 3854078846
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UCharacterAnim_BP_C__pf1804850088> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("AnimInstance"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("CharacterAnim_BP__pf1804850088.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/CharacterAnim_BP__pf1804850088.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("OverrideNativeName"), TEXT("CharacterAnim_BP_C"));
				MetaData->SetValue(OuterClass, TEXT("ReplaceConverted"), TEXT("/Game/Animation/CharacterAnim_BP.CharacterAnim_BP_C"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakRotator_Yaw__pf, TEXT("ModuleRelativePath"), TEXT("Public/CharacterAnim_BP__pf1804850088.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakRotator_Yaw__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_BreakRotator_Yaw"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakRotator_Pitch__pf, TEXT("ModuleRelativePath"), TEXT("Public/CharacterAnim_BP__pf1804850088.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakRotator_Pitch__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_BreakRotator_Pitch"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakRotator_Roll__pf, TEXT("ModuleRelativePath"), TEXT("Public/CharacterAnim_BP__pf1804850088.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakRotator_Roll__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_BreakRotator_Roll"));
				MetaData->SetValue(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf, TEXT("ModuleRelativePath"), TEXT("Public/CharacterAnim_BP__pf1804850088.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf, TEXT("OverrideNativeName"), TEXT("K2Node_DynamicCast_bSuccess"));
				MetaData->SetValue(NewProp_b0l__K2Node_DynamicCast_AsBase_Character_CPP__pf, TEXT("ModuleRelativePath"), TEXT("Public/CharacterAnim_BP__pf1804850088.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_DynamicCast_AsBase_Character_CPP__pf, TEXT("OverrideNativeName"), TEXT("K2Node_DynamicCast_AsBase_Character_CPP"));
				MetaData->SetValue(NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf, TEXT("ModuleRelativePath"), TEXT("Public/CharacterAnim_BP__pf1804850088.h"));
				MetaData->SetValue(NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf, TEXT("OverrideNativeName"), TEXT("Temp_bool_Has_Been_Initd_Variable"));
				MetaData->SetValue(NewProp_b0l__K2Node_Event_DeltaTimeX__pf, TEXT("ModuleRelativePath"), TEXT("Public/CharacterAnim_BP__pf1804850088.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_Event_DeltaTimeX__pf, TEXT("OverrideNativeName"), TEXT("K2Node_Event_DeltaTimeX"));
				MetaData->SetValue(NewProp_b0l__Temp_bool_IsClosed_Variable__pf, TEXT("ModuleRelativePath"), TEXT("Public/CharacterAnim_BP__pf1804850088.h"));
				MetaData->SetValue(NewProp_b0l__Temp_bool_IsClosed_Variable__pf, TEXT("OverrideNativeName"), TEXT("Temp_bool_IsClosed_Variable"));
				MetaData->SetValue(NewProp_bpv__Deathxanimationxselector__pfTT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__Deathxanimationxselector__pfTT, TEXT("DisplayName"), TEXT("Death Animation Selector"));
				MetaData->SetValue(NewProp_bpv__Deathxanimationxselector__pfTT, TEXT("ModuleRelativePath"), TEXT("Public/CharacterAnim_BP__pf1804850088.h"));
				MetaData->SetValue(NewProp_bpv__Deathxanimationxselector__pfTT, TEXT("OverrideNativeName"), TEXT("Death animation selector"));
				MetaData->SetValue(NewProp_bpv__IsxDead__pfT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__IsxDead__pfT, TEXT("DisplayName"), TEXT("Is Dead"));
				MetaData->SetValue(NewProp_bpv__IsxDead__pfT, TEXT("ModuleRelativePath"), TEXT("Public/CharacterAnim_BP__pf1804850088.h"));
				MetaData->SetValue(NewProp_bpv__IsxDead__pfT, TEXT("OverrideNativeName"), TEXT("Is Dead"));
				MetaData->SetValue(NewProp_bpv__Direction__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__Direction__pf, TEXT("DisplayName"), TEXT("Direction"));
				MetaData->SetValue(NewProp_bpv__Direction__pf, TEXT("ModuleRelativePath"), TEXT("Public/CharacterAnim_BP__pf1804850088.h"));
				MetaData->SetValue(NewProp_bpv__Direction__pf, TEXT("OverrideNativeName"), TEXT("Direction"));
				MetaData->SetValue(NewProp_bpv__Speed__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__Speed__pf, TEXT("DisplayName"), TEXT("Speed"));
				MetaData->SetValue(NewProp_bpv__Speed__pf, TEXT("ModuleRelativePath"), TEXT("Public/CharacterAnim_BP__pf1804850088.h"));
				MetaData->SetValue(NewProp_bpv__Speed__pf, TEXT("OverrideNativeName"), TEXT("Speed"));
				MetaData->SetValue(NewProp_bpv__AnimGraphNode_StateMachine_6A15B18945429A9ABCF39D9A19820951__pf, TEXT("ModuleRelativePath"), TEXT("Public/CharacterAnim_BP__pf1804850088.h"));
				MetaData->SetValue(NewProp_bpv__AnimGraphNode_StateMachine_6A15B18945429A9ABCF39D9A19820951__pf, TEXT("OverrideNativeName"), TEXT("AnimGraphNode_StateMachine_6A15B18945429A9ABCF39D9A19820951"));
				MetaData->SetValue(NewProp_bpv__AnimGraphNode_StateResult_E1E8E8C04C28A2F0952ACC935CF2042E__pf, TEXT("ModuleRelativePath"), TEXT("Public/CharacterAnim_BP__pf1804850088.h"));
				MetaData->SetValue(NewProp_bpv__AnimGraphNode_StateResult_E1E8E8C04C28A2F0952ACC935CF2042E__pf, TEXT("OverrideNativeName"), TEXT("AnimGraphNode_StateResult_E1E8E8C04C28A2F0952ACC935CF2042E"));
				MetaData->SetValue(NewProp_bpv__AnimGraphNode_BlendSpacePlayer_8B656F3B4204114B9FA8E698BC9DB38F__pf, TEXT("ModuleRelativePath"), TEXT("Public/CharacterAnim_BP__pf1804850088.h"));
				MetaData->SetValue(NewProp_bpv__AnimGraphNode_BlendSpacePlayer_8B656F3B4204114B9FA8E698BC9DB38F__pf, TEXT("OverrideNativeName"), TEXT("AnimGraphNode_BlendSpacePlayer_8B656F3B4204114B9FA8E698BC9DB38F"));
				MetaData->SetValue(NewProp_bpv__AnimGraphNode_StateResult_A385F11C46942C275C78ADA80EA7E746__pf, TEXT("ModuleRelativePath"), TEXT("Public/CharacterAnim_BP__pf1804850088.h"));
				MetaData->SetValue(NewProp_bpv__AnimGraphNode_StateResult_A385F11C46942C275C78ADA80EA7E746__pf, TEXT("OverrideNativeName"), TEXT("AnimGraphNode_StateResult_A385F11C46942C275C78ADA80EA7E746"));
				MetaData->SetValue(NewProp_bpv__AnimGraphNode_SequencePlayer_A38CA2A3408F57E155793DB0C3CCB45B__pf, TEXT("ModuleRelativePath"), TEXT("Public/CharacterAnim_BP__pf1804850088.h"));
				MetaData->SetValue(NewProp_bpv__AnimGraphNode_SequencePlayer_A38CA2A3408F57E155793DB0C3CCB45B__pf, TEXT("OverrideNativeName"), TEXT("AnimGraphNode_SequencePlayer_A38CA2A3408F57E155793DB0C3CCB45B"));
				MetaData->SetValue(NewProp_bpv__AnimGraphNode_SequencePlayer_E709CDC940FBF8F7A0EED28FC9327729__pf, TEXT("ModuleRelativePath"), TEXT("Public/CharacterAnim_BP__pf1804850088.h"));
				MetaData->SetValue(NewProp_bpv__AnimGraphNode_SequencePlayer_E709CDC940FBF8F7A0EED28FC9327729__pf, TEXT("OverrideNativeName"), TEXT("AnimGraphNode_SequencePlayer_E709CDC940FBF8F7A0EED28FC9327729"));
				MetaData->SetValue(NewProp_bpv__AnimGraphNode_SequencePlayer_B51D3B6941047FFD184293841EF4F5BE__pf, TEXT("ModuleRelativePath"), TEXT("Public/CharacterAnim_BP__pf1804850088.h"));
				MetaData->SetValue(NewProp_bpv__AnimGraphNode_SequencePlayer_B51D3B6941047FFD184293841EF4F5BE__pf, TEXT("OverrideNativeName"), TEXT("AnimGraphNode_SequencePlayer_B51D3B6941047FFD184293841EF4F5BE"));
				MetaData->SetValue(NewProp_bpv__AnimGraphNode_BlendListByInt_C632EB4943D644601A50EBAD0DA508B9__pf, TEXT("ModuleRelativePath"), TEXT("Public/CharacterAnim_BP__pf1804850088.h"));
				MetaData->SetValue(NewProp_bpv__AnimGraphNode_BlendListByInt_C632EB4943D644601A50EBAD0DA508B9__pf, TEXT("OverrideNativeName"), TEXT("AnimGraphNode_BlendListByInt_C632EB4943D644601A50EBAD0DA508B9"));
				MetaData->SetValue(NewProp_bpv__AnimGraphNode_TransitionResult_ECDBEBD64B432FE2AD6EDAB46CCBE346__pf, TEXT("ModuleRelativePath"), TEXT("Public/CharacterAnim_BP__pf1804850088.h"));
				MetaData->SetValue(NewProp_bpv__AnimGraphNode_TransitionResult_ECDBEBD64B432FE2AD6EDAB46CCBE346__pf, TEXT("OverrideNativeName"), TEXT("AnimGraphNode_TransitionResult_ECDBEBD64B432FE2AD6EDAB46CCBE346"));
				MetaData->SetValue(NewProp_bpv__AnimGraphNode_Root_BC6D52CF47617E9A56B583B9E6697649__pf, TEXT("ModuleRelativePath"), TEXT("Public/CharacterAnim_BP__pf1804850088.h"));
				MetaData->SetValue(NewProp_bpv__AnimGraphNode_Root_BC6D52CF47617E9A56B583B9E6697649__pf, TEXT("OverrideNativeName"), TEXT("AnimGraphNode_Root_BC6D52CF47617E9A56B583B9E6697649"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UCharacterAnim_BP_C__pf1804850088, TEXT("CharacterAnim_BP_C"), 127311514);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterAnim_BP_C__pf1804850088(Z_Construct_UClass_UCharacterAnim_BP_C__pf1804850088, &UCharacterAnim_BP_C__pf1804850088::StaticClass, TEXT("/Game/Animation/CharacterAnim_BP"), TEXT("CharacterAnim_BP_C"), true, TEXT("/Game/Animation/CharacterAnim_BP"), TEXT("/Game/Animation/CharacterAnim_BP.CharacterAnim_BP_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterAnim_BP_C__pf1804850088);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
