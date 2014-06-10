#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Weapon
{
protected:
	string name;
	int damageValue;
	int hitProbability;

public:
	Weapon();							//default constructor
	Weapon(string, int, int);			//parameter constructor
	Weapon(const Weapon &);			//Copy Constructor

	//setter functions
	void setName(string);				//Set name
	void setDamage(int);				//Set damamge value
	void setProbability(int);			//Set the probability to hit

	//Getter functions
	string getName() const;				//Get name of weapon
	int getDamage() const;				//Get damage value
	int getProbability() const;			//Get Propbability of hit

	//virtual functino
	virtual bool isHit() const
	{ return false;}				//Function to check if the hit is
		//successful, otherwise false

	void print()
	{
		cout << "Name: " << name << " Damage: " <<
				damageValue<< " Probability: " << hitProbability << endl;
	}
};
#endif
