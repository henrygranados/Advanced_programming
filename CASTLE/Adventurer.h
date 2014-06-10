#ifndef ADVENTURER_H
#define ADVENTURER_H
#include <iostream>
#include <string>
#include <cstdlib>
#include "Spear.h"
#include "LinkedList.h"
using namespace std;

class Adventurer
{
private:
	string name;
	int life;
	LinkedList weapons;
	int gold;
	Weapon * curWeapon;

public:
	Adventurer();								//Default constructor
	Adventurer(string, int);					//parameter constructor

	//manipulators
	void setLife(int);
	void decLife(int);
	void addGold(int);
	void addWeapon(Weapon *);
	void chooseWeapon();

	//accessors
	int getLife() const;
	int getGold() const;

	bool isHit() const;
	int getDamage() const;
	string getName() const
	{
		return name;
	}

	string getWeaponName()
	{
		return curWeapon->getName();
	}

	//test
	void display() const
	{
		cout << "Name: " << name << endl;
		cout << "Lives: " << life << endl;
		cout << "Gold: " << gold << endl;
		cout << "Weapons: " << endl;
		weapons.print();
	}
};
#endif
