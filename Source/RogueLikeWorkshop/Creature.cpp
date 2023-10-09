// Fill out your copyright notice in the Description page of Project Settings.

#include "RougeLikeController.h"
#include "Creature.h"

Creature::Creature()
{
}

Creature::~Creature()
{
}


Creature::Creature(Weapon* inWeapon, int inHp, ARougeLikeController* inOwner) {
	if (inWeapon == nullptr) {
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, "nullWeaponError");

	}
	activeWeapon = inWeapon;
	hp = inHp;
	owner = inOwner;
}



bool Creature::MoveOntoBehavior(RougeLikePlayer* target, int moveLocationX, int moveLocationY) {
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, "tryMoveToCreatureTile");
	owner->startFight(this, target, moveLocationX, moveLocationY);
	return false;
}

Weapon* Creature::changeWeapon(Weapon* item) {
	Weapon* tempItem = activeWeapon;
	activeWeapon = item;
	return tempItem;
}

FString Creature::PrintTile() {
	return "M";
}

void Creature::changeGold(int goldChange) {
	gold += goldChange;

}

int Creature::getHp() {
	return hp;
}
void Creature::setHp(int newHp) {
	hp = newHp;
}

Weapon* Creature::getWeapon() {
	return activeWeapon;

}

