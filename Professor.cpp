#include "Professor_H.h"

#include<string>
#include<iostream>

Professor::Professor()
{
	profName = "";
	profID = "";
	lunchTime = -1;
	textFile = "Professors.txt";
}

Professor::~Professor()
{
}

void Professor::setProfName(string profName_)
{
	profName = profName_;
}

void Professor::setProfID(string profID_)
{
	profID = profID_;
}

void Professor::setLunchTime(int lunchTime_)
{
	if (lunchTime_ < 0 || lunchTime_ > 2400)
	{
		cout << "Error lunchTime must be between 0 and 2400" << endl;
	}
	else
	{
		lunchTime = lunchTime_;
	}
}

string Professor::getProfName()
{
	return profName;
}

string Professor::getProfID()
{
	return profID;
}

LinkedList<string>Professor::getExpertise()
{
	return expertise;
}

int Professor::getLunchTime()
{
	return lunchTime;
}

void Professor::addExpertise(string expertise_)
{
	expertise.insert(expertise_);
}

void Professor::removeExpertise(string expertise_)
{
	expertise.remove(expertise_);
}

void Professor::addCourse(string course_)
{
	professorCourses.insert(course_);
}

void Professor::removeCourse(string course_)
{
	professorCourses.remove(course_);
}

LinkedList<string> Professor::getCourses()
{
	return professorCourses;
}

void Professor::storeClass()
{
	ifstream inFile;
	inFile.open(textFile);
	stringstream oldData;
	oldData << inFile.rdbuf();
	inFile.close();

	ofstream outFile;
	outFile.open(textFile);

	outFile << oldData.str();
	outFile << getProfID() << endl;
	outFile << getProfID() << " " << getProfName() << endl;
	outFile << getProfID() << " " << getLunchTime() << endl << getProfID() << " ";

	int length = expertise.getSize();
	for (int i = 1; i <= length; i++)
	{
		outFile << expertise.getItem(i) << "|";
	}

	outFile << endl << getProfID() << " ";

	length = professorCourses.getSize();
	for (int i = 1; i <= length; i++)
	{
		outFile << professorCourses.getItem(i) << "|";
	}

	outFile << endl;

	outFile.close();
};

void Professor::extractClass(string professorID_)
{
	ifstream inFile;
	inFile.open(textFile);
	string line;
	int profIDLen;

	do
	{
		getline(inFile, line);
		if (line == "")
		{
			cout << "ID does not exist";
			return;
		}
	} while (line != professorID_);

	setProfID(line);
	profIDLen = getProfID().length() + 1;
	getline(inFile, line);
	line.erase(0, profIDLen);
	setProfName(line);
	getline(inFile, line);
	line.erase(0, profIDLen);
	setLunchTime(stoi(line));
	getline(inFile, line);
	line.erase(0, profIDLen);

	expertise.emptyList();

	string temp;
	stringstream  expertiseStream(line);

	while (getline(expertiseStream, temp, '|'))
	{
		addExpertise(temp);
	}

	professorCourses.emptyList();

	getline(inFile, line);
	line.erase(0, profIDLen);

	stringstream  courseStream(line);

	while (getline(courseStream, temp, '|'))
	{
		addCourse(temp);
	}

	inFile.close();
}

void Professor::deleteClass(string profID_)
{
	ifstream inFile;
	ofstream outFile;
	inFile.open(textFile);
	outFile.open("temp.txt");
	string line;

	while (getline(inFile, line))
	{
		if (line.find(profID_) != 0)
			outFile << line << endl;
	}

	inFile.close();
	outFile.close();

	const char* t = textFile.c_str();
	remove(t);
	rename("temp.txt", t);
}

void Professor::userInputData()
{
	string input;
	cout << "Input the professor's ID: " << endl;
	getline(cin, input);
	setProfID(input);

	cout << "Input professor's name: " << endl;
	getline(cin, input);
	setProfName(input);

	bool error = false;
	do
	{
		;
		error = false;
		cout << "Input the professor's lunch time input -1 if you want it left empty: " << endl;
		getline(cin, input);
		try
		{
			stoi(input);
		}
		catch (invalid_argument& e)
		{
			cout << "Error input not a number" << endl;
			error = true;
			continue;
		}
		if (stoi(input) != -1 || stoi(input) < 0 && stoi(input) > 2400)
		{
			cout << "Error lunch time must be between 0 and 2400" << endl;
			error = true;
		}

	} while (error == true);
	if(stoi(input) != -1)
		setLunchTime(stoi(input));
	
	do
	{
		cout << "Input the professor's expertise one at a time and type q to quit: " << endl;
		getline(cin, input);
		if(input != "q")
			addExpertise(input);
	} while (input != "q");
}

