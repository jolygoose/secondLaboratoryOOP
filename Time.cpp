#include <iostream>
#include <conio.h>

#include "Time.h"
#include "Common.h"

using namespace std;


Time* MakeTime(unsigned int hours, unsigned int minutes,
	unsigned int seconds)
{
	Time* time = new Time();
	time->Hours = hours;
	time->Minutes = minutes;
	time->Seconds = seconds;
	return time;
}


Time* CopyTime(Time* time)
{
	Time* copiedtime = new Time();
	copiedtime->Hours = time->Hours;
	copiedtime->Minutes = time->Minutes;
	copiedtime->Seconds = time->Seconds;
	return copiedtime;
}


Time* DemoTime()
{
	return MakeTime(16, 34, 12);
}


Time* PushInfoAboutTime()
{
	unsigned int hours;
	unsigned int minutes;
	unsigned int seconds;
	cout << "Enter the hours: ";
	hours = GetCorrectHoursValue();
	cout << "Enter the minutes: ";
	minutes = GetCorrectMinutesOrSecondsValue();
	cout << "Enter the seconds: ";
	seconds = GetCorrectMinutesOrSecondsValue();
	return MakeTime(hours, minutes, seconds);
}



void ChangeInfoAboutTime(Time* time)
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
			<< "1. Work with one time data with pointers and references" << endl
			<< "2. Work with one user-entered time data" << endl
			<< "3. Work with array of user-entered time data" << endl
			<< "Press ESC for exit" << endl;
		TimeMenu taskChoice = static_cast <TimeMenu> (_getch());
		system("cls");
		switch (taskChoice)
		{
			// 2.2.3.1 + 2.2.4.1-2 - One time
			case TimeMenu::FirstTask:
			{
				cout << "Example of displaying time information" << endl << endl;
				// 2.2.7.2
				Time* time = DemoTime();
				// 2.2.3.1
				ShowTime(time);
				// 2.2.4.1
				Time* newTime = time;
				cout << endl << "~ New time pointer ~" << endl << endl;
				ShowTime(newTime);
				cout << endl << "Enter new values for time" << endl;
				ChangeInfoAboutTime(newTime);
				cout << endl << "~ Values changed ~" << endl << endl;
				ShowTime(newTime);
				// 2.2.4.2
				Time* secondNewTime = time;
				cout << endl << "Addresses: " << time
					<< " | " << newTime
					<< " | " << secondNewTime << endl << endl;
				delete time;
				time = nullptr;
				newTime = nullptr;
				secondNewTime = nullptr;
				break;
			}
			// 2.2.3.2 - One user-entered time
			case TimeMenu::SecondTask:
			{
				cout << "An example of working with user-entered time data"
					<< endl << endl;
				Time* time = PushInfoAboutTime();
				cout << endl << "Your time:" << endl;
				ShowTime(time);
				cout << endl << "~ Try to copy time ~" << endl;
				// 2.2.7.3
				Time* copiedTime = CopyTime(time);
				ShowTime(copiedTime);
				cout << endl;
				delete time;
				delete copiedTime;
				time = nullptr;
				copiedTime = nullptr;
				break;
			}
			// 2.2.3.3 - Some user-entered time
			case TimeMenu::WorkWithArray:
			{
				cout << "An example of working with a user-entered array of "
					<< "time data" << endl << endl;
				cout << "Enter the array of time size: ";
				unsigned int arraySize = GetCorrectUnsignedIntegerValue();
				Time** arrayOfTime = new Time * [arraySize];
				for (unsigned int i = 0; i < arraySize; ++i)
				{
					cout << "[" << i << "] Time" << endl;
					arrayOfTime[i] = PushInfoAboutTime();
				}
				cout << endl << "Array of time:" << endl;
				for (unsigned int i = 0; i < arraySize; ++i)
				{
					cout << "Time [" << i << "]: ";
					ShowTime(arrayOfTime[i]);
				}
				cout << endl;
				for (unsigned int i = 0; i < arraySize; ++i)
				{
					delete arrayOfTime[i];
				}
				delete[] arrayOfTime;
				arrayOfTime = nullptr;
				break;
			}
			case TimeMenu::Exit:
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