#include "Spear.h"

Spear::Spear()
	:Weapon()
{}

Spear::Spear(int d, int h)
	:Weapon("Spear", d, h)
{}

Spear::Spear(const Spear & other)
	:Weapon(other)
{}


bool Spear::isHit() const
{
	int hit = rand() % 100 + 1;

	return hit <= hitProbability;
}
