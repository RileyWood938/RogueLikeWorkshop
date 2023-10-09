// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Item.h"
#include "Weapon.h"
#include "Tile.h"
#include "RougeLikePlayer.h"
#include "Creature.h"
#include "CoreMinimal.h"

/**
 * 
 */
class ROGUELIKEWORKSHOP_API ItemTile : public Tile
{
public:
	ItemTile();
	ItemTile(Item* incontents);
	~ItemTile();
	virtual bool MoveOntoBehavior(class RougeLikePlayer* target, int moveLocationX, int moveLocationY) override;
	virtual FString PrintTile() override;

private:
	Item* contents;
};
