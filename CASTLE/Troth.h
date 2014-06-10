#ifndef TROTH_H
#define TROTH_H
#include "Weapon.h"

class Troth: public Weapon
{
public:
	Troth();						//Default Constructor
	Troth(int, int);		//Parameter Constructor
	Troth(const Troth & );			//Copy constructor

	//overridden method
	virtual bool isHit() const;
};
#endif
