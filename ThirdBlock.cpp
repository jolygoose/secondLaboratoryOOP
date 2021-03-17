#include <iostream>
#include <conio.h>

#include "ThirdBlock.h"
#include "FormOfEducation.h"
#include "PhoneManufacturer.h"
#include "Season.h"
#include "Common.h"

using namespace std;

void WorkWithSomeEnums()
{
	while (true)
	{
		cout << "Third block menu:" << endl
			<< "1. Work with forms of education enum" << endl
			<< "2. Work with phone manufacturer enum" << endl
			<< "3. Work with season enum" << endl
			<< "Press ESC for exit" << endl;
		ThirdBlockTasks taskChoice = static_cast <ThirdBlockTasks> (_getch());
		system("cls");
		switch (taskChoice)
		{
			case ThirdBlockTasks::FormOfEducation:
			{
				cout << "Work with forms of education enum" << endl << endl;
				FormOfEducationMain();
				break;
			}
			case ThirdBlockTasks::Phone:
			{
				cout << "Work with phone manufacturer enum" << endl << endl;
				PhoneManufacturerMain();
				break;
			}
			case ThirdBlockTasks::Season:
			{
				cout << "Work with season enum" << endl << endl;
				SeasonMain();
				break;
			}
			case ThirdBlockTasks::Exit:
			{
				return;
			}
			default:
			{
				cerr << "Error: Incorrect choice! Try again" << endl << endl;
				break;
			}
		}
	}
	return;
}