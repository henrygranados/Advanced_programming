#include "Axe.h"

Axe::Axe()
	:Weapon()
{}

Axe::Axe(int d, int h)
	:Weapon("Axe", d, h)
{}

Axe::Axe(const Axe & other)
	:Weapon(other)
{}


bool Axe::isHit() const
{
	int hit = rand() % 100 + 1;

	return hit <= hitProbability;
}
