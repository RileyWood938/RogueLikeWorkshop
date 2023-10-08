// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Item.h"
#include "CoreMinimal.h"

/**
 * 
 */
class ROGUELIKEWORKSHOP_API Weapon : public Item
{
public:
	Weapon();
	Weapon(int startDamage);
	~Weapon();
	int getDamage();
	void setDamage(int newDamage);

private:
	int Damage;
};
