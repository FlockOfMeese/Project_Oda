// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "RedGuyMovement.generated.h"

UCLASS()
class PROJECT_ODA_API ARedGuyMovement : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ARedGuyMovement();

	UFUNCTION(BlueprintCallable, Category = "BasicFuncs")
		void SpawnActor();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<AActor> actorBPToSpawn;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
