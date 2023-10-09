// Fill out your copyright notice in the Description page of Project Settings.

#include "ItemTile.h"
#include "RougeLikeController.h"


ItemTile::ItemTile()
{
	contents = new Weapon(1);
}

ItemTile::~ItemTile()
{
}

ItemTile::ItemTile(Weapon* incontents) {
	contents = incontents;
}


bool ItemTile::MoveOntoBehavior(RougeLikePlayer* target, int moveLocationX, int moveLocationY, ARougeLikeController* caller) {
	FString message = "Press Space to pick up a new Weapon? Weapon power is: ";
	message.AppendInt(contents->getDamage());
	message.Append(" (press Space to collect)");
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, message );
	caller->updateWeaponCache(contents);
	caller->setPlayerOnItemTile(true);
	contents = nullptr;
	return true;
}

FString ItemTile::PrintTile() {
	return "0";
}
