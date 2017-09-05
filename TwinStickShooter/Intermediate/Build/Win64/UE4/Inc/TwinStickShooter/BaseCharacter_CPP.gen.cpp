// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BaseCharacter_CPP.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseCharacter_CPP() {}
// Cross Module References
	TWINSTICKSHOOTER_API UFunction* Z_Construct_UFunction_ABaseCharacter_CPP_CalculateHealth();
	TWINSTICKSHOOTER_API UClass* Z_Construct_UClass_ABaseCharacter_CPP();
	TWINSTICKSHOOTER_API UClass* Z_Construct_UClass_ABaseCharacter_CPP_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_TwinStickShooter();
// End Cross Module References
	void ABaseCharacter_CPP::StaticRegisterNativesABaseCharacter_CPP()
	{
		UClass* Class = ABaseCharacter_CPP::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "CalculateHealth", (Native)&ABaseCharacter_CPP::execCalculateHealth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_ABaseCharacter_CPP_CalculateHealth()
	{
		struct BaseCharacter_CPP_eventCalculateHealth_Parms
		{
			float deltaHealth;
		};
		UObject* Outer = Z_Construct_UClass_ABaseCharacter_CPP();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CalculateHealth"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535, sizeof(BaseCharacter_CPP_eventCalculateHealth_Parms));
			UProperty* NewProp_deltaHealth = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("deltaHealth"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(deltaHealth, BaseCharacter_CPP_eventCalculateHealth_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Base Character"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("BaseCharacter_CPP.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Calculate health function"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABaseCharacter_CPP_NoRegister()
	{
		return ABaseCharacter_CPP::StaticClass();
	}
	UClass* Z_Construct_UClass_ABaseCharacter_CPP()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_TwinStickShooter();
			OuterClass = ABaseCharacter_CPP::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_ABaseCharacter_CPP_CalculateHealth());

				CPP_BOOL_PROPERTY_BITMASK_STRUCT(isDead, ABaseCharacter_CPP);
				UProperty* NewProp_isDead = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("isDead"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(isDead, ABaseCharacter_CPP), 0x0010000000020015, CPP_BOOL_PROPERTY_BITMASK(isDead, ABaseCharacter_CPP), sizeof(bool), true);
				UProperty* NewProp_health = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("health"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(health, ABaseCharacter_CPP), 0x0010000000000005);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABaseCharacter_CPP_CalculateHealth(), "CalculateHealth"); // 2696676468
				static TCppClassTypeInfo<TCppClassTypeTraits<ABaseCharacter_CPP> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BaseCharacter_CPP.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("BaseCharacter_CPP.h"));
				MetaData->SetValue(NewProp_isDead, TEXT("Category"), TEXT("Base Character"));
				MetaData->SetValue(NewProp_isDead, TEXT("ModuleRelativePath"), TEXT("BaseCharacter_CPP.h"));
				MetaData->SetValue(NewProp_isDead, TEXT("ToolTip"), TEXT("Make an isDead property"));
				MetaData->SetValue(NewProp_health, TEXT("Category"), TEXT("Base Character"));
				MetaData->SetValue(NewProp_health, TEXT("ModuleRelativePath"), TEXT("BaseCharacter_CPP.h"));
				MetaData->SetValue(NewProp_health, TEXT("ToolTip"), TEXT("Make a health property"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseCharacter_CPP, 507107711);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseCharacter_CPP(Z_Construct_UClass_ABaseCharacter_CPP, &ABaseCharacter_CPP::StaticClass, TEXT("/Script/TwinStickShooter"), TEXT("ABaseCharacter_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseCharacter_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
