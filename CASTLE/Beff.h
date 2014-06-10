#ifndef BEFF_H
#define BEFF_H
#include "Weapon.h"

class Beff: public Weapon
{
public:
	Beff();						//Default Constructor
	Beff(int, int);		//Parameter Constructor
	Beff(const Beff & );			//Copy constructor

	//overridden method
	virtual bool isHit() const;
};
#endif
