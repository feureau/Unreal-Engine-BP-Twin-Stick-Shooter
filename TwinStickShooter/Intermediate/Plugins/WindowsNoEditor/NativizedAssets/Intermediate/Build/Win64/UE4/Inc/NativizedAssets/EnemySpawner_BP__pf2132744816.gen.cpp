// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/EnemySpawner_BP__pf2132744816.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemySpawner_BP__pf2132744816() {}
// Cross Module References
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AEnemySpawner_BP_C__pf2132744816_bpf__ReceiveTick__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AEnemySpawner_BP_C__pf2132744816();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AEnemySpawner_BP_C__pf2132744816_bpf__SpawnxEnemy__pfT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AEnemySpawner_BP_C__pf2132744816_bpf__UserConstructionScript__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AEnemySpawner_BP_C__pf2132744816_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AEnemyCharacter_BP_C__pf2132744816_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	static FName NAME_AEnemySpawner_BP_C__pf2132744816_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void AEnemySpawner_BP_C__pf2132744816::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		EnemySpawner_BP_C__pf2132744816_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_AEnemySpawner_BP_C__pf2132744816_bpf__ReceiveTick__pf),&Parms);
	}
	static FName NAME_AEnemySpawner_BP_C__pf2132744816_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void AEnemySpawner_BP_C__pf2132744816::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AEnemySpawner_BP_C__pf2132744816_bpf__UserConstructionScript__pf),NULL);
	}
	void AEnemySpawner_BP_C__pf2132744816::StaticRegisterNativesAEnemySpawner_BP_C__pf2132744816()
	{
		UClass* Class = AEnemySpawner_BP_C__pf2132744816::StaticClass();
		static const TNameNativePtrPair<TCHAR> TCharFuncs[] = {
			{ TEXT("ReceiveTick"), (Native)&AEnemySpawner_BP_C__pf2132744816::execbpf__ReceiveTick__pf },
			{ TEXT("Spawn Enemy"), (Native)&AEnemySpawner_BP_C__pf2132744816::execbpf__SpawnxEnemy__pfT },
			{ TEXT("UserConstructionScript"), (Native)&AEnemySpawner_BP_C__pf2132744816::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, TCharFuncs, ARRAY_COUNT(TCharFuncs));
	}
	UFunction* Z_Construct_UFunction_AEnemySpawner_BP_C__pf2132744816_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_AEnemySpawner_BP_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveTick") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ReceiveTick"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020C01, 65535, sizeof(EnemySpawner_BP_C__pf2132744816_eventbpf__ReceiveTick__pf_Parms));
			UProperty* NewProp_bpp__DeltaSeconds__pf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__DeltaSeconds__pf"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpp__DeltaSeconds__pf, EnemySpawner_BP_C__pf2132744816_eventbpf__ReceiveTick__pf_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("CppFromBpEvent"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Tick"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/EnemySpawner_BP__pf2132744816.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("ReceiveTick"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Event called every frame"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AEnemySpawner_BP_C__pf2132744816_bpf__SpawnxEnemy__pfT()
	{
		UObject* Outer = Z_Construct_UClass_AEnemySpawner_BP_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Spawn Enemy") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Spawn Enemy"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/EnemySpawner_BP__pf2132744816.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("Spawn Enemy"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AEnemySpawner_BP_C__pf2132744816_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_AEnemySpawner_BP_C__pf2132744816();
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
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/EnemySpawner_BP__pf2132744816.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("UserConstructionScript"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation."));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEnemySpawner_BP_C__pf2132744816_NoRegister()
	{
		return AEnemySpawner_BP_C__pf2132744816::StaticClass();
	}
	UClass* Z_Construct_UClass_AEnemySpawner_BP_C__pf2132744816()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/EnemySpawner_BP"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("EnemySpawner_BP_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			Z_Construct_UClass_AActor();
			OuterClass = AEnemySpawner_BP_C__pf2132744816::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20800080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AEnemySpawner_BP_C__pf2132744816_bpf__ReceiveTick__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_AEnemySpawner_BP_C__pf2132744816_bpf__SpawnxEnemy__pfT());
				OuterClass->LinkChild(Z_Construct_UFunction_AEnemySpawner_BP_C__pf2132744816_bpf__UserConstructionScript__pf());

				UProperty* NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_GetAllActorsOfClass_OutActors"), RF_Public|RF_Transient) UArrayProperty(CPP_PROPERTY_BASE(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, AEnemySpawner_BP_C__pf2132744816), 0x0010000000202000);
				UProperty* NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner = new(EC_InternalUseOnlyConstructor, NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, TEXT("b0l__CallFunc_GetAllActorsOfClass_OutActors__pf"), RF_Public|RF_Transient) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_AEnemyCharacter_BP_C__pf2132744816_NoRegister());
				UProperty* NewProp_b0l__K2Node_Event_DeltaSeconds__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_Event_DeltaSeconds"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(b0l__K2Node_Event_DeltaSeconds__pf, AEnemySpawner_BP_C__pf2132744816), 0x0010000000202000);
				UProperty* NewProp_bpv__MaxxEnemies__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Max Enemies"), RF_Public|RF_Transient) UIntProperty(CPP_PROPERTY_BASE(bpv__MaxxEnemies__pfT, AEnemySpawner_BP_C__pf2132744816), 0x0010000000010005);
				UProperty* NewProp_bpv__Spawner__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Spawner"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Spawner__pf, AEnemySpawner_BP_C__pf2132744816), 0x0010000000010005, Z_Construct_UClass_AEnemySpawner_BP_C__pf2132744816_NoRegister());
				UProperty* NewProp_bpv__NewVar_0__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("NewVar_0"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__NewVar_0__pf, AEnemySpawner_BP_C__pf2132744816), 0x0010000000010005, Z_Construct_UClass_AEnemySpawner_BP_C__pf2132744816_NoRegister());
				UProperty* NewProp_bpv__DefaultSceneRoot__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DefaultSceneRoot"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__DefaultSceneRoot__pf, AEnemySpawner_BP_C__pf2132744816), 0x001000040008000c, Z_Construct_UClass_USceneComponent_NoRegister());
				UProperty* NewProp_bpv__SpawnerxBox__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Spawner Box"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__SpawnerxBox__pfT, AEnemySpawner_BP_C__pf2132744816), 0x001000040008000c, Z_Construct_UClass_UBoxComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AEnemySpawner_BP_C__pf2132744816_bpf__ReceiveTick__pf(), TEXT("ReceiveTick")); // 3344589956
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AEnemySpawner_BP_C__pf2132744816_bpf__SpawnxEnemy__pfT(), TEXT("Spawn Enemy")); // 1242058066
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AEnemySpawner_BP_C__pf2132744816_bpf__UserConstructionScript__pf(), TEXT("UserConstructionScript")); // 3025733393
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<AEnemySpawner_BP_C__pf2132744816> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("EnemySpawner_BP__pf2132744816.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/EnemySpawner_BP__pf2132744816.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("OverrideNativeName"), TEXT("EnemySpawner_BP_C"));
				MetaData->SetValue(OuterClass, TEXT("ReplaceConverted"), TEXT("/Game/Blueprints/EnemySpawner_BP.EnemySpawner_BP_C"));
				MetaData->SetValue(NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, TEXT("ModuleRelativePath"), TEXT("Public/EnemySpawner_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_GetAllActorsOfClass_OutActors"));
				MetaData->SetValue(NewProp_b0l__K2Node_Event_DeltaSeconds__pf, TEXT("ModuleRelativePath"), TEXT("Public/EnemySpawner_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_Event_DeltaSeconds__pf, TEXT("OverrideNativeName"), TEXT("K2Node_Event_DeltaSeconds"));
				MetaData->SetValue(NewProp_bpv__MaxxEnemies__pfT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__MaxxEnemies__pfT, TEXT("DisplayName"), TEXT("Max Enemies"));
				MetaData->SetValue(NewProp_bpv__MaxxEnemies__pfT, TEXT("ModuleRelativePath"), TEXT("Public/EnemySpawner_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_bpv__MaxxEnemies__pfT, TEXT("OverrideNativeName"), TEXT("Max Enemies"));
				MetaData->SetValue(NewProp_bpv__MaxxEnemies__pfT, TEXT("tooltip"), TEXT("Max number of enemies allowed in world."));
				MetaData->SetValue(NewProp_bpv__Spawner__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__Spawner__pf, TEXT("DisplayName"), TEXT("Spawner"));
				MetaData->SetValue(NewProp_bpv__Spawner__pf, TEXT("ModuleRelativePath"), TEXT("Public/EnemySpawner_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_bpv__Spawner__pf, TEXT("OverrideNativeName"), TEXT("Spawner"));
				MetaData->SetValue(NewProp_bpv__NewVar_0__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__NewVar_0__pf, TEXT("DisplayName"), TEXT("New Var 0"));
				MetaData->SetValue(NewProp_bpv__NewVar_0__pf, TEXT("ModuleRelativePath"), TEXT("Public/EnemySpawner_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_bpv__NewVar_0__pf, TEXT("OverrideNativeName"), TEXT("NewVar_0"));
				MetaData->SetValue(NewProp_bpv__DefaultSceneRoot__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__DefaultSceneRoot__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__DefaultSceneRoot__pf, TEXT("ModuleRelativePath"), TEXT("Public/EnemySpawner_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_bpv__DefaultSceneRoot__pf, TEXT("OverrideNativeName"), TEXT("DefaultSceneRoot"));
				MetaData->SetValue(NewProp_bpv__SpawnerxBox__pfT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__SpawnerxBox__pfT, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__SpawnerxBox__pfT, TEXT("ModuleRelativePath"), TEXT("Public/EnemySpawner_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_bpv__SpawnerxBox__pfT, TEXT("OverrideNativeName"), TEXT("Spawner Box"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AEnemySpawner_BP_C__pf2132744816, TEXT("EnemySpawner_BP_C"), 2413692808);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemySpawner_BP_C__pf2132744816(Z_Construct_UClass_AEnemySpawner_BP_C__pf2132744816, &AEnemySpawner_BP_C__pf2132744816::StaticClass, TEXT("/Game/Blueprints/EnemySpawner_BP"), TEXT("EnemySpawner_BP_C"), true, TEXT("/Game/Blueprints/EnemySpawner_BP"), TEXT("/Game/Blueprints/EnemySpawner_BP.EnemySpawner_BP_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemySpawner_BP_C__pf2132744816);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
