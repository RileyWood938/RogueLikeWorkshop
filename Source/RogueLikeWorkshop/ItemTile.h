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
class ARougeLikeController;

class ROGUELIKEWORKSHOP_API ItemTile : public Tile
{
public:
	ItemTile();
	ItemTile(Weapon* incontents);
	~ItemTile();
	virtual bool MoveOntoBehavior(class RougeLikePlayer* target, int moveLocationX, int moveLocationY, ARougeLikeController* caller);
	virtual FString PrintTile() override;

private:
	Weapon* contents;
};
