// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "Components/AudioComponent.h"
#include "Misc/OutputDeviceNull.h"
#include "MyKey.generated.h"

UCLASS()
class ASYLUMPROJECT_API AMyKey : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyKey();	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


private:
	
	//Key Mesh
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* KeyMeshComponent;

	//Sphere Collider Component
	UPROPERTY(EditAnywhere)
	USphereComponent* SphereCollider;

	UPROPERTY(EditInstanceOnly)
	AActor* ItemActor;

	UFUNCTION()
	void BeginOverlap(UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);

	UFUNCTION()
	void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	
public:

	bool CanTakeKey = false;

	void KeyTaken();

};
