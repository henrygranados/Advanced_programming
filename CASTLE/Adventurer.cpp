#include "Adventurer.h"

Adventurer::Adventurer()
	: name(""), life(0), gold(0), curWeapon(0)
{
	//weapons = new LinkedList<Weapon>();
}

Adventurer::Adventurer(string n, int f)
	: name(n), life(f), gold(0), curWeapon(0)
{
	//weapons = new LinkedList<Weapon>();

}

//manipulators
void Adventurer::setLife(int f)
{
	life = f;
}

void Adventurer::decLife(int f)
{
	life -= f;
}

void Adventurer::addGold(int g)
{
	gold += g;
}

void Adventurer::addWeapon(Weapon * w)
{
	weapons.AddLinkToBack(w);
}

void Adventurer::chooseWeapon()
{
	curWeapon = weapons.getWeapon();
}

//accessors

int Adventurer::getLife() const
{
	return life;
}

int Adventurer::getGold() const
{
   return gold;
}

bool Adventurer::isHit() const
{
	return curWeapon->isHit();
}

int Adventurer::getDamage() const
{
	return curWeapon->getDamage();
}
