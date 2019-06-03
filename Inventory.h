#pragma once
#ifndef  INVENTORY_H
#define INVENTORY_H

#include "stdafx.h"
#include "Inventory.h"
#include "Sword.h"
#include <cstdio>
#include <iostream>
#include <string>
#include <map>

//the .h file so we can use it across other scripts
using namespace std;

class Inventory
{
	private:
		const int itemSlots = 10;

	public:
		void addSword(map<string, Sword> & inv, Sword & temp);
		void eraseSword(map<string, Sword> & inv);
		void printSwords(map<string, Sword> & inv);

};


#endif // ! INVENTORY_H