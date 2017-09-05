// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/Weapon_BP__pf2132744816.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon_BP__pf2132744816() {}
// Cross Module References
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AWeapon_BP_C__pf2132744816_bpf__Fire__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AWeapon_BP_C__pf2132744816();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AWeapon_BP_C__pf2132744816_bpf__PullTrigger__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AWeapon_BP_C__pf2132744816_bpf__ReleaseTrigger__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AWeapon_BP_C__pf2132744816_bpf__UserConstructionScript__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AWeapon_BP_C__pf2132744816_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
// End Cross Module References
	static FName NAME_AWeapon_BP_C__pf2132744816_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void AWeapon_BP_C__pf2132744816::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWeapon_BP_C__pf2132744816_bpf__UserConstructionScript__pf),NULL);
	}
	void AWeapon_BP_C__pf2132744816::StaticRegisterNativesAWeapon_BP_C__pf2132744816()
	{
		UClass* Class = AWeapon_BP_C__pf2132744816::StaticClass();
		static const TNameNativePtrPair<TCHAR> TCharFuncs[] = {
			{ TEXT("Fire"), (Native)&AWeapon_BP_C__pf2132744816::execbpf__Fire__pf },
			{ TEXT("PullTrigger"), (Native)&AWeapon_BP_C__pf2132744816::execbpf__PullTrigger__pf },
			{ TEXT("ReleaseTrigger"), (Native)&AWeapon_BP_C__pf2132744816::execbpf__ReleaseTrigger__pf },
			{ TEXT("UserConstructionScript"), (Native)&AWeapon_BP_C__pf2132744816::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, TCharFuncs, ARRAY_COUNT(TCharFuncs));
	}
	UFunction* Z_Construct_UFunction_AWeapon_BP_C__pf2132744816_bpf__Fire__pf()
	{
		UObject* Outer = Z_Construct_UClass_AWeapon_BP_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Fire") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Fire"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Weapon_BP__pf2132744816.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("Fire"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWeapon_BP_C__pf2132744816_bpf__PullTrigger__pf()
	{
		UObject* Outer = Z_Construct_UClass_AWeapon_BP_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("PullTrigger") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PullTrigger"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Weapon_BP__pf2132744816.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("PullTrigger"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWeapon_BP_C__pf2132744816_bpf__ReleaseTrigger__pf()
	{
		UObject* Outer = Z_Construct_UClass_AWeapon_BP_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReleaseTrigger") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ReleaseTrigger"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Weapon_BP__pf2132744816.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("ReleaseTrigger"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWeapon_BP_C__pf2132744816_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_AWeapon_BP_C__pf2132744816();
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
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Weapon_BP__pf2132744816.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("UserConstructionScript"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation."));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWeapon_BP_C__pf2132744816_NoRegister()
	{
		return AWeapon_BP_C__pf2132744816::StaticClass();
	}
	UClass* Z_Construct_UClass_AWeapon_BP_C__pf2132744816()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/Weapon_BP"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Weapon_BP_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			Z_Construct_UClass_AActor();
			OuterClass = AWeapon_BP_C__pf2132744816::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20800080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AWeapon_BP_C__pf2132744816_bpf__Fire__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_AWeapon_BP_C__pf2132744816_bpf__PullTrigger__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_AWeapon_BP_C__pf2132744816_bpf__ReleaseTrigger__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_AWeapon_BP_C__pf2132744816_bpf__UserConstructionScript__pf());

				CPP_BOOL_PROPERTY_BITMASK_STRUCT(b0l__Temp_bool_IsClosed_Variable__pf, AWeapon_BP_C__pf2132744816);
				UProperty* NewProp_b0l__Temp_bool_IsClosed_Variable__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Temp_bool_IsClosed_Variable"), RF_Public|RF_Transient) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(b0l__Temp_bool_IsClosed_Variable__pf, AWeapon_BP_C__pf2132744816), 0x0010000000202000, CPP_BOOL_PROPERTY_BITMASK(b0l__Temp_bool_IsClosed_Variable__pf, AWeapon_BP_C__pf2132744816), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(b0l__Temp_bool_Has_Been_Initd_Variable__pf, AWeapon_BP_C__pf2132744816);
				UProperty* NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Temp_bool_Has_Been_Initd_Variable"), RF_Public|RF_Transient) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(b0l__Temp_bool_Has_Been_Initd_Variable__pf, AWeapon_BP_C__pf2132744816), 0x0010000000202000, CPP_BOOL_PROPERTY_BITMASK(b0l__Temp_bool_Has_Been_Initd_Variable__pf, AWeapon_BP_C__pf2132744816), sizeof(bool), true);
				UProperty* NewProp_bpv__RoundPerSecond__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RoundPerSecond"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__RoundPerSecond__pf, AWeapon_BP_C__pf2132744816), 0x0010000000010005);
				UProperty* NewProp_bpv__DefaultSceneRoot__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DefaultSceneRoot"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__DefaultSceneRoot__pf, AWeapon_BP_C__pf2132744816), 0x001000040008000c, Z_Construct_UClass_USceneComponent_NoRegister());
				UProperty* NewProp_bpv__GunMesh__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GunMesh"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__GunMesh__pf, AWeapon_BP_C__pf2132744816), 0x001000040008000c, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
				UProperty* NewProp_bpv__ProjectileSpawnPoint__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ProjectileSpawnPoint"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__ProjectileSpawnPoint__pf, AWeapon_BP_C__pf2132744816), 0x001000040008000c, Z_Construct_UClass_UArrowComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AWeapon_BP_C__pf2132744816_bpf__Fire__pf(), TEXT("Fire")); // 1489094139
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AWeapon_BP_C__pf2132744816_bpf__PullTrigger__pf(), TEXT("PullTrigger")); // 2968610709
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AWeapon_BP_C__pf2132744816_bpf__ReleaseTrigger__pf(), TEXT("ReleaseTrigger")); // 1329177331
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AWeapon_BP_C__pf2132744816_bpf__UserConstructionScript__pf(), TEXT("UserConstructionScript")); // 748139036
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<AWeapon_BP_C__pf2132744816> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Weapon_BP__pf2132744816.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Weapon_BP__pf2132744816.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("OverrideNativeName"), TEXT("Weapon_BP_C"));
				MetaData->SetValue(OuterClass, TEXT("ReplaceConverted"), TEXT("/Game/Blueprints/Weapon_BP.Weapon_BP_C"));
				MetaData->SetValue(NewProp_b0l__Temp_bool_IsClosed_Variable__pf, TEXT("ModuleRelativePath"), TEXT("Public/Weapon_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_b0l__Temp_bool_IsClosed_Variable__pf, TEXT("OverrideNativeName"), TEXT("Temp_bool_IsClosed_Variable"));
				MetaData->SetValue(NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf, TEXT("ModuleRelativePath"), TEXT("Public/Weapon_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf, TEXT("OverrideNativeName"), TEXT("Temp_bool_Has_Been_Initd_Variable"));
				MetaData->SetValue(NewProp_bpv__RoundPerSecond__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__RoundPerSecond__pf, TEXT("DisplayName"), TEXT("Round Per Second"));
				MetaData->SetValue(NewProp_bpv__RoundPerSecond__pf, TEXT("ModuleRelativePath"), TEXT("Public/Weapon_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_bpv__RoundPerSecond__pf, TEXT("OverrideNativeName"), TEXT("RoundPerSecond"));
				MetaData->SetValue(NewProp_bpv__DefaultSceneRoot__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__DefaultSceneRoot__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__DefaultSceneRoot__pf, TEXT("ModuleRelativePath"), TEXT("Public/Weapon_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_bpv__DefaultSceneRoot__pf, TEXT("OverrideNativeName"), TEXT("DefaultSceneRoot"));
				MetaData->SetValue(NewProp_bpv__GunMesh__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__GunMesh__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__GunMesh__pf, TEXT("ModuleRelativePath"), TEXT("Public/Weapon_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_bpv__GunMesh__pf, TEXT("OverrideNativeName"), TEXT("GunMesh"));
				MetaData->SetValue(NewProp_bpv__ProjectileSpawnPoint__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__ProjectileSpawnPoint__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__ProjectileSpawnPoint__pf, TEXT("ModuleRelativePath"), TEXT("Public/Weapon_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_bpv__ProjectileSpawnPoint__pf, TEXT("OverrideNativeName"), TEXT("ProjectileSpawnPoint"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AWeapon_BP_C__pf2132744816, TEXT("Weapon_BP_C"), 1507776815);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeapon_BP_C__pf2132744816(Z_Construct_UClass_AWeapon_BP_C__pf2132744816, &AWeapon_BP_C__pf2132744816::StaticClass, TEXT("/Game/Blueprints/Weapon_BP"), TEXT("Weapon_BP_C"), true, TEXT("/Game/Blueprints/Weapon_BP"), TEXT("/Game/Blueprints/Weapon_BP.Weapon_BP_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon_BP_C__pf2132744816);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
