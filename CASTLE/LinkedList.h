#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Weapon.h"
#include <iostream>

using namespace std;


struct Node
{
    Weapon * data_;
    Node* next_;

    Node()
    {
        data_ = 0;
        next_ = 0;
    }
};

class LinkedList
{
private:
    Node* first_;
    Node* last_;
    long listLen_;

public:
    LinkedList();
    ~LinkedList();
    void AddLinkToBack(Weapon * ptr);
    Node * RemoveLinkFromFront();
    Node * GetFirstNode();
    long GetListLength();

	//Get random weapon
	Weapon * getWeapon()
	{
		int w = rand() % listLen_;

		int x = 0;
		Node * cur = first_;
		while(cur)
		{
			if ( x == w )
			{
				return cur->data_;
			}
			cur = cur->next_;
			x++;
		}
		return 0;
	}

	//print
	void print() const
	{
		Node * cur = first_;
		while(cur)
		{
			cur->data_->print();
			cur = cur->next_;
		}
	}

};


#endif
