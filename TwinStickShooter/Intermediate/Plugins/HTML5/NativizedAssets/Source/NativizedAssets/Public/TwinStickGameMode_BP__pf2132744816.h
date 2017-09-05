#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
class USceneComponent;
class AEnemySpawner_BP_C__pf2132744816;
class AEnemyCharacter_BP_C__pf2132744816;
#include "TwinStickGameMode_BP__pf2132744816.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/TwinStickGameMode_BP.TwinStickGameMode_BP_C", OverrideNativeName="TwinStickGameMode_BP_C"))
class ATwinStickGameMode_BP_C__pf2132744816 : public AGameModeBase
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Enemies Per Second", Category="Default", OverrideNativeName="Enemies per second"))
	float bpv__Enemiesxperxsecond__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Player Spawn Transform Location", Category="Default", OverrideNativeName="PlayerSpawnTransformLocation"))
	FTransform bpv__PlayerSpawnTransformLocation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Score", Category="Default", OverrideNativeName="Score"))
	int32 bpv__Score__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<AEnemySpawner_BP_C__pf2132744816*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	AEnemySpawner_BP_C__pf2132744816* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors2"))
	TArray<AEnemyCharacter_BP_C__pf2132744816*> b0l__CallFunc_GetAllActorsOfClass_OutActors2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item2"))
	AEnemyCharacter_BP_C__pf2132744816* b0l__CallFunc_Array_Get_Item2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_DeltaScore"))
	int32 b0l__K2Node_CustomEvent_DeltaScore__pf;
	ATwinStickGameMode_BP_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_TwinStickGameMode_BP__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_TwinStickGameMode_BP__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_TwinStickGameMode_BP__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="IncrementScore"))
	virtual void bpf__IncrementScore__pf(int32 bpp__DeltaScore__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="RespawnPlayer"))
	virtual void bpf__RespawnPlayer__pf();
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
public:
};
