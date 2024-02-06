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

	BoxColliderRight = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxColliderRight"));
	BoxColliderRight->SetupAttachment(DoorFrameMesh);

	BoxColliderLeft = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxColliderLeft"));
	BoxColliderLeft->SetupAttachment(DoorFrameMesh);

	ArrowRight = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponentRight"));
	ArrowRight->SetupAttachment(DoorFrameMesh);

	ArrowLeft = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponentLeft"));
	ArrowLeft->SetupAttachment(DoorFrameMesh);

}

// Called when the game starts or when spawned
void AMyDoor::BeginPlay()
{
	Super::BeginPlay();
	
	BoxColliderRight->OnComponentBeginOverlap.AddDynamic(this, &AMyDoor::BeginOverlapRightCollider);
	BoxColliderRight->OnComponentEndOverlap.AddDynamic(this, &AMyDoor::OnOverlapEndRightCollider);

	BoxColliderLeft->OnComponentBeginOverlap.AddDynamic(this, &AMyDoor::BeginOverlapLeftCollider);
	BoxColliderLeft->OnComponentEndOverlap.AddDynamic(this, &AMyDoor::OnOverlapEndLeftCollider);
	
}

/*Right Colliders Functions*/
void AMyDoor::BeginOverlapRightCollider(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->ActorHasTag("Player"))
	{
		FOutputDeviceNull ar;
		this->CallFunctionByNameWithArguments(TEXT("WidgetDoorVisibility true"), ar, NULL, true);
		CanIteractuateDoor = true;
		ArrowComponentLocation = ArrowRight;
	}


}

void AMyDoor::OnOverlapEndRightCollider(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor->ActorHasTag("Player"))
	{
		FOutputDeviceNull ar;
		this->CallFunctionByNameWithArguments(TEXT("WidgetDoorVisibility false"), ar, NULL, true);
		CanIteractuateDoor = false;
	}
}

/*Left Colliders Functions*/
void AMyDoor::BeginOverlapLeftCollider(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->ActorHasTag("Player"))
	{
		FOutputDeviceNull ar;
		this->CallFunctionByNameWithArguments(TEXT("WidgetDoorVisibility true"), ar, NULL, true);
		CanIteractuateDoor = true;
		ArrowComponentLocation = ArrowLeft;
	}


}

void AMyDoor::OnOverlapEndLeftCollider(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor->ActorHasTag("Player"))
	{
		FOutputDeviceNull ar;
		this->CallFunctionByNameWithArguments(TEXT("WidgetDoorVisibility false"), ar, NULL, true);
		CanIteractuateDoor = false;
	}
}

FTransform AMyDoor::ArrowLocation(UArrowComponent* ArrowComponent)
{
	return ArrowComponent->GetComponentTransform();
}

