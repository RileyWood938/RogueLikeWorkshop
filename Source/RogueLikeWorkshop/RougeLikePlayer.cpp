// Fill out your copyright notice in the Description page of Project Settings.

#include "RougeLikePlayer.h"

RougeLikePlayer::RougeLikePlayer(int positionX, int positionY, Weapon* inWeapon, int inGold)
{
	this->positionX = positionX;
	this->positionY = positionY;
	this->activeWeapon = inWeapon;
	this->hp = 25;
	this->gold = inGold;
}

RougeLikePlayer::~RougeLikePlayer()
{
}

FString RougeLikePlayer::PrintTile() {
	return "P";
}

bool RougeLikePlayer::MoveOntoBehavior(RougeLikePlayer* target, int moveLocationX, int moveLocationY, ARougeLikeController* caller) {
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, "tryMoveToPlayerTile");

	return true;
}
void RougeLikePlayer::SetPositionX(int newPosition) {
	positionX = newPosition;
}
int RougeLikePlayer::GetPositionX() {
	return positionX;
}
void RougeLikePlayer::SetPositionY(int newPosition) {
	positionY = newPosition;
}
int  RougeLikePlayer::GetPositionY() {
	return positionY;
}
void RougeLikePlayer::setHp(int newHp) {
	Creature::setHp(newHp);
	FString message = "Your HP is: ";
	message.AppendInt(hp);
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, message);

}

void RougeLikePlayer::changeGold(int goldChange) {
	gold += goldChange;
	FString message = "Gold: ";
	message.AppendInt(gold);
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, message);

}
