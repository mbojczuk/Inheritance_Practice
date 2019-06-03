// ConsoleApplication1.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include <map>

#include "Weapon.h"
#include "Sword.h"
#include "Inventory.h"

using namespace std;

//this stores the text so we can use it for the story and splits it
void TextReader(ifstream  & file, map<string, string>& m)
{
	string line;
	string temp;
	int count = 0;
	if (file.is_open())
	{
		while (getline(file, line))
		{
			for(unsigned int i = 0; i < line.length(); i++)
			{
				if (line[i] != '%')
				{
					temp += line[i];
				}
				else
				{
					m.insert(make_pair("Part" + to_string(count), temp));
					count++;
					temp.clear();
				}
			}
		}
		file.close();
	}
	else cout << "Unable to open file"  <<endl;
};

int main()
{
	//containers for adventurers swords and the script
	map<string, string> storyLine;
	map<string, Sword> storage;

	//reference to the inventory class
	Inventory inv;

	//setting up the script
	ifstream myfile("PartOne.txt");
	TextReader(myfile, storyLine);

	//first part of the script
	cout << storyLine["Part0"] << endl;

	//creating swords using the constructor which inherits from weapon
	cout << "displaying kingsword" << endl;
	Sword kingSword("KingSword", "LongSword", 2, 5, 100, 100);
	kingSword.display();

	cout << "displaying nosword" << endl;
	Sword nosword("Nosword", "SmallSword", 1, 3, 90, 100);
	nosword.display();

	//testing the getters and setters
	cout << "Removing 10 durability from kingsword" << endl;
	kingSword.setDurability(kingSword.getDurability() - 10);
	kingSword.display();

	//adding to inventory
	cout << "adding swords to inventory" << endl;
	inv.addSword(storage, kingSword);
	inv.addSword(storage, nosword);

	//printing inventory
	cout << "printing inventory" << endl;
	inv.printSwords(storage);

	//removing from inventory passing across the inventory map
	cout << "removing inventory" << endl;
	inv.eraseSword(storage);

	//printing after removing
	cout << "printing inventory" << endl;
	inv.printSwords(storage);

	int num;
	cout << ("If you understand please press 1") << endl;
	cin >> num;


    return 0;
}

