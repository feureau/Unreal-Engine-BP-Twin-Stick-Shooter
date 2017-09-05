// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/Projectile_BP__pf2132744816.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectile_BP__pf2132744816() {}
// Cross Module References
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AProjectile_BP_C__pf2132744816_bpf__ReceiveActorBeginOverlap__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AProjectile_BP_C__pf2132744816();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AProjectile_BP_C__pf2132744816_bpf__UserConstructionScript__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AProjectile_BP_C__pf2132744816_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UiDamageable_BP_C_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
// End Cross Module References
	static FName NAME_AProjectile_BP_C__pf2132744816_bpf__ReceiveActorBeginOverlap__pf = FName(TEXT("ReceiveActorBeginOverlap"));
	void AProjectile_BP_C__pf2132744816::eventbpf__ReceiveActorBeginOverlap__pf(AActor* bpp__OtherActor__pf)
	{
		Projectile_BP_C__pf2132744816_eventbpf__ReceiveActorBeginOverlap__pf_Parms Parms;
		Parms.bpp__OtherActor__pf=bpp__OtherActor__pf;
		ProcessEvent(FindFunctionChecked(NAME_AProjectile_BP_C__pf2132744816_bpf__ReceiveActorBeginOverlap__pf),&Parms);
	}
	static FName NAME_AProjectile_BP_C__pf2132744816_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void AProjectile_BP_C__pf2132744816::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AProjectile_BP_C__pf2132744816_bpf__UserConstructionScript__pf),NULL);
	}
	void AProjectile_BP_C__pf2132744816::StaticRegisterNativesAProjectile_BP_C__pf2132744816()
	{
		UClass* Class = AProjectile_BP_C__pf2132744816::StaticClass();
		static const TNameNativePtrPair<TCHAR> TCharFuncs[] = {
			{ TEXT("ReceiveActorBeginOverlap"), (Native)&AProjectile_BP_C__pf2132744816::execbpf__ReceiveActorBeginOverlap__pf },
			{ TEXT("UserConstructionScript"), (Native)&AProjectile_BP_C__pf2132744816::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, TCharFuncs, ARRAY_COUNT(TCharFuncs));
	}
	UFunction* Z_Construct_UFunction_AProjectile_BP_C__pf2132744816_bpf__ReceiveActorBeginOverlap__pf()
	{
		UObject* Outer = Z_Construct_UClass_AProjectile_BP_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveActorBeginOverlap") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ReceiveActorBeginOverlap"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020C01, 65535, sizeof(Projectile_BP_C__pf2132744816_eventbpf__ReceiveActorBeginOverlap__pf_Parms));
			UProperty* NewProp_bpp__OtherActor__pf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__OtherActor__pf"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpp__OtherActor__pf, Projectile_BP_C__pf2132744816_eventbpf__ReceiveActorBeginOverlap__pf_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Collision"));
			MetaData->SetValue(ReturnFunction, TEXT("CppFromBpEvent"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("ActorBeginOverlap"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Projectile_BP__pf2132744816.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("ReceiveActorBeginOverlap"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Event when this actor overlaps another actor, for example a player walking into a trigger.For events when objects have a blocking collision, for example a player hitting a wall, see 'Hit' events.@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AProjectile_BP_C__pf2132744816_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_AProjectile_BP_C__pf2132744816();
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
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Projectile_BP__pf2132744816.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("UserConstructionScript"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation."));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AProjectile_BP_C__pf2132744816_NoRegister()
	{
		return AProjectile_BP_C__pf2132744816::StaticClass();
	}
	UClass* Z_Construct_UClass_AProjectile_BP_C__pf2132744816()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/Projectile_BP"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Projectile_BP_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			Z_Construct_UClass_AActor();
			OuterClass = AProjectile_BP_C__pf2132744816::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20800080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AProjectile_BP_C__pf2132744816_bpf__ReceiveActorBeginOverlap__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_AProjectile_BP_C__pf2132744816_bpf__UserConstructionScript__pf());

				CPP_BOOL_PROPERTY_BITMASK_STRUCT(b0l__K2Node_DynamicCast_bSuccess__pf, AProjectile_BP_C__pf2132744816);
				UProperty* NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_DynamicCast_bSuccess"), RF_Public|RF_Transient) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(b0l__K2Node_DynamicCast_bSuccess__pf, AProjectile_BP_C__pf2132744816), 0x0010000000202000, CPP_BOOL_PROPERTY_BITMASK(b0l__K2Node_DynamicCast_bSuccess__pf, AProjectile_BP_C__pf2132744816), sizeof(bool), true);
				UProperty* NewProp_b0l__K2Node_DynamicCast_AsI_Damageable_BP__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_DynamicCast_AsI_Damageable_BP"), RF_Public|RF_Transient) UInterfaceProperty(CPP_PROPERTY_BASE(b0l__K2Node_DynamicCast_AsI_Damageable_BP__pf, AProjectile_BP_C__pf2132744816), 0x0014000000202000, Z_Construct_UClass_UiDamageable_BP_C_NoRegister());
				UProperty* NewProp_b0l__K2Node_Event_OtherActor__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_Event_OtherActor"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(b0l__K2Node_Event_OtherActor__pf, AProjectile_BP_C__pf2132744816), 0x0010000000202000, Z_Construct_UClass_AActor_NoRegister());
				UProperty* NewProp_bpv__Damage__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Damage"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__Damage__pf, AProjectile_BP_C__pf2132744816), 0x0010000000010005);
				UProperty* NewProp_bpv__DefaultSceneRoot__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DefaultSceneRoot"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__DefaultSceneRoot__pf, AProjectile_BP_C__pf2132744816), 0x001000040008000c, Z_Construct_UClass_USceneComponent_NoRegister());
				UProperty* NewProp_bpv__ProjectileCollisionComponent__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ProjectileCollisionComponent"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__ProjectileCollisionComponent__pf, AProjectile_BP_C__pf2132744816), 0x001000040008000c, Z_Construct_UClass_USphereComponent_NoRegister());
				UProperty* NewProp_bpv__LaserMesh__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LaserMesh"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__LaserMesh__pf, AProjectile_BP_C__pf2132744816), 0x001000040008000c, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_bpv__ProjectileMovement__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ProjectileMovement"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__ProjectileMovement__pf, AProjectile_BP_C__pf2132744816), 0x001000040008000c, Z_Construct_UClass_UProjectileMovementComponent_NoRegister());
				UProperty* NewProp_bpv__PointLight__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PointLight"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__PointLight__pf, AProjectile_BP_C__pf2132744816), 0x001000040008000c, Z_Construct_UClass_UPointLightComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AProjectile_BP_C__pf2132744816_bpf__ReceiveActorBeginOverlap__pf(), TEXT("ReceiveActorBeginOverlap")); // 1349503754
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AProjectile_BP_C__pf2132744816_bpf__UserConstructionScript__pf(), TEXT("UserConstructionScript")); // 2894021616
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<AProjectile_BP_C__pf2132744816> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Projectile_BP__pf2132744816.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Projectile_BP__pf2132744816.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("OverrideNativeName"), TEXT("Projectile_BP_C"));
				MetaData->SetValue(OuterClass, TEXT("ReplaceConverted"), TEXT("/Game/Blueprints/Projectile_BP.Projectile_BP_C"));
				MetaData->SetValue(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf, TEXT("ModuleRelativePath"), TEXT("Public/Projectile_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf, TEXT("OverrideNativeName"), TEXT("K2Node_DynamicCast_bSuccess"));
				MetaData->SetValue(NewProp_b0l__K2Node_DynamicCast_AsI_Damageable_BP__pf, TEXT("ModuleRelativePath"), TEXT("Public/Projectile_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_DynamicCast_AsI_Damageable_BP__pf, TEXT("OverrideNativeName"), TEXT("K2Node_DynamicCast_AsI_Damageable_BP"));
				MetaData->SetValue(NewProp_b0l__K2Node_Event_OtherActor__pf, TEXT("ModuleRelativePath"), TEXT("Public/Projectile_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_Event_OtherActor__pf, TEXT("OverrideNativeName"), TEXT("K2Node_Event_OtherActor"));
				MetaData->SetValue(NewProp_bpv__Damage__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__Damage__pf, TEXT("DisplayName"), TEXT("Damage"));
				MetaData->SetValue(NewProp_bpv__Damage__pf, TEXT("ModuleRelativePath"), TEXT("Public/Projectile_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_bpv__Damage__pf, TEXT("OverrideNativeName"), TEXT("Damage"));
				MetaData->SetValue(NewProp_bpv__DefaultSceneRoot__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__DefaultSceneRoot__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__DefaultSceneRoot__pf, TEXT("ModuleRelativePath"), TEXT("Public/Projectile_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_bpv__DefaultSceneRoot__pf, TEXT("OverrideNativeName"), TEXT("DefaultSceneRoot"));
				MetaData->SetValue(NewProp_bpv__ProjectileCollisionComponent__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__ProjectileCollisionComponent__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__ProjectileCollisionComponent__pf, TEXT("ModuleRelativePath"), TEXT("Public/Projectile_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_bpv__ProjectileCollisionComponent__pf, TEXT("OverrideNativeName"), TEXT("ProjectileCollisionComponent"));
				MetaData->SetValue(NewProp_bpv__LaserMesh__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__LaserMesh__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__LaserMesh__pf, TEXT("ModuleRelativePath"), TEXT("Public/Projectile_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_bpv__LaserMesh__pf, TEXT("OverrideNativeName"), TEXT("LaserMesh"));
				MetaData->SetValue(NewProp_bpv__ProjectileMovement__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__ProjectileMovement__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__ProjectileMovement__pf, TEXT("ModuleRelativePath"), TEXT("Public/Projectile_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_bpv__ProjectileMovement__pf, TEXT("OverrideNativeName"), TEXT("ProjectileMovement"));
				MetaData->SetValue(NewProp_bpv__PointLight__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__PointLight__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__PointLight__pf, TEXT("ModuleRelativePath"), TEXT("Public/Projectile_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_bpv__PointLight__pf, TEXT("OverrideNativeName"), TEXT("PointLight"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AProjectile_BP_C__pf2132744816, TEXT("Projectile_BP_C"), 3477368972);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectile_BP_C__pf2132744816(Z_Construct_UClass_AProjectile_BP_C__pf2132744816, &AProjectile_BP_C__pf2132744816::StaticClass, TEXT("/Game/Blueprints/Projectile_BP"), TEXT("Projectile_BP_C"), true, TEXT("/Game/Blueprints/Projectile_BP"), TEXT("/Game/Blueprints/Projectile_BP.Projectile_BP_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectile_BP_C__pf2132744816);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
