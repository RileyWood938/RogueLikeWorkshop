// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Item.h"
#include "Tile.h"
#include "CoreMinimal.h"

/**
 *
 */
class ROGUELIKEWORKSHOP_API Wall : public Tile
{

public:
	Wall();
	~Wall();
	virtual bool MoveOntoBehavior(class RougeLikePlayer* target, int moveLocationX, int moveLocationY) override;
	virtual FString PrintTile() override;

};
