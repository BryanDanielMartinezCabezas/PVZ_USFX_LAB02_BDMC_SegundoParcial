// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Zombie.generated.h"

UCLASS()
class PVZ_USFX_LAB02_BDMC_API AZombie : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AZombie();



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* MeshZombie;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	float Velocidad;
	float VelocidadX;
	float VelocidadZ;

	UPROPERTY(VisibleAnywhere)
	int energia;

	FTimerHandle Temporizador;

	void morir();
};
