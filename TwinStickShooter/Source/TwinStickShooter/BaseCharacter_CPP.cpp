// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseCharacter_CPP.h"

// Sets default values
ABaseCharacter_CPP::ABaseCharacter_CPP() {
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ABaseCharacter_CPP::BeginPlay() {
	Super::BeginPlay();
}

// Called every frame
void ABaseCharacter_CPP::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ABaseCharacter_CPP::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) {
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

//Implement CalculateHealth
void ABaseCharacter_CPP::CalculateHealth(float deltaHealth) {
	health += deltaHealth;
	CalculateDead();
}
//Implement CalculateDead
void ABaseCharacter_CPP::CalculateDead() {
	if (health <= 0) {
		isDead = true;
	} else {
		isDead = false;
	}
}

//Implement PostEditChangeProperty
#if WITH_EDITOR
void ABaseCharacter_CPP::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) {
	isDead = false;
	health = 100;
	Super::PostEditChangeProperty(PropertyChangedEvent);
	CalculateDead();
}
#endif