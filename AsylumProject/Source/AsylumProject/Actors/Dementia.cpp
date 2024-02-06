// Fill out your copyright notice in the Description page of Project Settings.


#include "Dementia.h"

// Sets default values
ADementia::ADementia()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxColider"));
	BoxComponent->SetupAttachment(RootComponent);

	DemencialMusic = CreateDefaultSubobject<UAudioComponent>(TEXT("DemencialMusic")); 
	DemencialMusic->SetupAttachment(RootComponent);

	NormalMusic = CreateDefaultSubobject<UAudioComponent>(TEXT("NormalMusic")); 
	NormalMusic->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ADementia::BeginPlay()
{
	Super::BeginPlay();
	

	BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &ADementia::BeginOverlap);
}

void ADementia::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* 
	OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->ActorHasTag("Player"))
	{
		MyPlayer = Cast<AAsylumProjectCharacter>(OtherActor);

		if (!DemencialModeOn_Off && MyPlayer->HasKey)
		{
			DemencialModeOn_Off = true;
		}
		else
		{
			DemencialModeOn_Off = false;
		}

		IsDemencialActive(DemencialModeOn_Off);


		float Damage = 5;
		float& DamageRef = Damage;
		DamageRef = 10;
		UE_LOG(LogTemp, Display, TEXT("DamageRef: %f, Damage: %f" ), DamageRef,Damage);

	}


}

void ADementia::IsDemencialActive(bool isActive)
{
	if (isActive)
	{
		NormalMusic->Stop();
		DemencialMusic->Play();
	}
	else
	{

	}

}


