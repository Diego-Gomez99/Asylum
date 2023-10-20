// Fill out your copyright notice in the Description page of Project Settings.


#include "MyKey.h"

// Sets default values
AMyKey::AMyKey()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	//Key MeshComponent
	KeyMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("KeyMesh"));
	KeyMeshComponent->SetupAttachment(RootComponent);

	//SphereCollider
	SphereCollider = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollider"));
	SphereCollider->SetupAttachment(KeyMeshComponent);

}

// Called when the game starts or when spawned
void AMyKey::BeginPlay()
{
	Super::BeginPlay();

	SphereCollider->OnComponentBeginOverlap.AddDynamic(this, &AMyKey::BeginOverlap);
	SphereCollider->OnComponentEndOverlap.AddDynamic(this, &AMyKey::OnOverlapEnd);
}

void AMyKey::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, 
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, 
	bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->ActorHasTag("Player"))
	{

		FOutputDeviceNull ar;
		this->CallFunctionByNameWithArguments(TEXT("WidgetVisivilty true"), ar, NULL, true);
		CanTakeKey = true;
	}

}

void AMyKey::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor->ActorHasTag("Player"))
	{
		FOutputDeviceNull ar;
		this->CallFunctionByNameWithArguments(TEXT("WidgetVisivilty false"), ar, NULL, true);
		CanTakeKey = false;
	}

}

void AMyKey::KeyTaken()
{
	if (ItemActor)
	{
		UStaticMeshComponent* ItemMesh = ItemActor->FindComponentByClass<UStaticMeshComponent>();
		UAudioComponent* HorrorHit = ItemActor->FindComponentByClass<UAudioComponent>();
		ItemMesh->SetSimulatePhysics(true);
		HorrorHit->Play();
	}

	Destroy();
}




