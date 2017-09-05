// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/iDamageable_BP__pf2132744816.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeiDamageable_BP__pf2132744816() {}
// Cross Module References
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UiDamageable_BP_C_bpf__EffectxHealth__pfT();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UiDamageable_BP_C();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UiDamageable_BP_C_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
// End Cross Module References
	void IiDamageable_BP_C::bpf__EffectxHealth__pfT(float bpp__DeltaxHealth__pfT)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_bpf__EffectxHealth__pfT instead.");
	}
	void UiDamageable_BP_C::StaticRegisterNativesUiDamageable_BP_C()
	{
	}
	UFunction* Z_Construct_UFunction_UiDamageable_BP_C_bpf__EffectxHealth__pfT()
	{
		UObject* Outer = Z_Construct_UClass_UiDamageable_BP_C();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Effect Health") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Effect Health"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x0C020800, 65535, sizeof(iDamageable_BP_C_eventbpf__EffectxHealth__pfT_Parms));
			UProperty* NewProp_bpp__DeltaxHealth__pfT = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__DeltaxHealth__pfT"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpp__DeltaxHealth__pfT, iDamageable_BP_C_eventbpf__EffectxHealth__pfT_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/iDamageable_BP__pf2132744816.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("Effect Health"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UiDamageable_BP_C_NoRegister()
	{
		return UiDamageable_BP_C::StaticClass();
	}
	UClass* Z_Construct_UClass_UiDamageable_BP_C()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/iDamageable_BP"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("iDamageable_BP_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			Z_Construct_UClass_UInterface();
			OuterClass = UiDamageable_BP_C::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20004081u;

				OuterClass->LinkChild(Z_Construct_UFunction_UiDamageable_BP_C_bpf__EffectxHealth__pfT());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UiDamageable_BP_C_bpf__EffectxHealth__pfT(), TEXT("Effect Health")); // 91519543
				static TCppClassTypeInfo<TCppClassTypeTraits<IiDamageable_BP_C> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/iDamageable_BP__pf2132744816.h"));
				MetaData->SetValue(OuterClass, TEXT("OverrideNativeName"), TEXT("iDamageable_BP_C"));
				MetaData->SetValue(OuterClass, TEXT("ReplaceConverted"), TEXT("/Game/Blueprints/iDamageable_BP.iDamageable_BP_C"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UiDamageable_BP_C, TEXT("iDamageable_BP_C"), 922752910);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UiDamageable_BP_C(Z_Construct_UClass_UiDamageable_BP_C, &UiDamageable_BP_C::StaticClass, TEXT("/Game/Blueprints/iDamageable_BP"), TEXT("iDamageable_BP_C"), true, TEXT("/Game/Blueprints/iDamageable_BP"), TEXT("/Game/Blueprints/iDamageable_BP.iDamageable_BP_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UiDamageable_BP_C);
	static FName NAME_UiDamageable_BP_C_bpf__EffectxHealth__pfT = FName(TEXT("Effect Health"));
	void IiDamageable_BP_C::Execute_bpf__EffectxHealth__pfT(UObject* O, float bpp__DeltaxHealth__pfT)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UiDamageable_BP_C::StaticClass()));
		iDamageable_BP_C_eventbpf__EffectxHealth__pfT_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UiDamageable_BP_C_bpf__EffectxHealth__pfT);
		if (Func)
		{
			Parms.bpp__DeltaxHealth__pfT=bpp__DeltaxHealth__pfT;
			O->ProcessEvent(Func, &Parms);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
