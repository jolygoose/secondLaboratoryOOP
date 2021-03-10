#include <iostream>
#include <conio.h>

#include "Time.h"
#include "Common.h"

using namespace std;


void DemoTime(Time* time)
{
	time->Hours = 16;
	time->Minutes = 34;
	time->Seconds = 12;
}


void PushInfoAboutTime(Time* time)
{
	cout << "Enter the hours: ";
	time->Hours = GetCorrectHoursValue();
	cout << "Enter the minutes: ";
	time->Minutes = GetCorrectMinutesOrSecondsValue();
	cout << "Enter the seconds: ";
	time->Seconds = GetCorrectMinutesOrSecondsValue();
}


void ShowTime(Time* time)
{
	cout << "Time [";
	if (time->Hours < 10)
	{
		cout << "0";
	}
	cout << time->Hours << ":";
	if (time->Minutes < 10)
	{
		cout << "0";
	}
	cout << time->Minutes << ":";
	if (time->Seconds < 10)
	{
		cout << "0";
	}
	cout << time->Seconds << "]: "
		<< "Hours = " << time->Hours << " | "
		<< "Minutes = " << time->Minutes << " | "
		<< "Seconds = " << time->Seconds << " |" << endl;
}


void TimeMain()
{
	while (true)
	{
		cout << "Time menu:" << endl
			<< "1. Task 2.2.3.1" << endl
			<< "2. Task 2.2.3.2" << endl
			<< "3. Task 2.2.3.3" << endl
			<< "Press ESC for exit" << endl;
		TimeMenu taskChoice = static_cast <TimeMenu> (_getch());
		system("cls");
		switch (taskChoice)
		{
			// 2.2.3.1 - One static time
			case TimeMenu::FirstTask:
			{
				cout << "Example of displaying time information" << endl << endl;
				Time* time = new Time;
				DemoTime(time);
				ShowTime(time);
				cout << endl;
				delete time;
				break;
			}
			// 2.2.3.2 - One user-entered time
			case TimeMenu::SecondTask:
			{
				cout << "An example of working with user-entered time data"
					<< endl << endl;
				Time* time = new Time;
				PushInfoAboutTime(time);
				cout << endl << "Your time:" << endl;
				ShowTime(time);
				cout << endl;
				delete time;
				break;
			}
			// 2.2.3.3 - Some user-entered movies
			case TimeMenu::ThirdTask:
			{
				cout << "An example of working with a user-entered array of "
					<< "time data" << endl << endl;
				cout << "Enter the array of time size: ";
				unsigned int arraySize = GetCorrectUnsignedIntegerValue();
				Time** arrayOfTime = new Time * [arraySize];
				for (unsigned int i = 0; i < arraySize; ++i)
				{
					cout << "[" << i + 1 << "] Time" << endl;
					arrayOfTime[i] = new Time;
					PushInfoAboutTime(arrayOfTime[i]);
				}
				cout << endl << "Array of time:" << endl;
				for (unsigned int i = 0; i < arraySize; ++i)
				{
					cout << "Time [" << i + 1 << "]: ";
					ShowTime(arrayOfTime[i]);
				}
				cout << endl;
				delete[] arrayOfTime;
				arrayOfTime = nullptr;
				return;
			}
			case TimeMenu::Exit:
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