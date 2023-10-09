// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"

/**
 * 
 */
class ARougeLikeController;

class ROGUELIKEWORKSHOP_API Tile
{

public:
	Tile();
	~Tile();
	virtual bool MoveOntoBehavior(class RougeLikePlayer* target, int moveLocationX, int moveLocationY, ARougeLikeController* caller);
	virtual FString PrintTile();
};
 