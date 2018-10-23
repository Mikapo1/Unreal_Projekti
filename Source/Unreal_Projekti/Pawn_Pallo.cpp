// Fill out your copyright notice in the Description page of Project Settings.

#include "Pawn_Pallo.h"
#include "Components/InputComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/FloatingPawnMovement.h"


// Sets default values
APawn_Pallo::APawn_Pallo()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CreateDefaultSubobject<UFloatingPawnMovement>("PawnMovement");

	Pawn_Pallo_Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Pawn_Pallo_Mesh");
	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");

}

// Called when the game starts or when spawned
void APawn_Pallo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APawn_Pallo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APawn_Pallo::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("MoveForward", this, &APawn_Pallo::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APawn_Pallo::MoveRight);
}

void APawn_Pallo::MoveForward(float value)
{
	AddMovementInput(GetActorForwardVector(), value);
}
void APawn_Pallo::MoveRight(float value)
{
	AddMovementInput(GetActorRightVector(), value);
}

