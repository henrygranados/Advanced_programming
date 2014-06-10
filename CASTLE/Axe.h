#ifndef AXE_H
#define AXE_H
#include "Weapon.h"

class Axe: public Weapon
{
public:
	Axe();						//Default Constructor
	Axe(int, int);		//Parameter Constructor
	Axe(const Axe & );			//Copy constructor

	//overridden method
	virtual bool isHit() const;
};
#endif
