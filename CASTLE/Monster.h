#ifndef MONSTER_H
#define MONSTER_H
#include "Weapon.h"
#include <iostream>
#include <string>

using namespace std;

class Monster
{
private:
	string name;
	Weapon * weapon;
	int life;
public:
	Monster();								//default constructor
	Monster(string, Weapon *, int);			//Parameter Constructor
	Monster(const Monster &);				//Copy constructor
	bool isHit() const;						//Hit
	int getDamage();						//get damamge
	int getLife();							//get life
	void setLife(int);						//set life
	void setName(string);					//set name
	string getName(){return name;};
	string getWeaponName()
	{
		return weapon->getName();
	}

	void display()
	{
	   cout << "Name: " << name << endl;
	   cout << "Life: " << life << endl;
	   cout << "Weapon: " << endl;
	   weapon->print();
	   cout << endl;
	}
};

#endif
