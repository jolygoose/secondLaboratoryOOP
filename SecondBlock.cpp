#include <iostream>
#include <conio.h>

#include "SecondBlock.h"
#include "Rectangle.h"
#include "Flight.h"
#include "Movie.h"
#include "Time.h"
#include "Circle.h"
#include "Common.h"

using namespace std;

void WorkWithSomeStructuresMain()
{
	while (true)
	{
		cout << "Second block menu:" << endl
			<< "1. Work with rectangle structure" << endl
			<< "2. Work with flight structure" << endl
			<< "3. Work with movie structure" << endl
			<< "4. Work with time structure" << endl
			<< "5. Work with circle structure" << endl
			<< "Press ESC for exit" << endl;
		SecondBlockTasks taskChoice = static_cast <SecondBlockTasks> (_getch());
		system("cls");
		switch (taskChoice)
		{
			case SecondBlockTasks::Rectangle:
			{
				cout << "Work with rectangle structure" << endl << endl;
				RectangleMain();
				break;
			}
			case SecondBlockTasks::Flight:
			{
				cout << "Work with flight structure" << endl << endl;
				FlightMain();
				break;
			}
			case SecondBlockTasks::Movie:
			{
				cout << "Work with movie structure" << endl << endl;
				MovieMain();
				break;
			}
			case SecondBlockTasks::Time:
			{
				cout << "Work with time structure" << endl << endl;
				TimeMain();
				break;
			}
			case SecondBlockTasks::Circle:
			{
				cout << "Work with circle structure" << endl << endl;
				CircleMain();
				break;
			}
			case SecondBlockTasks::Exit:
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