#ifndef Classroom_H
#define Classroom_H
#include<string>

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


private:
	string classroomID;
	int classroomCap;
	string classroomType;
	string building;

};

#endif