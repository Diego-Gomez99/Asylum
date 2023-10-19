// Fill out your copyright notice in the Description page of Project Settings.


#include "MyDoor.h"

// Sets default values
AMyDoor::AMyDoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	DoorFrameMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorFrameMesh"));
	DoorFrameMesh->SetupAttachment(RootComponent);

	DoorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorMesh"));
	DoorMesh->SetupAttachment(DoorFrameMesh);

	BoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollider"));
	BoxCollider->SetupAttachment(DoorMesh);

	DoorLockedSound = CreateDefaultSubobject<UAudioComponent>(TEXT("DoorLockedSound"));
	DoorLockedSound->SetupAttachment(DoorMesh);

}

// Called when the game starts or when spawned
void AMyDoor::BeginPlay()
{
	Super::BeginPlay();
	
	BoxCollider->OnComponentBeginOverlap.AddDynamic(this, &AMyDoor::BeginOverlap);
	BoxCollider->OnComponentEndOverlap.AddDynamic(this, &AMyDoor::OnOverlapEnd);

}

void AMyDoor::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->ActorHasTag("Player"))
	{
		FOutputDeviceNull ar;
		this->CallFunctionByNameWithArguments(TEXT("WidgetDoorVisibility true"), ar, NULL, true);
		CanIteractuateDoor = true;
	}


}

void AMyDoor::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor->ActorHasTag("Player"))
	{
		FOutputDeviceNull ar;
		this->CallFunctionByNameWithArguments(TEXT("WidgetDoorVisibility false"), ar, NULL, true);
		CanIteractuateDoor = false;
	}
}


