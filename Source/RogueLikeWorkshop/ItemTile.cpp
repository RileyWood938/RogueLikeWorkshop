// Fill out your copyright notice in the Description page of Project Settings.

#include "ItemTile.h"

ItemTile::ItemTile()
{
	contents = new Item();
}

ItemTile::~ItemTile()
{
}

ItemTile::ItemTile(Item* incontents) {
	contents = incontents;
}


bool ItemTile::MoveOntoBehavior(RougeLikePlayer* target, int moveLocationX, int moveLocationY) {
	//target->addToInventory(contents);
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, "tryMoveToItemTile");

	contents = nullptr;
	return true;
}

FString ItemTile::PrintTile() {
	return "0";
}
