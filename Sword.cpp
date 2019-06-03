#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include "stdafx.h"
#include "Sword.h"

//setters and getters for the sword class which inherits weapon
void Sword::setSharpness(int sharpness)
{
	this->sharpness = sharpness;
}

void Sword::setDurability(int durability)
{
	this->durability = durability;
}

int Sword::getSharpness()
{
	return sharpness;
}

int Sword::getDurability()
{
	return durability;
}

void Sword::display()
{
	Weapon::display();
	cout << "Durability: " << getDurability() << endl;
	cout << "Sharpness: " << getSharpness() << endl;
}
