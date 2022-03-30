#include "Classroom_H.h"

Classroom::Classroom()
{
	classroomID = "";
	classroomCap = -1;
	classroomType = "";
	building = "";
}

Classroom::~Classroom()
{
}

void Classroom::setClassroomID(string classroomID_)
{
	classroomID = classroomID_;
}

void Classroom::setClassroomCap(int classroomCap_)
{
	classroomCap = classroomCap_;
}

void Classroom::setClassroomType(string classroomType_)
{
	classroomType = classroomType_;
}


void Classroom::setBuilding(string building_)
{
	building = building_;
}

string Classroom::getClassroomID()
{
	return classroomID;
}

int Classroom::getClassroomCap()
{
	return classroomCap;
}

string Classroom::getClassroomType()
{
	return classroomType;
}


string Classroom::getBuilding()
{
	return building;
}

