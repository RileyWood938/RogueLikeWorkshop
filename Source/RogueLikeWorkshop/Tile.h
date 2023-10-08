// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"

/**
 * 
 */
class ROGUELIKEWORKSHOP_API Tile
{

public:
	Tile();
	~Tile();
	virtual bool MoveOntoBehavior(class RougeLikePlayer* target);
	virtual FString PrintTile();
};
 