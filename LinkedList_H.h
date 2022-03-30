#ifndef LinkedList_H
#define LinkedList_H

#include <string>
using namespace std;

typedef string itemType;

struct Node
{
	itemType data;
	Node* next;
};

class LinkedList
{
public:
	LinkedList();
	~LinkedList();

	bool isEmpty();
	//function: chackes if the list is empty
	//pre:	list is initialized
	//post: returns true is empty or returns false if not empty

	void insert(itemType item);
	//function: inserts an item into the end of the list
	//pre:	list is initialized
	//post: item is inserted into the end of the list

	void remove(itemType item);
	//function: removes an item from the list
	//pre:	list is initialized
	//		list conatains the item to be removed
	//post: item is removed from list

	bool itemInList(itemType item);
	//function: check whether an item is in the list or not
	//pre:	list is initialized
	//post: return true if item is in list or false if item is not in list

	int getSize();
	//function: returns the size of the list
	//pre:	list is initialized
	//post: returns the size in int

	itemType getItem(int index);
	//function: returns an item by its position
	//pre:	list is initialized
	//		list is not empty
	//post: returns a value at the position

private:
	Node* head;

	Node* loc;

};
#endif