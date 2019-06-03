#pragma once
#ifndef  WEAPON_H
#define WEAPON_H

#include "stdafx.h"
#include <cstdio>
#include <iostream>
#include <string>
#include "Weapon.h"

using namespace std;

class Weapon
{

private:
	string Name;
	string Type;
	int range;
	int damageMod;

public:
	//constructors
	Weapon();
	Weapon(string Name, string Type, int range, int damageMod);
	//getters
	string getName();
	string getType();
	int getRange();
	int getdamegMod();
	//setters
	void setName(string Name);
	void setType(string Type);
	void setRange(int range);
	void setdamageMod(int damageMod);


	void display();
};

#endif // ! WEAPON_H
