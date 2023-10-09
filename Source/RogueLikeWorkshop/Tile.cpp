// Fill out your copyright notice in the Description page of Project Settings.


#include "Tile.h"

Tile::Tile()
{
}

Tile::~Tile()
{
}

bool Tile::MoveOntoBehavior(RougeLikePlayer* target, int moveLocationX, int moveLocationY) {
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, "tryMoveToTile");

	return true;
}

FString Tile::PrintTile() {
	return " . ";
}