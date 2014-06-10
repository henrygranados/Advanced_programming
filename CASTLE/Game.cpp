#include "Game.h"

Game::Game()
{
	castle[0][0].setName("Wall");
	castle[0][1].setName("Queen's Room");  //one
	castle[0][2].setName("Art Room");      //two
	castle[1][0].setName("Wall");
	castle[1][1].setName("Court Yard");    //three
	castle[1][2].setName("Great Hall");    //four
	castle[2][0].setName("Wall");
	castle[2][1].setName("Guard Room");    //five
	castle[2][2].setName("Dungeon");       //six

	castle[0][1].setMonster(new Monster("Gefling", new Geff(4, 20), 6));
	castle[0][2].setMonster(new Monster("Troll", new Troth(5, 50), 13));
	castle[1][2].setMonster(new Monster("Belf", new Beff(3, 35), 7));
	castle[2][1].setMonster(new Monster("Gefling", new Geff(4, 20), 6));
	castle[2][2].setMonster(new Monster("Troll", new Troth(5, 50), 13));

	Adventurer * a = new Adventurer("Willard!", 50);
	a->addWeapon(new Sword(5, 50));
	a->addWeapon(new Axe(4, 50));
	a->addWeapon(new Spear(3, 60));

	row = 1;
	col = 1;

	castle[row][col].setAdventurer(a);
	//visited = false;
}

//Show Position
void Game::showPosition()
{
	//current Position
	cout << castle[row][col].getAdventurer()->getName() << " is in " << castle[row][col].getName() << endl;
	int direction;
	do
	{
		if ( row - 1 >= 0 )
			cout << "0. North: " << castle[row-1][col].getName() << endl;
		if ( row + 1 < 3 )
			cout << "1. South: " << castle[row+1][col].getName() << endl;
		if ( col + 1 < 3)
			cout << "2. East: " << castle[row][col+1].getName() << endl;
		if ( col - 1 >= 0 )
			cout << "3. West: " << castle[row][col-1].getName() << endl;
		cout << "Where do you want to go? ";
		cin >> direction;


	}while(direction < 0 || direction > 3);

	while(true)
	{
		int direction = rand() % 4;

		if ( direction == 0 )
		{
			if ( row - 1 >= 0 && castle[row-1][col].getName() != "Wall")
			{
				cout << "\nHeading North" << endl << endl;
				castle[row-1][col].setAdventurer(castle[row][col].getAdventurer());
				row--;
				break;
			}
		}
		else if ( direction == 1 )
		{
			if ( row + 1 < 3 && castle[row + 1][col].getName() != "Wall")
			{
				cout << "\nHeading South" << endl << endl;
				castle[row+1][col].setAdventurer(castle[row][col].getAdventurer());
				row++;
				break;
			}
		}
		else if ( direction == 3 )
		{
			if ( col + 1 < 3 && castle[row][col + 1].getName() != "Wall" )
			{

				cout << "\nHeading East" << endl << endl;
				castle[row][col+1].setAdventurer(castle[row][col].getAdventurer());
				col++;
				break;
			}
		}
		else if ( direction == 4 )
		{
			if ( col - 1 >= 0 && castle[row][col - 1].getName() != "Wall")
			{
				cout << "\nHeading West" << endl << endl;
				castle[row][col-1].setAdventurer(castle[row][col].getAdventurer());
				col--;
				break;
			}
		}
		/*else
		{
			cout << "\n\n" << endl;
			cout << "Game Drawn" << endl;
			cout << "Adventurer Stuck Cannot Move" << endl << endl;
			//cin.ignore(2);
			//exit(0);
		}*/
	}

	//castle[row][col].display();
}

void Game::Play()
{
	//Run the game
	while( castle[row][col].getAdventurer()->getLife() > 0 && visitCount() < 5)
	{
		showPosition();

		if ( !castle[row][col].isVisited() && castle[row][col].getName() != "Court Yard" )
		{
			castle[row][col].setIsVisited(true);
			castle[row][col].fight();
		}

		cout << endl << endl;
	}

   cout << "Game Ended" << endl;
   castle[row][col].getAdventurer()->display();
   cout << endl << endl;

   if ( castle[row][col].getAdventurer() > 0 )
   {
	   cout << castle[row][col].getAdventurer()->getName() << " Won the Battle" << endl;
	   cout << castle[row][col].getAdventurer()->getName() << " Secured " << castle[row][col].getAdventurer()->getGold() <<
		    " Number of Golds. " << endl << endl;
   }
   else
	   cout << castle[row][col].getAdventurer()->getName() << " Lost the Battle." << endl << endl;
}
