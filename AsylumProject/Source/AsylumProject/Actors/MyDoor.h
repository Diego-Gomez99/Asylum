// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Components/AudioComponent.h"
#include "Misc/OutputDeviceNull.h"
#include "MyDoor.generated.h"

UCLASS()
class ASYLUMPROJECT_API AMyDoor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMyDoor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	bool CanIteractuateDoor = false;


	UPROPERTY(BlueprintReadWrite)
	float ClosedAngle;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float OpenAngle;

	/*Door Mesh*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* DoorMesh;

private:


	/*Box Collider*/
	UPROPERTY(EditAnywhere)
	UBoxComponent* BoxCollider;

	UPROPERTY(EditAnywhere)
	UAudioComponent* DoorLockedSound;


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



};
