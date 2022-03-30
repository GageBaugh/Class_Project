#include "LinkedList_H.h"

#include<iostream>

using namespace std;

LinkedList::LinkedList()
{
	head = nullptr;
	loc = nullptr;
}

LinkedList::~LinkedList()
{

}

bool LinkedList::isEmpty()
{
	if (head == nullptr)
		return true;

	return false;
}

void LinkedList::insert(itemType item)
{
	Node* temp = new Node;
	temp->data = item;
	temp->next = nullptr;
	if (!isEmpty())
	{
		loc = head;
		while (loc->next != nullptr)
		{
			loc = loc->next;
		}
		loc->next = temp;
	}
	else
	{
		head = temp;
	}
	
}

void LinkedList::remove(itemType item)
{
	if (!isEmpty())
	{
		Node* temp = new Node();
		loc = head;
		if (head->data == item)
		{
			loc = head->next;
			temp = head;
			head = loc;
			delete(temp);
		}
		else
		{
			while (loc->data != item && loc->next != nullptr)
			{
				temp = loc;
				loc = loc->next;
			}
			if (loc->data != item && loc->next == nullptr)
			{
				cout << "Item not in list" << endl;
			}
			else
			{
				temp->next = loc->next;
				delete(loc);
			}
		}
		
	}
}

bool LinkedList::itemInList(itemType item)
{
	if (!isEmpty())
	{
		loc = head;
		if (head->data == item)
		{
			return true;
		}
		else
		{
			while (loc->data != item && loc->next != nullptr)
			{
				loc = loc->next;
			}
			if (loc->data != item && loc->next == nullptr)
			{
				return false;
			}
			else
			{
				return true;
			}
		}
	}
	return false;
}

int LinkedList::getSize()
{
	loc = head;
	int curSize = 0;
	if (!isEmpty())
	{
		curSize += 1;
		while (loc->next != nullptr)
		{
			curSize += 1;
			loc = loc->next;
		}
		return curSize;
	}
	else
		return curSize;
}

itemType LinkedList::getItem(int index)
{
	if(index > getSize())
	{
		cout << "Error out of bounds" << endl;
	}
	else
	{
		loc = head;
		for (int i = 1; i < index; i++)
		{
			loc = loc->next;
		}
		return loc->data;
	}
}
