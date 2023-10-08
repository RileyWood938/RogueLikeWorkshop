// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Creature.h"
#include "CoreMinimal.h"

/**
 * 
 */
class ROGUELIKEWORKSHOP_API RougeLikePlayer : public Creature
{
public:
	RougeLikePlayer(int positionX, int positionY);
	~RougeLikePlayer();

private:
	int positionX;
	int positionY;

public:
	void SetPositionX(int newPosition);
	int GetPositionX();
	void SetPositionY(int newPosition);
	int  GetPositionY();
	virtual FString PrintTile() override;
	bool MoveOntoBehavior(RougeLikePlayer* target) override;
	virtual void setHp(int newHp) override;
	virtual void changeGold(int goldChange) override;

};
