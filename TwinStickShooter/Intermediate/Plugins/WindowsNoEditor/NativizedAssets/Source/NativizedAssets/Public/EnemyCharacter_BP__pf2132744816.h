#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "iDamageable_BP__pf2132744816.h"
#include "TwinStickShooter/BaseCharacter_CPP.h"
class ATwinStickGameMode_BP_C__pf2132744816;
class AActor;
class UBoxComponent;
class UMaterialInstanceDynamic;
class AHeroCharacter_BP_C__pf2132744816;
#include "EnemyCharacter_BP__pf2132744816.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/EnemyCharacter_BP.EnemyCharacter_BP_C", OverrideNativeName="EnemyCharacter_BP_C"))
class AEnemyCharacter_BP_C__pf2132744816 : public ABaseCharacter_CPP, public IiDamageable_BP_C
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Damage Volume"))
	UBoxComponent* bpv__DamagexVolume__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Dyna Mat", Category="Default", OverrideNativeName="Dyna Mat"))
	UMaterialInstanceDynamic* bpv__DynaxMat__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Hero Character", Category="Default", OverrideNativeName="Hero Character"))
	AHeroCharacter_BP_C__pf2132744816* bpv__HeroxCharacter__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Damage", Category="Default", OverrideNativeName="Damage"))
	float bpv__Damage__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Attacks Per Second", Category="Default", OverrideNativeName="Attacks per Second"))
	float bpv__AttacksxperxSecond__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Score for Killing This Guy", Category="Default", OverrideNativeName="ScoreForKillingThisGuy"))
	int32 bpv__ScoreForKillingThisGuy__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Effect_Health_self_CastInput"))
	TScriptInterface<IiDamageable_BP_C> b0l__CallFunc_Effect_Health_self_CastInput__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_OtherActor2"))
	AActor* b0l__K2Node_Event_OtherActor2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTwin_Stick_Game_Mode_BP"))
	ATwinStickGameMode_BP_C__pf2132744816* b0l__K2Node_DynamicCast_AsTwin_Stick_Game_Mode_BP__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Delta_Health"))
	float b0l__K2Node_Event_Delta_Health__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_OtherActor"))
	AActor* b0l__K2Node_Event_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsHero_Character_BP"))
	AHeroCharacter_BP_C__pf2132744816* b0l__K2Node_DynamicCast_AsHero_Character_BP__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess2"))
	bool b0l__K2Node_DynamicCast_bSuccess2__pf;
	AEnemyCharacter_BP_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_EnemyCharacter_BP__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_EnemyCharacter_BP_1"))
	void bpf__ExecuteUbergraph_EnemyCharacter_BP__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyCharacter_BP__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyCharacter_BP__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Category="Collision", DisplayName="ActorBeginOverlap", ToolTip="Event when this actor overlaps another actor, for example a player walking into a trigger.For events when objects have a blocking collision, for example a player hitting a wall, see \'Hit\' events.@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.", CppFromBpEvent, OverrideNativeName="ReceiveActorBeginOverlap"))
	void bpf__ReceiveActorBeginOverlap__pf(AActor* bpp__OtherActor__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Effect Health"))
	void bpf__EffectxHealth__pfT(float bpp__DeltaxHealth__pfT);
	UFUNCTION(meta=(Category="Collision", DisplayName="ActorEndOverlap", ToolTip="Event when an actor no longer overlaps another actor, and they have separated.@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.", CppFromBpEvent, OverrideNativeName="ReceiveActorEndOverlap"))
	void bpf__ReceiveActorEndOverlap__pf(AActor* bpp__OtherActor__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Damage Hero"))
	virtual void bpf__DamagexHero__pfT();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
public:
};
