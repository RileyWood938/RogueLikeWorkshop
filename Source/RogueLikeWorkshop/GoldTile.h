// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "RougeLikePlayer.h"
#include "Tile.h"
#include "CoreMinimal.h"

/**
 * 
 */
class ARougeLikeController;
class ROGUELIKEWORKSHOP_API GoldTile : public Tile
{
public:
	GoldTile();
	GoldTile(float tileContents);
	~GoldTile();
	virtual bool MoveOntoBehavior(class RougeLikePlayer* target, int moveLocationX, int moveLocationY, ARougeLikeController* caller) override;
	virtual FString PrintTile() override;

private:
	float contents;
};
