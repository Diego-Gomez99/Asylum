// Fill out your copyright notice in the Description page of Project Settings.


#include "MyFlashLight.h"

// Sets default values
AMyFlashLight::AMyFlashLight()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	FlashLightMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FlashLightMesh"));
	FlashLightMesh->SetupAttachment(RootComponent);

	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	SphereComponent->SetupAttachment(FlashLightMesh);

}

// Called when the game starts or when spawned
void AMyFlashLight::BeginPlay()
{
	Super::BeginPlay();

	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &AMyFlashLight::BeginOverlap);
	SphereComponent->OnComponentEndOverlap.AddDynamic(this, &AMyFlashLight::OnOverlapEnd);
	
}

void AMyFlashLight::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, 
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->ActorHasTag("Player"))
	{
		this->CallFunctionByNameWithArguments(TEXT("WidgetVisivility true"), ar, NULL, true);
		CanTakeFlashLight = true;
	}

}

void AMyFlashLight::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, 
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor->ActorHasTag("Player"))
	{
		this->CallFunctionByNameWithArguments(TEXT("WidgetVisivility false"), ar, NULL, true);
		CanTakeFlashLight = false;
	}

}


