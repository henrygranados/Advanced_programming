#include "Geff.h"

Geff::Geff()
	:Weapon()
{}

Geff::Geff(int d, int h)
	:Weapon("Geff", d, h)
{}

Geff::Geff(const Geff & other)
	:Weapon(other)
{}


bool Geff::isHit() const
{
	int hit = rand() % 100 + 1;

	return hit <= hitProbability;
}
