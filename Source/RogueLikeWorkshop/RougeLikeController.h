// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tile.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Creature.h"
#include "RougeLikePlayer.h"
#include "RougeLikeController.generated.h"

class Creature;
class ItemTile;
class Tile;
class GoldTile;
class PotionTile;
class Wall;
class RougeLikePlayer;
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
	void startFight(Creature* defender, Creature* attacker, int defenderLocationx, int defenderLocationY);
	UFUNCTION(BlueprintImplementableEvent) void gameOver();
	//UFUNCTION(BlueprintCallable) void restartGame();
	UFUNCTION(BlueprintCallable) void pickUpWeapon();
	void setPlayerOnItemTile(bool input);
	void updateWeaponCache(Weapon* newWeapon);

private:
	int mapSizeX;
	int mapSizeY;
	TArray<TArray<Tile*>> map;
	Tile* RandomTile();
	RougeLikePlayer* rougeLikePLayer;
	bool playerOnItemTile;
	Weapon* weaponCache;
};
