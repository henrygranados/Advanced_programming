#include "Troth.h"

Troth::Troth()
	:Weapon()
{}

Troth::Troth(int d, int h)
	:Weapon("Troth", d, h)
{}

Troth::Troth(const Troth & other)
	:Weapon(other)
{}


bool Troth::isHit() const
{
	int hit = rand() % 100 + 1;

	return hit <= hitProbability;
}
