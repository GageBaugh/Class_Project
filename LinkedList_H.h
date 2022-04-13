#ifndef LinkedList_H
#define LinkedList_H
#include <iostream>
#include <string>
using namespace std;

template<class T>
class Node
{
public:
	T data;
	Node<T>* next;
};

template <class T>
class LinkedList
{
public:
	LinkedList();
	~LinkedList();

	bool isEmpty();
	//function: chackes if the list is empty
	//pre:	list is initialized
	//post: returns true is empty or returns false if not empty

	void insert(T item);
	//function: inserts an item into the end of the list
	//pre:	list is initialized
	//post: item is inserted into the end of the list

	void remove(T item);
	//function: removes an item from the list
	//pre:	list is initialized
	//		list conatains the item to be removed
	//post: item is removed from list

	void emptyList();
	//function: makes the list empty
	//pre:	list is initialized
	//post: list is empty

	bool itemInList(T item);
	//function: check whether an item is in the list or not
	//pre:	list is initialized
	//post: return true if item is in list or false if item is not in list

	int getSize();
	//function: returns the size of the list
	//pre:	list is initialized
	//post: returns the size in int

	T getItem(int index);
	//function: returns an item by its position
	//pre:	list is initialized
	//		list is not empty
	//post: returns a value at the positionSS



private:
	Node<T>* head;

	Node<T>* loc;



};

template <class T>
LinkedList<T>::LinkedList()
{
	head = nullptr;
	loc = nullptr;
}

template <class T>
LinkedList<T>::~LinkedList()
{
	emptyList();
}

template <class T>
bool LinkedList<T>::isEmpty()
{
	if (head == nullptr)
		return true;

	return false;
}

template <class T>
void LinkedList<T>::insert(T item)
{
	Node<T>* temp = new Node<T>;
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

template <class T>
void LinkedList<T>::remove(T item)
{
	if (!isEmpty())
	{
		Node<T>* temp = new Node<T>();
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

template <class T>
bool LinkedList<T>::itemInList(T item)
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

template <class T>
int LinkedList<T>::getSize()
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

template <class T>
T LinkedList<T>::getItem(int index)
{
	if(index > getSize() || index < 1)
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

template <class T>
void LinkedList<T>::emptyList()
{
	while (!isEmpty())
	{
		remove(getItem(1));
	}
}

#endif