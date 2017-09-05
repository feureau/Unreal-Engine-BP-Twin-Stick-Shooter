// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/TwinStickHUDWIdget_BP__pf2132744816.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwinStickHUDWIdget_BP__pf2132744816() {}
// Cross Module References
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UTwinStickHUDWIdget_BP_C__pf2132744816_bpf__GetHealthBar__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UTwinStickHUDWIdget_BP_C__pf2132744816();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UTwinStickHUDWIdget_BP_C__pf2132744816_bpf__GetScore__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UTwinStickHUDWIdget_BP_C__pf2132744816_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
// End Cross Module References
	void UTwinStickHUDWIdget_BP_C__pf2132744816::StaticRegisterNativesUTwinStickHUDWIdget_BP_C__pf2132744816()
	{
		UClass* Class = UTwinStickHUDWIdget_BP_C__pf2132744816::StaticClass();
		static const TNameNativePtrPair<TCHAR> TCharFuncs[] = {
			{ TEXT("GetHealthBar"), (Native)&UTwinStickHUDWIdget_BP_C__pf2132744816::execbpf__GetHealthBar__pf },
			{ TEXT("GetScore"), (Native)&UTwinStickHUDWIdget_BP_C__pf2132744816::execbpf__GetScore__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, TCharFuncs, ARRAY_COUNT(TCharFuncs));
	}
	UFunction* Z_Construct_UFunction_UTwinStickHUDWIdget_BP_C__pf2132744816_bpf__GetHealthBar__pf()
	{
		struct TwinStickHUDWIdget_BP_C__pf2132744816_eventbpf__GetHealthBar__pf_Parms
		{
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UTwinStickHUDWIdget_BP_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("GetHealthBar") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetHealthBar"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14020400, 65535, sizeof(TwinStickHUDWIdget_BP_C__pf2132744816_eventbpf__GetHealthBar__pf_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, TwinStickHUDWIdget_BP_C__pf2132744816_eventbpf__GetHealthBar__pf_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TwinStickHUDWIdget_BP__pf2132744816.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("GetHealthBar"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTwinStickHUDWIdget_BP_C__pf2132744816_bpf__GetScore__pf()
	{
		struct TwinStickHUDWIdget_BP_C__pf2132744816_eventbpf__GetScore__pf_Parms
		{
			FText ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UTwinStickHUDWIdget_BP_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("GetScore") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetScore"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14020400, 65535, sizeof(TwinStickHUDWIdget_BP_C__pf2132744816_eventbpf__GetScore__pf_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient) UTextProperty(CPP_PROPERTY_BASE(ReturnValue, TwinStickHUDWIdget_BP_C__pf2132744816_eventbpf__GetScore__pf_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TwinStickHUDWIdget_BP__pf2132744816.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("GetScore"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTwinStickHUDWIdget_BP_C__pf2132744816_NoRegister()
	{
		return UTwinStickHUDWIdget_BP_C__pf2132744816::StaticClass();
	}
	UClass* Z_Construct_UClass_UTwinStickHUDWIdget_BP_C__pf2132744816()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/TwinStickHUDWIdget_BP"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("TwinStickHUDWIdget_BP_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			Z_Construct_UClass_UUserWidget();
			OuterClass = UTwinStickHUDWIdget_BP_C__pf2132744816::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20A01080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UTwinStickHUDWIdget_BP_C__pf2132744816_bpf__GetHealthBar__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_UTwinStickHUDWIdget_BP_C__pf2132744816_bpf__GetScore__pf());

				UProperty* NewProp_bpv__TextBlock_371__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TextBlock_371"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__TextBlock_371__pf, UTwinStickHUDWIdget_BP_C__pf2132744816), 0x0010000000080008, Z_Construct_UClass_UTextBlock_NoRegister());
				UProperty* NewProp_bpv__ProgressBar_53__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ProgressBar_53"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__ProgressBar_53__pf, UTwinStickHUDWIdget_BP_C__pf2132744816), 0x001000000008000c, Z_Construct_UClass_UProgressBar_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTwinStickHUDWIdget_BP_C__pf2132744816_bpf__GetHealthBar__pf(), TEXT("GetHealthBar")); // 3547120838
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTwinStickHUDWIdget_BP_C__pf2132744816_bpf__GetScore__pf(), TEXT("GetScore")); // 372337772
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UTwinStickHUDWIdget_BP_C__pf2132744816> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TwinStickHUDWIdget_BP__pf2132744816.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/TwinStickHUDWIdget_BP__pf2132744816.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("OverrideNativeName"), TEXT("TwinStickHUDWIdget_BP_C"));
				MetaData->SetValue(OuterClass, TEXT("ReplaceConverted"), TEXT("/Game/Blueprints/TwinStickHUDWIdget_BP.TwinStickHUDWIdget_BP_C"));
				MetaData->SetValue(NewProp_bpv__TextBlock_371__pf, TEXT("DisplayName"), TEXT("TextBlock_371"));
				MetaData->SetValue(NewProp_bpv__TextBlock_371__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__TextBlock_371__pf, TEXT("ModuleRelativePath"), TEXT("Public/TwinStickHUDWIdget_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_bpv__TextBlock_371__pf, TEXT("OverrideNativeName"), TEXT("TextBlock_371"));
				MetaData->SetValue(NewProp_bpv__ProgressBar_53__pf, TEXT("Category"), TEXT("TwinStickHUDWIdget_BP"));
				MetaData->SetValue(NewProp_bpv__ProgressBar_53__pf, TEXT("DisplayName"), TEXT("ProgressBar_53"));
				MetaData->SetValue(NewProp_bpv__ProgressBar_53__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__ProgressBar_53__pf, TEXT("ModuleRelativePath"), TEXT("Public/TwinStickHUDWIdget_BP__pf2132744816.h"));
				MetaData->SetValue(NewProp_bpv__ProgressBar_53__pf, TEXT("OverrideNativeName"), TEXT("ProgressBar_53"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UTwinStickHUDWIdget_BP_C__pf2132744816, TEXT("TwinStickHUDWIdget_BP_C"), 2341424524);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTwinStickHUDWIdget_BP_C__pf2132744816(Z_Construct_UClass_UTwinStickHUDWIdget_BP_C__pf2132744816, &UTwinStickHUDWIdget_BP_C__pf2132744816::StaticClass, TEXT("/Game/Blueprints/TwinStickHUDWIdget_BP"), TEXT("TwinStickHUDWIdget_BP_C"), true, TEXT("/Game/Blueprints/TwinStickHUDWIdget_BP"), TEXT("/Game/Blueprints/TwinStickHUDWIdget_BP.TwinStickHUDWIdget_BP_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTwinStickHUDWIdget_BP_C__pf2132744816);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
