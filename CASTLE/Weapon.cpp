#include "Weapon.h"

Weapon::Weapon()
	: name(""), damageValue(0), hitProbability(0)
{}

Weapon::Weapon(string n, int d, int h)
	: name(n), damageValue(d), hitProbability(h)
{}

Weapon::Weapon(const Weapon & other)
{
	name = other.name;
	damageValue = other.damageValue;
	hitProbability = other.hitProbability;
}

void Weapon::setName(string n)
{
	name = n;
}

void Weapon::setDamage(int d)
{
	damageValue = d;
}

void Weapon::setProbability(int p)
{
	hitProbability = p;
}

string Weapon::getName() const
{
	return name;
}

int Weapon::getDamage() const
{
	return damageValue;
}

int Weapon::getProbability() const
{
	return hitProbability;
}
