#ifndef LOCATION_H
#define LOCATION_H
#include <iostream>
#include <string>
#include "Monster.h"
#include "Adventurer.h"

class Location
{
private:
   string name;
   Monster * monster;
   Adventurer * adventurer;
   bool visited;
public:
	Location();
	Location(string);
	void setName(string);
	void setMonster(Monster * );
	string getName(){return name;}
	Monster * getMonster() const;
	Adventurer * getAdventurer() const;
	void setAdventurer(Adventurer *);
	void fight();
	void setIsVisited(bool v) { visited = v; }
	bool isVisited() { return visited;}

   void display()
   {
	   cout << endl << endl;
	   cout << name << endl << endl;
	   adventurer->display();
	   cout << endl;
	   monster->display();
   }
};
#endif

