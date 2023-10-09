// Fill out your copyright notice in the Description page of Project Settings.


#include "PotionTile.h"

PotionTile::PotionTile()
{
	potionStrength = 5;
}

PotionTile::PotionTile(int potionTileStrength)
{
	potionStrength = potionTileStrength;
}

PotionTile::~PotionTile()
{
}

bool PotionTile::MoveOntoBehavior(RougeLikePlayer* target, int moveLocationX, int moveLocationY) {
	target->setHp(target->getHp() + potionStrength);
	return true;
}
FString PotionTile::PrintTile() {
	return "H";
}