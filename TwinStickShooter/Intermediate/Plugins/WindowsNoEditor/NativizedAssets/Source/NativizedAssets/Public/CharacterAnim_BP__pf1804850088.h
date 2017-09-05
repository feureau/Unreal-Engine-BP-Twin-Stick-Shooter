#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Animation/AnimClassData.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_StateMachine.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_Root.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_BlendSpacePlayer.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_SequencePlayer.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_BlendListByInt.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_TransitionResult.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
class ABaseCharacter_CPP;
#include "CharacterAnim_BP__pf1804850088.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Animation/CharacterAnim_BP.CharacterAnim_BP_C", OverrideNativeName="CharacterAnim_BP_C"))
class UCharacterAnim_BP_C__pf1804850088 : public UAnimInstance
{
public:
	GENERATED_BODY()
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_Root_BC6D52CF47617E9A56B583B9E6697649"))
	FAnimNode_Root bpv__AnimGraphNode_Root_BC6D52CF47617E9A56B583B9E6697649__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_ECDBEBD64B432FE2AD6EDAB46CCBE346"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_ECDBEBD64B432FE2AD6EDAB46CCBE346__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_BlendListByInt_C632EB4943D644601A50EBAD0DA508B9"))
	FAnimNode_BlendListByInt bpv__AnimGraphNode_BlendListByInt_C632EB4943D644601A50EBAD0DA508B9__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_B51D3B6941047FFD184293841EF4F5BE"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_B51D3B6941047FFD184293841EF4F5BE__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_E709CDC940FBF8F7A0EED28FC9327729"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_E709CDC940FBF8F7A0EED28FC9327729__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_A38CA2A3408F57E155793DB0C3CCB45B"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_A38CA2A3408F57E155793DB0C3CCB45B__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_A385F11C46942C275C78ADA80EA7E746"))
	FAnimNode_Root bpv__AnimGraphNode_StateResult_A385F11C46942C275C78ADA80EA7E746__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_BlendSpacePlayer_8B656F3B4204114B9FA8E698BC9DB38F"))
	FAnimNode_BlendSpacePlayer bpv__AnimGraphNode_BlendSpacePlayer_8B656F3B4204114B9FA8E698BC9DB38F__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_E1E8E8C04C28A2F0952ACC935CF2042E"))
	FAnimNode_Root bpv__AnimGraphNode_StateResult_E1E8E8C04C28A2F0952ACC935CF2042E__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateMachine_6A15B18945429A9ABCF39D9A19820951"))
	FAnimNode_StateMachine bpv__AnimGraphNode_StateMachine_6A15B18945429A9ABCF39D9A19820951__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Speed", Category="Default", OverrideNativeName="Speed"))
	float bpv__Speed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Direction", Category="Default", OverrideNativeName="Direction"))
	float bpv__Direction__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Dead", Category="Default", OverrideNativeName="Is Dead"))
	bool bpv__IsxDead__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Death Animation Selector", Category="Default", OverrideNativeName="Death animation selector"))
	int32 bpv__Deathxanimationxselector__pfTT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable"))
	bool b0l__Temp_bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaTimeX"))
	float b0l__K2Node_Event_DeltaTimeX__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBase_Character_CPP"))
	ABaseCharacter_CPP* b0l__K2Node_DynamicCast_AsBase_Character_CPP__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Roll"))
	float b0l__CallFunc_BreakRotator_Roll__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Pitch"))
	float b0l__CallFunc_BreakRotator_Pitch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Yaw"))
	float b0l__CallFunc_BreakRotator_Yaw__pf;
	UCharacterAnim_BP_C__pf1804850088(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_CharacterAnim_BP__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterAnim_BP__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterAnim_BP__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterAnim_BP__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(ToolTip="Executed when the Animation is updated", CppFromBpEvent, OverrideNativeName="BlueprintUpdateAnimation"))
	void bpf__BlueprintUpdateAnimation__pf(float bpp__DeltaTimeX__pf);
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_CharacterAnim_BP_AnimGraphNode_BlendSpacePlayer_8B656F3B4204114B9FA8E698BC9DB38F"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_CharacterAnim_BP_AnimGraphNode_BlendSpacePlayer_8B656F3B4204114B9FA8E698BC9DB38F__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_CharacterAnim_BP_AnimGraphNode_BlendListByInt_C632EB4943D644601A50EBAD0DA508B9"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_CharacterAnim_BP_AnimGraphNode_BlendListByInt_C632EB4943D644601A50EBAD0DA508B9__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_CharacterAnim_BP_AnimGraphNode_TransitionResult_ECDBEBD64B432FE2AD6EDAB46CCBE346"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_CharacterAnim_BP_AnimGraphNode_TransitionResult_ECDBEBD64B432FE2AD6EDAB46CCBE346__pf();
public:
};
