#include<iostream>
#include<fstream>
#include "Classroom_H.h"
#include "Professor_H.h"

using namespace std;

int main()
{
	Classroom c;
	c.userInputData();
	c.storeClass();

	Professor p;
	p.userInputData();
	p.storeClass();

	return 0;
}