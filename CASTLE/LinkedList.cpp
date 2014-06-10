#include "LinkedList.h"



LinkedList::LinkedList()
{
  first_ = NULL;
  last_ = NULL;
  listLen_ = 0;
}

LinkedList::~LinkedList()
{
  while(first_)
  {
	  Node *tmp = first_->next_;
	  delete first_;
	  first_ = tmp;
  }
  delete first_;
  delete last_;
}

void LinkedList::AddLinkToBack(Weapon * ptr)
{

    Node *newNode = new Node();
	newNode->data_ = ptr;
	newNode->next_ = NULL;
    if(first_ == NULL)
	{
	    first_ = last_ = newNode;
		listLen_++;
	}
	else
	{
		Node* tmp = first_;
		while(tmp->next_)
			tmp = tmp->next_;
		tmp->next_ = newNode;
		last_ = newNode;
		listLen_++;
	}
}

Node * LinkedList::RemoveLinkFromFront()
{
    if(first_ == NULL)
	  return 0;
	else
	{
	    Node *tmp = first_;
		first_ = first_->next_;
		if(first_ == NULL)
			first_ = last_ = NULL;
		listLen_--;
		return tmp;
	}
}
Node * LinkedList::GetFirstNode()
{
   if(first_ == NULL)
	   return 0;
   else
	   return first_;
}

long LinkedList::GetListLength()
{
      return listLen_;
}
