#ifndef Professor_H
#define Professor_H
#include<string>
#include "LinkedList_H.h"

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

	LinkedList getExpertise();
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

private:
	string profName;
	string profID;
	LinkedList expertise;
	int lunchTime;

};

#endif