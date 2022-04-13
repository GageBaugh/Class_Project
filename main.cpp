#include<iostream>
#include<fstream>
#include "Classroom_H.h"
#include "Professor_H.h"

using namespace std;

int main()
{

	ofstream testFile;
	testFile.open("Test.txt");
	

	testFile << "Carry on my wayward son" << endl;

	testFile << "Test x 2";

	testFile.close();

	// Classroom
	Classroom c;
	c.setClassroomID("mat420");
	c.setClassroomCap(69);
	c.setClassroomType("Math");
	c.setBuilding("Math Building Epic");
	c.addCourse("JK69");
	c.addCourse("AK47");
	c.addCourse("AR15");
	c.addCourse("BS81");
	c.addCourse("NO19");
	c.addCourse("YES082");

	c.storeClass();
	Classroom newC;
	newC.extractClass("mat420");

	cout << "Classroom ID: " << newC.getClassroomID() << endl;
	cout << "Classroom Cap: " << newC.getClassroomCap() << endl;
	cout << "Classroom Type: " << newC.getClassroomType() << endl;
	cout << "Classroom Building: " << newC.getBuilding() << endl;

	LinkedList<string> classCourses = newC.getCourses();

	for (int i = 1; i <= classCourses.getSize(); i++)
	{
		cout << classCourses.getItem(i) << "|";
	}

	cout << endl;

	// Professor
	Professor p;
	p.setProfName("Will Smith");
	p.setLunchTime(1900);
	p.setProfID("Slap God");
	p.addExpertise("Slapping");
	p.addExpertise("Acting");
	p.addExpertise("White Knighting");
	p.addCourse("TF78");
	p.addCourse("HY87");
	p.addCourse("JI89");
	p.addCourse("L45T1T3M");


	p.storeClass();

	Professor newP;

	newP.extractClass("Slap God");

	LinkedList<string> courses = newP.getCourses();
	LinkedList<string> expertise = newP.getExpertise();

	cout << "Professor Name: " << newP.getProfName() << endl;
	cout << "Professor Lunch Time: " << newP.getLunchTime() << endl;
	cout << "Professor ID: " << newP.getProfID() << endl;
	cout << "Professor Expertise: |";
	for (int i = 1; i <= expertise.getSize(); i++)
	{
		cout << expertise.getItem(i) << "|";
	}

	cout << endl << "Courses: ";

	for (int i = 1; i <= courses.getSize(); i++)
	{
		cout << courses.getItem(i) << "|";
	}
	
	return 0;
}