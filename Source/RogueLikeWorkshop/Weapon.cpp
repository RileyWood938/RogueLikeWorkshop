// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"

Weapon::Weapon()
{
	Damage = 1;
}

Weapon::Weapon(int startDamage) {
	Damage = startDamage;
}
Weapon::~Weapon()
{
}

int Weapon::getDamage() {
	return Damage;
}

void Weapon::setDamage(int newDamage) {
	Damage = newDamage;
}