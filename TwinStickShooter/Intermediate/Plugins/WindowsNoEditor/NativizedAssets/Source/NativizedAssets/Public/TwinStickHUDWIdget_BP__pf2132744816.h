#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UTextBlock;
class UProgressBar;
#include "TwinStickHUDWIdget_BP__pf2132744816.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/TwinStickHUDWIdget_BP.TwinStickHUDWIdget_BP_C", OverrideNativeName="TwinStickHUDWIdget_BP_C"))
class UTwinStickHUDWIdget_BP_C__pf2132744816 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ProgressBar_53", Category="TwinStickHUDWIdget_BP", OverrideNativeName="ProgressBar_53"))
	UProgressBar* bpv__ProgressBar_53__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_371", OverrideNativeName="TextBlock_371"))
	UTextBlock* bpv__TextBlock_371__pf;
	UTwinStickHUDWIdget_BP_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetHealthBar"))
	virtual float  bpf__GetHealthBar__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetScore"))
	virtual FText  bpf__GetScore__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
