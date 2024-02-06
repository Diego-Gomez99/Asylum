// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Components/AudioComponent.h"
#include "AsylumProject/Player/AsylumProjectCharacter.h"
#include "Dementia.generated.h"

UCLASS()
class ASYLUMPROJECT_API ADementia : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADementia();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:


private:

	UPROPERTY(EditAnywhere)
	UBoxComponent* BoxComponent;

	UPROPERTY(EditAnywhere)
	UAudioComponent* DemencialMusic;
	UPROPERTY(EditAnywhere)
	UAudioComponent* NormalMusic;

	UPROPERTY(EditAnywhere)
	bool DemencialModeOn_Off = false;

	
	AAsylumProjectCharacter* MyPlayer;

	UFUNCTION()
	void BeginOverlap(UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);


	void IsDemencialActive(bool isActive);

};
