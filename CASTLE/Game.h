#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <string>
#include "Monster.h"
#include "Adventurer.h"
#include "Weapon.h"
#include "Axe.h"
#include "Beff.h"
#include "Geff.h"
#include "LinkedList.h"
#include "Location.h"
#include "Spear.h"
#include "Sword.h"
#include "Troth.h"
#include "Weapon.h"

class Game
{
private:
	Location castle[3][3];
    int row;
	int col;
public:
	Game();
	void Play();
	void showPosition();

	int visitCount()
	{
		int cnt = 0;
		for(int i=0; i<3; i++)
		{
			for(int j=0; j<3; j++)
			{
				if ( castle[i][j].getName() != "Wall" && castle[i][j].isVisited() )
					cnt++;
			}
		}
	  return cnt;
	}

};
#endif

