#include "Professor_H.h"

#include<string>
#include<iostream>

Professor::Professor()
{
	profName = "";
	profID = "";
	lunchTime = -1;
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

LinkedList Professor::getExpertise()
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