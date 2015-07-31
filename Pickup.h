// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Pickup.generated.h"

UCLASS()
class TUTORIAL3RDPERSON_API APickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickup(const FObjectInitializer& ObjectInitializer);

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;


	// True when the pickup is able to be picked up, false if something deactivates the pickup
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup") // added on a variable
	bool bIsActive;

	// Simple collision primitive to use as the root component
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Pickup")  // added on a component
	class USphereComponent* BaseCollisionComponent; 

	// StaticMeshComponent to represent the pickup in the level
	UPROPERTY(VisbleDefaultsOnly, BlueprintReadOnly, Category = "Pickup")
	class UStaticMeshComponent* PickupMesh; 

	// Function to call when the Pickup is collected
	UFUNCTION(BluneprinNativeEvent)// to have a backup functionality that can be set in code.
	void OnPickUp();
	
	
};
