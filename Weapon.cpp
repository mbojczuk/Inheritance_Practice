#include <cstdio>
#include <iostream>
#include "stdafx.h"
#include "Weapon.h"

using namespace std;

	Weapon::Weapon()
	{
		Name = "";
		Type = "";
		range = 0;
		damageMod = 0;
	}

	Weapon::Weapon(string Name, string Type, int range, int damageMod)
	{
		this->Name = Name;
		this->Type = Type;
		this->range = range;
		this->damageMod = damageMod;
	}

	string Weapon::getName()
	{
		return Name;
	}

	string Weapon::getType()
	{
		return Type;
	}

	int Weapon::getRange()
	{
		return range;
	}

	int Weapon::getdamegMod()
	{
		return damageMod;
	}

	void Weapon::setName(string Name)
	{
		this->Name = Name;
	}

	void Weapon::setType(string Type)
	{
		this->Type = Type;
	}

	void Weapon::setRange(int range)
	{
		this->range = range;
	}

	void Weapon::setdamageMod(int damageMod)
	{
		this->damageMod = damageMod;
	}

	void Weapon::display()
	{
		cout << "Name: " << getName() << endl;
		cout << "Type: " << getType() << endl;
		cout << "Damage Modifier: " << getdamegMod() << endl;
		cout << "Weapon Length: " << getRange() << endl;
	}
//};