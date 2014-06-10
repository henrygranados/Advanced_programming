#include "Sword.h"

Sword::Sword()
	:Weapon()
{}

Sword::Sword(int d, int h)
	:Weapon("Sword", d, h)
{}

Sword::Sword(const Sword & other)
	:Weapon(other)
{}


bool Sword::isHit() const
{
	int hit = rand() % 100 + 1;

	return hit <= hitProbability;
}

