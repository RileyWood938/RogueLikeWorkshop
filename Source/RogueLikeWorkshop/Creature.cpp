// Fill out your copyright notice in the Description page of Project Settings.

#include "Creature.h"
#include "RougeLikeController.h"

Creature::Creature()
{
}

Creature::~Creature()
{
}


Creature::Creature(Weapon* inWeapon, int inHp, int inGold) {
	if (inWeapon == nullptr) {
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, "nullWeaponError");
	}
	gold = inGold;
	activeWeapon = inWeapon;
	hp = inHp;
}



bool Creature::MoveOntoBehavior(RougeLikePlayer* target, int moveLocationX, int moveLocationY, ARougeLikeController* caller) {
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, "tryMoveToCreatureTile");
	caller->startFight(this, target, moveLocationX, moveLocationY);
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

int Creature::getGold() {
	return gold;
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

