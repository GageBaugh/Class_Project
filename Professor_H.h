#ifndef Professor_H
#define Professor_H
#include "LinkedList_H.h"
#include <string>
#include <fstream>
#include<sstream>

using namespace std;

class Professor
{
public:
	Professor();
	~Professor();
	
	string getProfName();
	//function: returns the value of profName
	//pre:	class is initialized
	//		profName has a value
	//post: profName is returned

	string getProfID();
	//function: returns the value of profID
	//pre:	class is initialized
	//		profID has a value
	//post: profID is returned

	LinkedList<string> getExpertise();
	//function: returns the LinkedList class expertise
	//pre:	class is initialized
	//		expertise is initialized
	//post: expertise is returned

	int getLunchTime();
	//function: returns the value of lunchTime
	//pre:	class is initialized
	//		lunchTime has a value
	//post: lunchTime is returned

	void setProfName(string profName_);
	//function: sets value of profName
	//pre:	class is initialized
	//post: profName has a value

	void setProfID(string profID_);
	//function: sets value of profID
	//pre:	class is initialized
	//post: profID has a value

	void setLunchTime(int lunchTime);
	//function: sets value of lunchTime
	//pre:	class is initialized
	//post: lunchTime has a value

	void addExpertise(string expertise_);
	//function: add an expertise to the expertise class
	//pre:	class is initialized
	//		expertise is initialized
	//post: a value is added to expertise

	void removeExpertise(string expertise_);
	//function: removes an expertise from the expertise class
	//pre:	class is initialized
	//		expertise is initialized
	//		the value is in expertise
	//post: value is removed from expertise

	void addCourse(string course_);
	//function: add a course id to the courses class
	//pre:	class is initialized
	//		courses is initialized
	//post: a course id is added to courses

	void removeCourse(string course_);
	//function: removes an course id from the courses class
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

	void extractClass(string professorID_);
	//function: extract values from a text file
	//pre:	class is initialized
	//post: the values relating to the id are stored in this class

	void deleteClass(string profID_);
	//function: deletes a class stored in a text file
	//pre:	class is initialized
	//		file exists
	//post: the classes is removed from the text file

	void userInputData();
	//function: adds values to the class' variablesS based on user input
	//pre:	class is initialized
	//post:	the class has values assigned to its variables

	void printClassData();
	//function: prints out all stored professors
	//pre:	class is initialized
	//post:	all the stored classrooms data is printed to the screen

private:
	string profName;
	string profID;
	LinkedList<string> expertise;
	LinkedList<string> professorCourses;
	int lunchTime;
	string textFile;

};

#endif