// Fill out your copyright notice in the Description page of Project Settings.


#include "Wall.h"

Wall::Wall()
{
}

Wall::~Wall()
{
}

bool Wall::MoveOntoBehavior(RougeLikePlayer* target) {
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, "tryMoveToWallTile");

	return false;
}

FString Wall::PrintTile() {
	return "X";
}

