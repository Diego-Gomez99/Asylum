// Copyright Epic Games, Inc. All Rights Reserved.

#include "AsylumProjectCharacter.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"


//////////////////////////////////////////////////////////////////////////
// AAsylumProjectCharacter

AAsylumProjectCharacter::AAsylumProjectCharacter()
{
	// Character doesnt have a rifle at start
	bHasRifle = false;

	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-10.f, 0.f, 60.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	//Mesh1P->SetRelativeRotation(FRotator(0.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-30.f, 0.f, -150.f));

	//Creating Player tag
	Tags.Add(TEXT("Player"));

}



void AAsylumProjectCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	Myplayercontroller = Cast<APlayerController>(GetController());

	KeysSoundComponent = FindComponentByClass<UAudioComponent>();

	GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &AAsylumProjectCharacter::BeginOverlap);

	//Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}

}

//////////////////////////////////////////////////////////////////////////// Input

void AAsylumProjectCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{

		//Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AAsylumProjectCharacter::Move);

		//Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AAsylumProjectCharacter::Look);

		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::None, this, &AAsylumProjectCharacter::Move);
	}

	InputComponent->BindAction(TEXT("InteractionAction"), IE_Pressed, this, &AAsylumProjectCharacter::PlayerInteraction);
}

void AAsylumProjectCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();


	if (Controller != nullptr)
	{
		// add movement 
		AddMovementInput(GetActorForwardVector(), MovementVector.Y);
		AddMovementInput(GetActorRightVector(), MovementVector.X);

		if (GetVelocity().X > 2.0 || GetVelocity().X < -2.0 || GetVelocity().Y > 2.0 || GetVelocity().Y < -2.0)
		{
			this->CallFunctionByNameWithArguments(TEXT("WalkingEvent true"), ar, NULL, true);
		}
		else
		{
			this->CallFunctionByNameWithArguments(TEXT("WalkingEvent false"), ar, NULL, true);
		}
		HeadBob(GetVelocity().Size());
		
	} 
	
}

void AAsylumProjectCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void AAsylumProjectCharacter::PlayerInteraction()
{
	
	if (MyKeyRef && MyKeyRef->CanTakeKey)
	{
		HasKey = true;
		KeysSoundComponent->Play();
		MyKeyRef->KeyTaken();
	}

	if (MyDoorRef && MyDoorRef->CanIteractuateDoor)
	{
		if (HasKey)
		{
			MyDoorRef->CallFunctionByNameWithArguments(TEXT("ChangeDoorIcon true"), ar, NULL, true);
		}
		else
		{	
			MyDoorRef->CallFunctionByNameWithArguments(TEXT("ChangeDoorIcon false"), ar, NULL, true);
		}
	}

}

void AAsylumProjectCharacter::HeadBob(float VectorLenght)
{

	if (VectorLenght > 0 )
	{
		Myplayercontroller->ClientStartCameraShake(CamShakeWalk);
	}
	else
	{
		Myplayercontroller->ClientStartCameraShake(CamShakeIdle);
	}

}

void AAsylumProjectCharacter::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, 
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	if (OtherActor->ActorHasTag("Key"))
	{
		MyKeyRef = Cast<AMyKey>(OtherActor);
	}

	else if (OtherActor->ActorHasTag("Door"))
	{
		MyDoorRef = Cast<AMyDoor>(OtherActor);
	}

	else if (OtherActor->ActorHasTag("RemoveKey") || MyKeyRef == nullptr)
	{
		HasKey = false;
		MyDoorRef->DoorMesh->SetRelativeRotation(FRotator(0.0f, 0.0f, 0.0f));
		OtherActor->Destroy();
	}

}

void AAsylumProjectCharacter::SetHasRifle(bool bNewHasRifle)
{
	bHasRifle = bNewHasRifle;
}

bool AAsylumProjectCharacter::GetHasRifle()
{
	return bHasRifle;
}
