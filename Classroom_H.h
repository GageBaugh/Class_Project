#ifndef Classroom_H
#define Classroom_H
#include "LinkedList_H.h"
#include<string>
#include<fstream>
#include<sstream>

using namespace std;

class Classroom
{
public:
	Classroom();
	~Classroom();

	void setClassroomID(string classroomID_);
	//function: sets value of classroomID
	//pre:	class is initialized
	//post: classroomID has a value

	string getClassroomID();
	//function: returns the value of classroomID
	//pre:	class is initialized
	//		classroomID has a value
	//post: classroomID is returned

	void setClassroomCap(int classroomCap_);
	//function: sets value of classroomCap
	//pre:	class is initialized
	//post: classroomCap has a value

	int getClassroomCap();
	//function: returns the value of classroomCap
	//pre:	class is initialized
	//		classroomCap has a value
	//post: classroomCap is returned

	void setClassroomType(string classroomType_);
	//function: sets value of classroomType
	//pre:	class is initialized
	//post: classroomType has a value

	string getClassroomType();
	//function: returns the value of classroomType
	//pre:	class is initialized
	//		classroomType has a value
	//post: classroomType is returned

	void setBuilding(string building_);
	//function: sets value of building
	//pre:	class is initialized
	//post: building has a value

	string getBuilding();
	//function: returns the value of building
	//pre:	class is initialized
	//		building has a value
	//post: building is returned

	void addCourse(string course_);
	//function: add a course id to the courses class
	//pre:	class is initialized
	//		courses is initialized
	//post: a value is added to courses

	void removeCourse(string course_);
	//function: removes a course id from the courses class
	//pre:	class is initialized
	//		courses is initialized
	//		the value is in courses
	//post: value is removed from courses

	LinkedList<string> getCourses();
	//function: returns the LinkedList class courses
	//pre:	class is initialized
	//		courses is initialized
	//post: courses is returned

	void storeClass();
	//function: stores class in a text file
	//pre:	class is initialized
	//post: the values are stored in a text file

	void extractClass(string classroomID_);
	//function: extract values from a text file
	//pre:	class is initialized
	//		file exists
	//post: the values relating to the id are stored in this class
	
	void deleteClass(string classroomID_);
	//function: deletes a class stored in a text file
	//pre:	class is initialized
	//		file exists
	//post: the classes is removed from the text file

	void userInputData();
	//function: adds values to the class' variables based on user input
	//pre:	class is initialized
	//post:	the class has values assigned to its variables

	void printClassData();
	//function: prints out all stored classrooms
	//pre:	class is initialized
	//post:	all the stored classrooms data is printed to the screen

private:
	string classroomID;
	int classroomCap;
	string classroomType;
	LinkedList<string> classroomCourses;
	string building;
	string textFile;

};

#endif