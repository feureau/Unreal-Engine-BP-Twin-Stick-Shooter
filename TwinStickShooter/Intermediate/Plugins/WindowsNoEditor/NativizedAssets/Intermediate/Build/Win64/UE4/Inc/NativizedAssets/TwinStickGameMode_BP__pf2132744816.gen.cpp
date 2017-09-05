// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/TwinStickGameMode_BP__pf2132744816.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwinStickGameMode_BP__pf2132744816() {}
// Cross Module References
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ATwinStickGameMode_BP_C__pf2132744816_bpf__IncrementScore__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ATwinStickGameMode_BP_C__pf2132744816();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ATwinStickGameMode_BP_C__pf2132744816_bpf__ReceiveBeginPlay__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ATwinStickGameMode_BP_C__pf2132744816_bpf__RespawnPlayer__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ATwinStickGameMode_BP_C__pf2132744816_bpf__UserConstructionScript__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ATwinStickGameMode_BP_C__pf2132744816_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AEnemyCharacter_BP_C__pf2132744816_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AEnemySpawner_BP_C__pf2132744816_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	static FName NAME_ATwinStickGameMode_BP_C__pf2132744816_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void ATwinStickGameMode_BP_C__pf2132744816::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATwinStickGameMode_BP_C__pf2132744816_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_ATwinStickGameMode_BP_C__pf2132744816_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void ATwinStickGameMode_BP_C__pf2132744816::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATwinStickGameMode_BP_C__pf2132744816_bpf__UserConstructionScript__pf),NULL);
	}
	void ATwinStickGameMode_BP_C__pf2132744816::StaticRegisterNativesATwinStickGameMode_BP_C__pf2132744816()
	{
		UClass* Class = ATwinStickGameMode_BP_C__pf2132744816::StaticClass();
		static const TNameNativePtrPair<TCHAR> TCharFuncs[] = {
			{ TEXT("IncrementScore"), (Native)&ATwinStickGameMode_BP_C__pf2132744816::execbpf__IncrementScore__pf },
			{ TEXT("ReceiveBeginPlay"), (Native)&ATwinStickGameMode_BP_C__pf2132744816::execbpf__ReceiveBeginPlay__pf },
			{ TEXT("RespawnPlayer"), (Native)&ATwinStickGameMode_BP_C__pf2132744816::execbpf__RespawnPlayer__pf },
			{ TEXT("UserConstructionScript"), (Native)&ATwinStickGameMode_BP_C__pf2132744816::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, TCharFuncs, ARRAY_COUNT(TCharFuncs));
	}
	UFunction* Z_Construct_UFunction_ATwinStickGameMode_BP_C__pf2132744816_bpf__IncrementScore__pf()
	{
		struct TwinStickGameMode_BP_C__pf2132744816_eventbpf__IncrementScore__pf_Parms
		{
			int32 bpp__DeltaScore__pf;
		};
		UObject* Outer = Z_Construct_UClass_ATwinStickGameMode_BP_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("IncrementScore") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IncrementScore"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535, sizeof(TwinStickGameMode_BP_C__pf2132744816_eventbpf__IncrementScore__pf_Parms));
			UProperty* NewProp_bpp__DeltaScore__pf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__DeltaScore__pf"), RF_Public|RF_Transient) UIntProperty(CPP_PROPERTY_BASE(bpp__DeltaScore__pf, TwinStickGameMode_BP_C__pf2132744816_eventbpf__IncrementScore__pf_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TwinStickGameMode_BP__pf2132744816.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("IncrementScore"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATwinStickGameMode_BP_C__pf2132744816_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_ATwinStickGameMode_BP_C__pf2132744816();
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
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TwinStickGameMode_BP__pf2132744816.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("ReceiveBeginPlay"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Event when play begins for this actor."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATwinStickGameMode_BP_C__pf2132744816_bpf__RespawnPlayer__pf()
	{
		UObject* Outer = Z_Construct_UClass_ATwinStickGameMode_BP_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("RespawnPlayer") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("RespawnPlayer"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TwinStickGameMode_BP__pf2132744816.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("RespawnPlayer"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATwinStickGameMode_BP_C__pf2132744816_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_ATwinStickGameMode_BP_C__pf2132744816();
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
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TwinStickGameMode_BP__pf2132744816.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("UserConstructionScript"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation."));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATwinStickGameMode_BP_C__pf2132744816_NoRegister()
	{
		return ATwinStickGameMode_BP_C__pf2132744816::StaticClass();
	}
	UClass* Z_Construct_UClass_ATwinStickGameMode_BP_C__pf2132744816()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/TwinStickGameMode_BP"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("TwinStickGameMode_BP_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			Z_Construct_UClass_AGameModeBase();
			OuterClass = ATwinStickGameMode_BP_C__pf2132744816::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20800288u;

				OuterClass->LinkChild(Z_Construct_UFunction_ATwinStickGameMode_BP_C__pf2132744816_bpf__IncrementScore__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_ATwinStickGameMode_BP_C__pf2132744816_bpf__ReceiveBeginPlay__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_ATwinStickGameMode_BP_C__pf2132744816_bpf__RespawnPlayer__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_ATwinStickGameMode_BP_C__pf2132744816_bpf__UserConstructionScript__pf());

				UProperty* NewProp_b0l__K2Node_CustomEvent_DeltaScore__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_CustomEvent_DeltaScore"), RF_Public|RF_Transient) UIntProperty(CPP_PROPERTY_BASE(b0l__K2Node_CustomEvent_DeltaScore__pf, ATwinStickGameMode_BP_C__pf2132744816), 0x0010000000202000);
				UProperty* NewProp_b0l__Temp_int_Loop_Counter_Variable__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Temp_int_Loop_Counter_Variable"), RF_Public|RF_Transient) UIntProperty(CPP_PROPERTY_BASE(b0l__Temp_int_Loop_Counter_Variable__pf, ATwinStickGameMode_BP_C__pf2132744816), 0x0010000000202000);
				UProperty* NewProp_b0l__CallFunc_Array_Get_Item2__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_Array_Get_Item2"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(b0l__CallFunc_Array_Get_Item2__pf, ATwinStickGameMode_BP_C__pf2132744816), 0x0010000000202000, Z_Construct_UClass_AEnemyCharacter_BP_C__pf2132744816_NoRegister());
				UProperty* NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors2__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_GetAllActorsOfClass_OutActors2"), RF_Public|RF_Transient) UArrayProperty(CPP_PROPERTY_BASE(b0l__CallFunc_GetAllActorsOfClass_OutActors2__pf, ATwinStickGameMode_BP_C__pf2132744816), 0x0010000000202000);
				UProperty* NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors2__pf_Inner = new(EC_InternalUseOnlyConstructor, NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors2__pf, TEXT("b0l__CallFunc_GetAllActorsOfClass_OutActors2__pf"), RF_Public|RF_Transient) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_AEnemyCharacter_BP_C__pf2132744816_NoRegister());
				UProperty* NewProp_b0l__CallFunc_Array_Get_Item__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_Array_Get_Item"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(b0l__CallFunc_Array_Get_Item__pf, ATwinStickGameMode_BP_C__pf2132744816), 0x0010000000202000, Z_Construct_UClass_AEnemySpawner_BP_C__pf2132744816_NoRegister());
				UProperty* NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_GetAllActorsOfClass_OutActors"), RF_Public|RF_Transient) UArrayProperty(CPP_PROPERTY_BASE(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, ATwinStickGameMode_BP_C__pf2132744816), 0x0010000000202000);
				UProperty* NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner = new(EC_InternalUseOnlyConstructor, NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, TEXT("b0l__CallFunc_GetAllActorsOfClass_OutActors__pf"), RF_Public|RF_Transient) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_AEnemySpawner_BP_C__pf2132744816_NoRegister());
				UProperty* NewProp_b0l__Temp_int_Array_Index_Variable__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Temp_int_Array_Index_Variable"), RF_Public|RF_Transient) UIntProperty(CPP_PROPERTY_BASE(b0l__Temp_int_Array_Index_Variable__pf, ATwinStickGameMode_BP_C__pf2132744816), 0x0010000000202000);
				UProperty* NewProp_bpv__Score__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Score"), RF_Public|RF_Transient) UIntProperty(CPP_PROPERTY_BASE(bpv__Score__pf, ATwinStickGameMode_BP_C__pf2132744816), 0x0010000000010005);
				UProperty* NewProp_bpv__PlayerSpawnTransformLocation__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PlayerSpawnTransformLocation"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(bpv__PlayerSpawnTransformLocation__pf, ATwinStickGameMode_BP_C__pf2132744816), 0x0010000000010005, Z_Construct_UScriptStruct_FTransform());
				UProperty* NewProp_bpv__Enemiesxperxsecond__pfTT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Enemies per second"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__Enemiesxperxsecond__pfTT, ATwinStickGameMode_BP_C__pf2132744816), 0x0010000000010005);
				UProperty* NewProp_bpv__DefaultSceneRoot__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DefaultSceneRoot"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__DefaultSceneRoot__pf, ATwinStickGameMode_BP_C__pf2132744816), 0x001000040008000c, Z_Construct_UClass_USceneComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATwinStickGameMode_BP_C__pf2132744816_bpf__IncrementScore__pf(), TEXT("IncrementScore")); // 1170620427
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATwinStickGameMode_BP_C__pf2132744816_bpf__ReceiveBeginPlay__pf(), TEXT("ReceiveBeginPlay")); // 3594671374
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATwinStickGameMode_BP_C__pf2132744816_bpf__RespawnPlayer__pf(), TEXT("RespawnPlayer")); // 1193725163
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATwinStickGameMode_BP_C__pf2132744816_bpf__UserConstructionScript__pf(), TEXT("UserConstructionScript")); // 1274313892
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<ATwinStickGameMode_BP_C__pf2132744816> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TwinStickGameMode_BP__pf2132744816.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/TwinStickGameMode_BP__pf2132744816.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("OverrideNativeName"), TEXT("TwinStickGameMode_BP_C"));
				MetaData->SetValue(OuterClass, TEXT("ReplaceConverted"), TEXT("/Game/Blueprints/TwinStickGameMode_BP.TwinStickGameMode_BP_C"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
				MetaData->SetValue(NewProp_b0l__K2Node_CustomEvent_DeltaScore__pf, TEXT("ModuleRelativePath"), TEXT("Public/TwinStickGameMode_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_CustomEvent_DeltaScore__pf, TEXT("OverrideNativeName"), TEXT("K2Node_CustomEvent_DeltaScore"));
				MetaData->SetValue(NewProp_b0l__Temp_int_Loop_Counter_Variable__pf, TEXT("ModuleRelativePath"), TEXT("Public/TwinStickGameMode_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_b0l__Temp_int_Loop_Counter_Variable__pf, TEXT("OverrideNativeName"), TEXT("Temp_int_Loop_Counter_Variable"));
				MetaData->SetValue(NewProp_b0l__CallFunc_Array_Get_Item2__pf, TEXT("ModuleRelativePath"), TEXT("Public/TwinStickGameMode_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_Array_Get_Item2__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_Array_Get_Item2"));
				MetaData->SetValue(NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors2__pf, TEXT("ModuleRelativePath"), TEXT("Public/TwinStickGameMode_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors2__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_GetAllActorsOfClass_OutActors2"));
				MetaData->SetValue(NewProp_b0l__CallFunc_Array_Get_Item__pf, TEXT("ModuleRelativePath"), TEXT("Public/TwinStickGameMode_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_Array_Get_Item__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_Array_Get_Item"));
				MetaData->SetValue(NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, TEXT("ModuleRelativePath"), TEXT("Public/TwinStickGameMode_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_GetAllActorsOfClass_OutActors"));
				MetaData->SetValue(NewProp_b0l__Temp_int_Array_Index_Variable__pf, TEXT("ModuleRelativePath"), TEXT("Public/TwinStickGameMode_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_b0l__Temp_int_Array_Index_Variable__pf, TEXT("OverrideNativeName"), TEXT("Temp_int_Array_Index_Variable"));
				MetaData->SetValue(NewProp_bpv__Score__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__Score__pf, TEXT("DisplayName"), TEXT("Score"));
				MetaData->SetValue(NewProp_bpv__Score__pf, TEXT("ModuleRelativePath"), TEXT("Public/TwinStickGameMode_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_bpv__Score__pf, TEXT("OverrideNativeName"), TEXT("Score"));
				MetaData->SetValue(NewProp_bpv__PlayerSpawnTransformLocation__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__PlayerSpawnTransformLocation__pf, TEXT("DisplayName"), TEXT("Player Spawn Transform Location"));
				MetaData->SetValue(NewProp_bpv__PlayerSpawnTransformLocation__pf, TEXT("ModuleRelativePath"), TEXT("Public/TwinStickGameMode_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_bpv__PlayerSpawnTransformLocation__pf, TEXT("OverrideNativeName"), TEXT("PlayerSpawnTransformLocation"));
				MetaData->SetValue(NewProp_bpv__Enemiesxperxsecond__pfTT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__Enemiesxperxsecond__pfTT, TEXT("DisplayName"), TEXT("Enemies Per Second"));
				MetaData->SetValue(NewProp_bpv__Enemiesxperxsecond__pfTT, TEXT("ModuleRelativePath"), TEXT("Public/TwinStickGameMode_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_bpv__Enemiesxperxsecond__pfTT, TEXT("OverrideNativeName"), TEXT("Enemies per second"));
				MetaData->SetValue(NewProp_bpv__DefaultSceneRoot__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__DefaultSceneRoot__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__DefaultSceneRoot__pf, TEXT("ModuleRelativePath"), TEXT("Public/TwinStickGameMode_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_bpv__DefaultSceneRoot__pf, TEXT("OverrideNativeName"), TEXT("DefaultSceneRoot"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ATwinStickGameMode_BP_C__pf2132744816, TEXT("TwinStickGameMode_BP_C"), 1384498866);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATwinStickGameMode_BP_C__pf2132744816(Z_Construct_UClass_ATwinStickGameMode_BP_C__pf2132744816, &ATwinStickGameMode_BP_C__pf2132744816::StaticClass, TEXT("/Game/Blueprints/TwinStickGameMode_BP"), TEXT("TwinStickGameMode_BP_C"), true, TEXT("/Game/Blueprints/TwinStickGameMode_BP"), TEXT("/Game/Blueprints/TwinStickGameMode_BP.TwinStickGameMode_BP_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATwinStickGameMode_BP_C__pf2132744816);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
