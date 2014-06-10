#ifndef SPEAR_H
#define SPEAR_H
#include "Weapon.h"

class Spear: public Weapon
{
public:
	Spear();						//Default Constructor
	Spear(int, int);		//Parameter Constructor
	Spear(const Spear & );			//Copy constructor

	//overridden method
	virtual bool isHit() const;
};
#endif
