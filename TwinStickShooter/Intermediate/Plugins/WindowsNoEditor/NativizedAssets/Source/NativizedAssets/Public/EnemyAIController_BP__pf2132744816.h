#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "EnemyAIController_BP__pf2132744816.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/EnemyAIController_BP.EnemyAIController_BP_C", OverrideNativeName="EnemyAIController_BP_C"))
class AEnemyAIController_BP_C__pf2132744816 : public AAIController
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="OAISimpleDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_OneParam(F__OAISimpleDelegate__DelegateSignature__SC_0, EPathFollowingResult::Type , bpp__MovementResult__pf);
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult2"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate2"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__Temp_byte_Variable__pf;
	AEnemyAIController_BP_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_EnemyAIController_BP__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyAIController_BP__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyAIController_BP__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyAIController_BP__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="TrackPlayer"))
	virtual void bpf__TrackPlayer__pf();
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_40D8FBAB4E1AC040BAA5768276468F1C"))
	virtual void bpf__OnSuccess_40D8FBAB4E1AC040BAA5768276468F1C__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFail_40D8FBAB4E1AC040BAA5768276468F1C"))
	virtual void bpf__OnFail_40D8FBAB4E1AC040BAA5768276468F1C__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
public:
};
