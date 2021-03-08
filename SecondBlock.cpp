#include <iostream>
#include <conio.h>

#include "SecondBlock.h"
#include "Common.h"

using namespace std;

void SecondBlockMain()
{
	while (true)
	{
		cout << "Second block menu:" << endl
			<< "1. Task 2.2.2.1" << endl
			<< "2. Task 2.2.2.2" << endl
			<< "Press ESC for exit" << endl;
		SecondBlockTasks taskChoice = static_cast <SecondBlockTasks> (_getch());
		system("cls");
		switch (taskChoice)
		{
			case SecondBlockTasks::Rectangle:
			{
				cout << "Work with rectangle structure" << endl << endl;
				
				break;
			}
			case SecondBlockTasks::Flight:
			{
				cout << "Work with flight structure" << endl << endl;
				
				break;
			}
			case SecondBlockTasks::Movie:
			{
				cout << "Work with rectangle structure" << endl << endl;

				break;
			}
			case SecondBlockTasks::Time:
			{
				cout << "Sample function with an exception" << endl << endl;

				break;
			}
			case SecondBlockTasks::Exit:
			{
				return;
			}
			default:
			{
				cerr << "Error: Incorrect choice! Try again" << endl << endl;
			}
		}
	}
	return;
}