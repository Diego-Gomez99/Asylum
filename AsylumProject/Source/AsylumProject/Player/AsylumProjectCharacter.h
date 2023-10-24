// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "Kismet/GameplayStatics.h"
#include "Components/AudioComponent.h"
#include "Components/SpotLightComponent.h"
#include "Misc/OutputDeviceNull.h"
#include "AsylumProject/Actors/MyKey.h"
#include "Misc/OutputDeviceNull.h"
#include "AsylumProject/Actors/MyDoor.h"
#include "AsylumProject/Actors/MyFlashLight.h"
#include "AsylumProjectCharacter.generated.h"

class UInputComponent;
class USkeletalMeshComponent;
class USceneComponent;
class UCameraComponent;
class UAnimMontage;
//class USoundBase;

UCLASS(config=Game)
class AAsylumProjectCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	USkeletalMeshComponent* Mesh1P;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FirstPersonCameraComponent;

	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	class UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	class UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	class UInputAction* MoveAction;

	UPROPERTY(EditAnywhere)
	UAudioComponent* KeysSoundComponent;

	APlayerController* Myplayercontroller;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* FlashlightMesh;

	UPROPERTY(EditAnywhere)
	USpotLightComponent* FlashLightSpotLight;

	UPROPERTY(EditAnywhere)
	UAudioComponent* FlashLightSound;

	UPROPERTY(EditDefaultsOnly)
	UAudioComponent* PickupFlashLight;

	
public:
	AAsylumProjectCharacter();

protected:
	virtual void BeginPlay();

public:
		
	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* LookAction;

	/** Bool for AnimBP to switch to another animation set */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Weapon)
	bool bHasRifle;

	/** Setter to set the bool */
	UFUNCTION(BlueprintCallable, Category = Weapon)
	void SetHasRifle(bool bNewHasRifle);

	/** Getter for the bool */
	UFUNCTION(BlueprintCallable, Category = Weapon)
	bool GetHasRifle();

protected:
	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);

	void PlayerInteraction();

	void FlashLightInput();

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
	// End of APawn interface

public:
	/** Returns Mesh1P subobject **/
	USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }
	/** Returns FirstPersonCameraComponent subobject **/
	UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

	UFUNCTION(BlueprintCallable)
	void HeadBob(float VectorLenght);

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool HasKey = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FootstepInterval;
private:

	FOutputDeviceNull ar;


	bool HasFlashLight = false;

	bool bHasExecuted = false;


public:
	/*Key Item*/
	UPROPERTY(BlueprintReadWrite)
	AMyKey* MyKeyRef;

	/*Door Class*/
	AMyDoor* MyDoorRef;


	AMyFlashLight* FlashLightRef;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UCameraShakeBase> CamShakeIdle;	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UCameraShakeBase> CamShakeWalk;

UFUNCTION()
void BeginOverlap(UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);
};

