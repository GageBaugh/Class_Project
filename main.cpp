#include<iostream>
#include "Classroom_H.h"
#include "Professor_H.h"

using namespace std;

int main()
{
	// Classroom
	Classroom c;
	c.setClassroomID("mat420");
	c.setClassroomCap(69);
	c.setClassroomType("Math");
	c.setBuilding("Math Building Epic");

	cout << "Classroom ID: " << c.getClassroomID() << endl;
	cout << "Classroom Cap: " << c.getClassroomCap() << endl;
	cout << "Classroom Type: " << c.getClassroomType() << endl;
	cout << "Classroom Building: " << c.getBuilding() << endl;

	// Professor
	Professor p;
	p.setProfName("Will Smith");
	p.setLunchTime(1900);
	p.setProfID("Slap God");
	p.addExpertise("Slapping");
	p.addExpertise("Acting");
	p.addExpertise("White Knighting");
	p.removeExpertise("Acting");
	p.removeExpertise("Youtube Rewind");
	LinkedList expertise = p.getExpertise();
	
	cout << "Professor Name: " << p.getProfName() << endl;
	cout << "Professor Lunch Time: " << p.getLunchTime() << endl;
	cout << "Professor ID: " << p.getProfID() << endl;
	cout << "Professor Expertise: |";
	for (int i = 1; i <= expertise.getSize(); i++)
	{
		cout << expertise.getItem(i) << "|";
	}

	return 0;
}