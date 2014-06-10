#include "Beff.h"

Beff::Beff()
	:Weapon()
{}

Beff::Beff(int d, int h)
	:Weapon("Beff", d, h)
{}

Beff::Beff(const Beff & other)
	:Weapon(other)
{}


bool Beff::isHit() const
{
	int hit = rand() % 100 + 1;

	return hit <= hitProbability;
}
