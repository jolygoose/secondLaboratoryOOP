#include <iostream>
#include <conio.h>

#include "ThirdBlock.h"
#include "Common.h"

using namespace std;

void WorkWithSomeEnums()
{
	while (true)
	{
		cout << "Third block menu:" << endl
			<< "1. Work with rectangle structure" << endl
			<< "2. Work with flight structure" << endl
			<< "3. Work with movie structure" << endl
			<< "4. Work with time structure" << endl
			<< "5. Work with circle structure" << endl
			<< "Press ESC for exit" << endl;
		FirstBlockTasks taskChoice = static_cast <FirstBlockTasks> (_getch());
		system("cls");
		switch (taskChoice)
		{
			case FirstBlockTasks::FormOfEducation:
			{
				
				break;
			}
			case FirstBlockTasks::Phone:
			{
			
				break;
			}
			case FirstBlockTasks::Season:
			{

				break;
			}
			case FirstBlockTasks::Exit:
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