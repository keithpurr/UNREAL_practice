// Fill out your copyright notice in the Description page of Project Settings.

#include "Tutorial3rdPerson.h"
#include "Pickup.h"


// Sets default values
APickup::APickup(const FObjectInitializer &objectInitializer) :Super(objectInitializer)
{


	// The pickup is valid when it is created
	BaseCollisionComponent = ObjectInitializer.CreateDefaultSubobject<USphereComponent>(this, TEXT("BaserSphereComponent"));

	// Set the sphereComponent as root component
	RootComponent = BaseCollisionComponent;

	// Create the static mesh component
	PickupMesh = ObjectInitializer.CreateDefaultSubobject<UStaticMeshComponent>(this, TEXT("PickupMesh"));

	// Turn physics on for the static mesh
	PickupMesh->SetSimulatePhysics(true);

	// Attach StaticMeshComponent to the root component
	PickupMesh->AttachTo(RootComponent);

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void APickup::OnPickedUp_Impelentation()
{
	// no default behavior
}

// Called when the game starts or when spawned
void APickup::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickup::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

