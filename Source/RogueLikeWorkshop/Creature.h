// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Weapon.h"
#include "Tile.h"
#include "CoreMinimal.h"

/**
 * 
 */
class ARougeLikeController;
class ROGUELIKEWORKSHOP_API Creature : public Tile
{

public:
	Creature();
	~Creature();
	Creature(Weapon* inWeapon, int inHp, int inGold, ARougeLikeController* inOwner);
	virtual bool MoveOntoBehavior(RougeLikePlayer* target, int moveLocationX, int moveLocationY, ARougeLikeController* caller) override;
	Weapon* changeWeapon(Weapon* item);
	virtual FString PrintTile() override;
	virtual void changeGold(int goldChange);
	int getHp();
	virtual void setHp(int newHp);
	Weapon* getWeapon();
	int getGold();

protected:
	int hp;
	int gold;
	Weapon* activeWeapon;
};
