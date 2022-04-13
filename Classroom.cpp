#include "Classroom_H.h"

Classroom::Classroom()
{
	classroomID = "";
	classroomCap = -1;
	classroomType = "";
	building = "";
	textFile = "Classrooms.txt";
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

void Classroom::addCourse(string course_)
{
	classroomCourses.insert(course_);
}

void Classroom::removeCourse(string course_)
{
	classroomCourses.remove(course_);
}

LinkedList<string> Classroom::getCourses()
{
	return classroomCourses;
}

void Classroom::storeClass()
{
	ifstream inFile;
	inFile.open(textFile);
	stringstream oldData;
	oldData << inFile.rdbuf();
	inFile.close();

	ofstream outFile;
	outFile.open(textFile);

	outFile << oldData.str();
	outFile << getClassroomID() << endl;
	outFile << getClassroomID() << " " << getClassroomType() << endl;
	outFile << getClassroomID() << " " << getBuilding() << endl;
	outFile << getClassroomID() << " " << getClassroomCap() << endl << getClassroomID() << " ";
	
	int length = classroomCourses.getSize();
	for (int i = 1; i <= length; i++)
	{
		outFile << classroomCourses.getItem(i) << "|";
	}
	outFile << endl;

	outFile.close();
};

void Classroom::extractClass(string classroomID_)
{
	ifstream inFile;
	inFile.open(textFile);
	string line;

	int classroomIDLen;
	
	do
	{
		getline(inFile, line);
		if (line == "")
		{
			cout << "ID does not exist" << endl;
			return;
		}
	} while (line != classroomID_);

	setClassroomID(line);
	classroomIDLen = getClassroomID().length() + 1;
	getline(inFile, line);
	line.erase(0, classroomIDLen);
	setClassroomType(line);
	getline(inFile, line);
	line.erase(0, classroomIDLen);
	setBuilding(line);
	getline(inFile, line);
	line.erase(0, classroomIDLen);
	setClassroomCap(stoi(line));
	getline(inFile, line);
	line.erase(0, classroomIDLen);

	classroomCourses.emptyList();

	string temp;
	stringstream  lineStream(line);

	while (getline(lineStream, temp, '|'))
	{
		addCourse(temp);
	}

	inFile.close();
}

void Classroom::deleteClass(string classroomID_)
{

}
