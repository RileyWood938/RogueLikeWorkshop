// Fill out your copyright notice in the Description page of Project Settings.


#include "GoldTile.h"

GoldTile::GoldTile()
{
	contents = 5;
}

GoldTile::GoldTile(float tileContents) 
{
	contents = tileContents;
}

GoldTile::~GoldTile()
{
}

bool GoldTile::MoveOntoBehavior(RougeLikePlayer* target, int moveLocationX, int moveLocationY)
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, "tryMoveToGoldTile");

	target->changeGold(contents);
	contents = 0;
	return true;
}

FString GoldTile::PrintTile() 
{
	return "G";
}
