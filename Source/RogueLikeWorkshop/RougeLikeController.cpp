// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemTile.h"
#include "GoldTile.h"
#include "Wall.h"
#include "Weapon.h"
#include "PotionTile.h"
#include "RougeLikeController.h"

// Sets default values
ARougeLikeController::ARougeLikeController()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	mapSizeX = 8;
	mapSizeY = 8;

}

// Called when the game starts or when spawned
void ARougeLikeController::BeginPlay()
{
	Super::BeginPlay();

	rougeLikePLayer = new RougeLikePlayer(0, 0, new Weapon(2));

	map.SetNum(mapSizeY);

	for (int i = 0; i < mapSizeY; ++i)
	{
		map[i].SetNum(mapSizeX);
	}

	for (int i = 0; i < mapSizeY; i++)
	{
		for (int j = 0; j < mapSizeX; j++)
		{
			map[i][j] = RandomTile();
		}
	}

	map[0][0] = rougeLikePLayer;
	printMap();
}

// Called every frame
void ARougeLikeController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ARougeLikeController::printMap() {
	for (int i = 0; i < mapSizeY; i++)
	{
		FString row = "";
		for (int j = 0; j < mapSizeX; j++) {
			row.Append(map[i][j]->PrintTile().Append(" "));
		}
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, row);

	}
}
void ARougeLikeController::movePlayer(int amountX, int amountY) {

	int newXPos = rougeLikePLayer->GetPositionX() + amountX;
	int newYPos = rougeLikePLayer->GetPositionY() + amountY;

	//make sure that the new positions are within bounds
	if (newXPos<0 || newXPos>=mapSizeX) {
		newXPos = rougeLikePLayer->GetPositionX(); //would subtracting off the amountX be more effecient here?
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "New X pos out of bounds");

	}
	if (newYPos<0 || newYPos>=mapSizeY) {
		newYPos = rougeLikePLayer->GetPositionY(); //would subtracting off the amountX be more effecient here?
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "New Y pos out of bounds");

	}
	
	//get tile at new position and attempt to move there
	if (map[newYPos][newXPos]->MoveOntoBehavior(rougeLikePLayer, newXPos, newYPos)) {

		map[rougeLikePLayer->GetPositionY()][rougeLikePLayer->GetPositionX()] = new Tile();
		
		rougeLikePLayer->SetPositionX(newXPos);
		rougeLikePLayer->SetPositionY(newYPos);

		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, newXPos);

		map[newYPos][newXPos] = rougeLikePLayer;
	}


	printMap();

}

Tile* ARougeLikeController::RandomTile() {
	int32 randomInt = FMath::RandRange(0, 7);
	int32 weaponPower = FMath::RandRange(2, 7);

	switch (randomInt)
	{
	case 0:
		return  new Tile();
		break;
	case 1:
		return  new Creature(new Weapon(weaponPower), weaponPower, this);
		break;
	case 2:
		return  new ItemTile(new Weapon(weaponPower));
		break;
	case 3:
		return new Tile();
	case 4:
		return new GoldTile();
		break;
	case 5:
		return new Wall();
		break;
	case 6:
		return new PotionTile();
		break;
	default:
		return  new Tile();
		break;
	}
}

void ARougeLikeController::startFight(Creature * defender, Creature * attacker, int defenderLocationx, int defenderLocationY) {
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "fighting");

	if (attacker->getWeapon() !=nullptr && defender->getWeapon() != nullptr) {
		int defenderhp = defender->getHp() - attacker->getWeapon()->getDamage();
		int attackerhp = attacker->getHp() - defender->getWeapon()->getDamage();
		if (defenderhp <= 0) {

		}
		if (attackerhp <= 0) {

		}
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, "Weapon is null");

	}	

	
}

