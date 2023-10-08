// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "tile.h"
#include "RougeLikePlayer.h"
#include "CoreMinimal.h"

/**
 * 
 */
class ROGUELIKEWORKSHOP_API PotionTile : public Tile
{
public:
	PotionTile();
	PotionTile(int potionTileStrength);
	~PotionTile();
	virtual bool MoveOntoBehavior(RougeLikePlayer* target) override;
	virtual FString PrintTile() override;

private:
	int potionStrength;
};
