#include <iostream>
#include <string>
#include "Game.h"
#include "Adventurer.h"
#include "Axe.h"
#include "Spear.h"
#include "Sword.h"
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand((int) time(NULL));

	Game game;

	cout << "*** Welcome to Adventure Game ** " << endl;
	cout << "This is a Simple Adventure game" << endl;
	cout << "Where an Adventurer fights with Monsters and Secure Golds" << endl;
	cout << "Each Room has 100 Golds, a Monster to Fight" << endl;
	cout << "You fight with Monster, and collect Gold" << endl;
	cout << "You can Move, North, South, East and West" << endl;
	cout << "Adventure Begins now........." << endl << endl;

	game.Play();
	cin.ignore(100, '\n');
	return 0;
}
