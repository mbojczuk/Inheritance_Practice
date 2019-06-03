#pragma once
#ifndef  SWORD_H
#define SWORD_H

#include "stdafx.h"
#include "Weapon.h"
#include <string>

//.h file inherits weapon and uses the base constructor and adds its own consturctor to it
class Sword : public Weapon
{

private:
	int sharpness;
	int durability;
	string Type;

public:
	void setSharpness(int sharpness);
	void setDurability(int durability);

	int getSharpness();
	int getDurability();

	//this is how to use a base class contructor and add your own constructor to it
	Sword(string Name, string Type, int range, int damageMod, int sharpness, int durability) :Weapon(Name, Type, range, damageMod)
	{
		this->durability = durability;
		this->sharpness = sharpness;
	}

	void display();
};

#endif // ! SWORD_H