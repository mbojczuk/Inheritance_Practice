#include "stdafx.h"
#include "Inventory.h"
#include "Sword.h"
#include <string>
#include <iostream>
#include <map>
#include <cstdio>

//takes an input of a map that uses a string to pair it with a sword 
//class item and a sword item, then adds the new sword to the inventory based on its .name()
void Inventory::addSword(map<string, Sword> & inv, Sword & temp)
{
	string name = temp.getName();
	inv.insert(make_pair(name, temp));
}

//function to remove a sword by its string name from inventory
void Inventory::eraseSword(map<string, Sword> & inv)
{
	string name;
	cout << "Put the name of the sword you would like to destroy: " << endl;
	cin >> name;
	inv.erase(name);
}

//prints everything in the map
void Inventory::printSwords(map<string, Sword> & inv)
{
	for (auto pair : inv)
	{
		pair.second.display();
	}
}