#include<iostream>
#include "Classroom_H.h"
#include "Professor_H.h"

using namespace std;

int main()
{
	Classroom c;
	Professor p;
	string input;
	string subInput;
	p.printClassData();
	do
	{
		cout << "\nType the number associated with the action you want to do" << endl;
		cout << "Type 1 to modify Classrooms" << endl;
		cout << "Type 2 to modify Professors" << endl;
		cout << "Type 3 to quit" << endl;
		getline(cin, input);
		if (input == "1")
		{
			do
			{
				cout << "\nType 1 to add a new Classroom" << endl;
				cout << "Type 2 to remove a Classroom" << endl;
				cout << "Type 3 to modify an existing Classroom" << endl;
				cout << "Type 4 to display all stored Classrooms" << endl;
				cout << "Type 5 to go back" << endl;
				getline(cin, subInput);
				if (subInput == "1")
				{
					c.userInputData();
					c.storeClass();
				}
				else if (subInput == "2")
				{
					cout << "Input the classrooms id that you want to remove" << endl;
					getline(cin, subInput);
					c.deleteClass(subInput);
				}
				else if (subInput == "3")
				{
					string modifyInput;
					cout << "Input the classrooms id that you want to modify" << endl;
					getline(cin, subInput);
					c.extractClass(subInput);
					if (subInput == c.getClassroomID())
						do
						{
							cout << "\nType 1 to modify classroom's type" << endl;
							cout << "Type 2 to modify classroom's bulding" << endl;
							cout << "Type 3 to modify classroom's capacity" << endl;
							cout << "Type 4 to go back" << endl;
							getline(cin, modifyInput);
							if (modifyInput == "1")
							{
								string classroomType;
								cout << "Type the classroom's type" << endl;
								getline(cin, classroomType);
								c.setClassroomType(classroomType);
							}
							else if (modifyInput == "2")
							{
								string classroomBuilding;
								cout << "Type the classroom's building" << endl;
								getline(cin, classroomBuilding);
								c.setBuilding(classroomBuilding);
							}
							else if (modifyInput == "3")
							{
								string classroomType;
								cout << "Type the classroom's capacity" << endl;
								getline(cin, classroomType);
								try
								{
									stoi(classroomType);
								}
								catch (invalid_argument& e)
								{
									cout << "Error input not a number" << endl;
									continue;
								}
								c.setClassroomCap(stoi(classroomType));
							}
							else if (modifyInput == "4")
								c.storeClass();
							else if (modifyInput != "4")
								cout << "Error please select one of the given numbers" << endl;
							c.storeClass();

						} while (subInput != "4");
				}
				else if (subInput == "4")
				{
					c.printClassData();
				}
				else if (subInput != "5")
					cout << "Error please input one of the numbers listed" << endl;
			} while (subInput != "5");
		}
		else if (input == "2")
		{
			do
			{
				cout << "\nType 1 to add a new professor" << endl;
				cout << "Type 2 to remove a professor" << endl;
				cout << "Type 3 to modify an existing professor" << endl;
				cout << "Type 4 to display all stored professors" << endl;
				cout << "Type 5 to go back" << endl;
				getline(cin, subInput);
				if (subInput == "1")
				{
					p.userInputData();
					p.storeClass();
				}
				else if (subInput == "2")
				{
					cout << "Input the professor id that you want to remove" << endl;
					getline(cin, subInput);
					p.deleteClass(subInput);
				}
				else if (subInput == "3")
				{
					string modifyInput;
					cout << "Input the professor id that you want to modify" << endl;
					getline(cin, subInput);
					p.extractClass(subInput);
					if (subInput == p.getProfID())
						do
						{
							cout << "\nType 1 to modify professor's name" << endl;
							cout << "Type 2 to modify professors's expertise" << endl;
							cout << "Type 3 to modify professor's lunch time" << endl;
							cout << "Type 4 to go back" << endl;
							getline(cin, modifyInput);
							if (modifyInput == "1")
							{
								string profName;
								cout << "Type the professor's name" << endl;
								getline(cin, profName);
								p.setProfName(profName);
							}
							else if (modifyInput == "2")
							{
								string profExpertise;
								do
								{
									cout << "Type the professor's expertise one at a time. Type q to quit" << endl;
									getline(cin, profExpertise);
									p.addExpertise(profExpertise);
								} while (profExpertise != "q");
							}
							else if (modifyInput == "3")
							{
								string profLunch;
								cout << "Type the professor's lunch time" << endl;
								getline(cin, profLunch);
								try
								{
									stoi(profLunch);
								}
								catch (invalid_argument& e)
								{
									cout << "Error input is not a number" << endl;
									continue;
								}
								p.setLunchTime(stoi(profLunch));
							}
							else if (modifyInput == "4")
								p.storeClass();
							else if (modifyInput != "4")
								cout << "Error please select one of the given numbers" << endl;

						} while (subInput != "4");
				}
				else if (subInput == "4")
				{
					p.printClassData();
				}
				else if (subInput != "5")
					cout << "Error please input one of the numbers listed" << endl;
			} while (subInput != "5");
		}
		else if (input != "3")
			cout << "Error please input one of the numbers listed" << endl;

	} while (input != "3");

	return 0;
}