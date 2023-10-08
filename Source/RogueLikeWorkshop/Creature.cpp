// Fill out your copyright notice in the Description page of Project Settings.


#include "Creature.h"

Creature::Creature()
{
}

Creature::~Creature()
{
}

Creature::Creature(Weapon* inWeapon, int inHp) {
	activeWeapon = inWeapon;
	hp = inHp;
}



bool Creature::MoveOntoBehavior(RougeLikePlayer* target) {
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, "tryMoveToCreatureTile");
	owner->StartFight(this, target);
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

