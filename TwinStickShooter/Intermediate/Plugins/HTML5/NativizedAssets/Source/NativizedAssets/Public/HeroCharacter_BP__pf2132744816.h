#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "TwinStickShooter/BaseCharacter_CPP.h"
#include "iDamageable_BP__pf2132744816.h"
class UArrowComponent;
class UCameraComponent;
class USpringArmComponent;
class UMaterialInstanceDynamic;
class AWeapon_BP_C__pf2132744816;
class ATwinStickGameMode_BP_C__pf2132744816;
#include "HeroCharacter_BP__pf2132744816.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/HeroCharacter_BP.HeroCharacter_BP_C", OverrideNativeName="HeroCharacter_BP_C"))
class AHeroCharacter_BP_C__pf2132744816 : public ABaseCharacter_CPP, public IiDamageable_BP_C
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="GunTemp"))
	UArrowComponent* bpv__GunTemp__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="HeroCamera"))
	UCameraComponent* bpv__HeroCamera__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SpringArm"))
	USpringArmComponent* bpv__SpringArm__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Dyna Mat", Category="Default", OverrideNativeName="Dyna Mat"))
	UMaterialInstanceDynamic* bpv__DynaxMat__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Weapon", Category="Default", OverrideNativeName="Weapon"))
	AWeapon_BP_C__pf2132744816* bpv__Weapon__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Game Mode", Category="Default", OverrideNativeName="GameMode"))
	ATwinStickGameMode_BP_C__pf2132744816* bpv__GameMode__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue3"))
	float b0l__K2Node_InputAxisEvent_AxisValue3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue4"))
	float b0l__K2Node_InputAxisEvent_AxisValue4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue2"))
	float b0l__K2Node_InputAxisEvent_AxisValue2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Delta_Health"))
	float b0l__K2Node_Event_Delta_Health__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTwin_Stick_Game_Mode_BP"))
	ATwinStickGameMode_BP_C__pf2132744816* b0l__K2Node_DynamicCast_AsTwin_Stick_Game_Mode_BP__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue"))
	float b0l__K2Node_InputAxisEvent_AxisValue__pf;
	AHeroCharacter_BP_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_HeroCharacter_BP__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_HeroCharacter_BP__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_HeroCharacter_BP_2"))
	void bpf__ExecuteUbergraph_HeroCharacter_BP__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_HeroCharacter_BP__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_HeroCharacter_BP__pf_4(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_MoveUp_K2Node_InputAxisEvent_0"))
	virtual void bpf__InpAxisEvt_MoveUp_K2Node_InputAxisEvent_0__pf(float bpp__AxisValue__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Effect Health"))
	void bpf__EffectxHealth__pfT(float bpp__DeltaxHealth__pfT);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1"))
	virtual void bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_LookUp_K2Node_InputAxisEvent_3"))
	virtual void bpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_3__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_LookRight_K2Node_InputAxisEvent_6"))
	virtual void bpf__InpAxisEvt_LookRight_K2Node_InputAxisEvent_6__pf(float bpp__AxisValue__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
public:
};
