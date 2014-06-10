#ifndef SWORD_H
#define SWORD_H
#include "Weapon.h"

class Sword: public Weapon
{
public:
	Sword();						//Default Constructor
	Sword(int, int);		//Parameter Constructor
	Sword(const Sword & );			//Copy constructor

	//overridden method
	virtual bool isHit() const;
};
#endif
