#include "Monster.h"

Monster::Monster()
	: name(""), life(0)
{
	weapon = NULL;
}

Monster::Monster(string n, Weapon * w, int f)
	: name(n), life(f)
{
	weapon = new Weapon(*w);
}

Monster::Monster(const Monster & other)
{
	name = other.name;
	life = other.life;
	weapon = new Weapon(*other.weapon);
}

bool Monster::isHit() const
{
	return weapon->isHit();
}

int Monster::getDamage()
{
	return weapon->getDamage();
}

int Monster::getLife()
{
	return life;
}

void Monster::setLife(int f)
{
	life = f;
}

void Monster::setName(string n)
{
	name = n;
}
