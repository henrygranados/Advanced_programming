#include "Location.h"

Location::Location()
	: name("")
{
	monster = 0;
	adventurer = 0;
	visited = false;
}

Location::Location(string n)
	: name (n)
{
	monster = 0;
	adventurer = 0;
	visited = false;
}

void Location::setName(string n)
{
	name = n;
}

void Location::setMonster(Monster * m)
{
	monster = m; //new Monster( * m);
}

Monster * Location::getMonster() const
{
	return monster;
}

Adventurer * Location::getAdventurer() const
{
	return adventurer;
}

void Location::setAdventurer(Adventurer * a)
{
	adventurer = a; //new Adventurer(*a);
}

void Location::fight()
{
	cout << adventurer->getName() << " Entered in " << name << endl << endl;
	cout << monster->getName() << " resides at " << name << endl << endl;
	cout << "Combat Begins: " << endl << endl ;
	adventurer->chooseWeapon();

	while( monster->getLife() > 0 && adventurer->getLife() > 0)
	{
		cout << adventurer->getName() << " swings " << adventurer->getWeaponName();

		if ( adventurer->isHit() )
		{
			int mLife = monster->getLife();
			int damage = adventurer->getDamage();
			int remaining = mLife - damage;
			cout << " Hits!. " << monster->getName() << " loses " << damage << " hits, and remaining ";
			cout << remaining << " Hist!" << endl << endl;
			monster->setLife(remaining);

			if ( monster->getLife() <= 0)
			{
				cout << monster->getName() << " is dead" << endl;
				cout << adventurer->getName() << " Won 100 Golds" << endl;
				adventurer->addGold(100);
				return;
			}
		}
		else
		   cout << " Misses." << endl << endl;


		if ( monster->isHit())
		{
			int mLife = adventurer->getLife();
			int damage = monster->getDamage();
			int remaining = mLife - damage;
			cout << " Hits!. " << adventurer->getName() << " loses " << damage << " hits, and remaining ";
			cout << remaining << " Hist!" << endl << endl;
			adventurer->setLife(remaining);

			if ( adventurer->getLife() <= 0)
			{
				cout << adventurer->getName() << " is dead" << endl;
				cout << adventurer->getName() << " Lost the Game" << endl;
				return;
			}
		}
		else
			cout << monster->getName() << " Misses." << endl;
	}
}
