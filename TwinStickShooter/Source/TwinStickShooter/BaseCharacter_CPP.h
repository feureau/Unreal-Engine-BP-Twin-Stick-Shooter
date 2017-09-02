// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseCharacter_CPP.generated.h"

UCLASS()
class TWINSTICKSHOOTER_API ABaseCharacter_CPP : public ACharacter {
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseCharacter_CPP();

	// Make a health property
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Base Character") float health = 100;

	// Make an isDead property
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Base Character") bool isDead = false;

	// Calculate death function (helper)
	virtual void CalculateDead();

	// Calculate health function
	UFUNCTION(BlueprintCallable, Category = "Base Character") virtual void CalculateHealth(float deltaHealth);

	#if WITH_EDITOR
	// Editor-centric code for changing properties
	virtual void PostEditChangeProperty(FPropertyChangedEvent& propertyChangedEvent) override;
	#endif

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};