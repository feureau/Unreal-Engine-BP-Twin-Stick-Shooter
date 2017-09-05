#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "iDamageable_BP__pf2132744816.generated.h"
UINTERFACE(Blueprintable, meta=(ReplaceConverted="/Game/Blueprints/iDamageable_BP.iDamageable_BP_C", OverrideNativeName="iDamageable_BP_C"))
class UiDamageable_BP_C : public UInterface
{
	GENERATED_BODY()
};
class IiDamageable_BP_C
{
public:
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="Effect Health"))
	void bpf__EffectxHealth__pfT(float bpp__DeltaxHealth__pfT);
public:
};
