#ifndef GEFF_H
#define GEFF_H
#include "Weapon.h"

class Geff: public Weapon
{
public:
	Geff();						//Default Constructor
	Geff(int, int);		//Parameter Constructor
	Geff(const Geff & );			//Copy constructor

	//overridden method
	virtual bool isHit() const;
};
#endif
