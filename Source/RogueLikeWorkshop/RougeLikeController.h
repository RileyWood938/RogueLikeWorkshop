// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tile.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RougeLikePlayer.h"
#include "RougeLikeController.generated.h"

UCLASS()
class ROGUELIKEWORKSHOP_API ARougeLikeController : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARougeLikeController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void printMap();
	UFUNCTION(BlueprintCallable, Category = "RougeLikeController")
	void movePlayer(int amountX, int amountY);
	void startFight(Creature* defender, Creature* attacker);


private:
	int mapSizeX;
	int mapSizeY;
	TArray<TArray<Tile*>> map;
	Tile* RandomTile();
	RougeLikePlayer* rougeLikePLayer;
};
