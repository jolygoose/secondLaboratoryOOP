#include <iostream>
#include <conio.h>

#include "FirstBlock.h"
#include "Common.h"

using namespace std;


const int GetArraySize()
{
	const int bufferSize = GetCorrectIntegerValue();
	if (bufferSize < 1)
	{
		throw exception("Error: Array size cannot be less than one");
	}
	return bufferSize;
}


void SortArrayOfDoubles(double* arrayOfValues, int count)
{
	for (int i = 0; i < count; ++i)
	{
		for (int j = 0; j < count; ++j)
		{
			if (arrayOfValues[i] < arrayOfValues[j])
			{
				double swap = arrayOfValues[i];
				arrayOfValues[i] = arrayOfValues[j];
				arrayOfValues[j] = swap;
			}
		}
	}
}


void FirstBlockMain()
{
	while (true)
	{
		cout << "First block menu:" << endl
			<< "1. Task 2.2.1.1" << endl
			<< "2. Task 2.2.1.2" << endl
			<< "Press ESC for exit" << endl;
		FirstBlockTasks taskChoice = static_cast <FirstBlockTasks> (_getch());
		system("cls");
		switch (taskChoice)
		{
			// 2.2.1.1 - DemoSort v1 (with static size)
			case FirstBlockTasks::First:
			{
				cout << "Sample function with correct sort" << endl << endl;
				const int bufferSize = 5;
				double* arrayOfValues = new double[bufferSize]
					{100.0, 249.0, 12.0, 45.0, 23.5};
				SortArrayOfDoubles(arrayOfValues, bufferSize);
				ShowArrayOfDoubles(arrayOfValues, bufferSize);
				delete[] arrayOfValues;
				arrayOfValues = nullptr;
				break;
			}
			// 2.2.1.2 - DemoSort v2 (with try-catch)
			case FirstBlockTasks::Second:
			{
				cout << "Sample function with an exception" << endl << endl;
				try
				{
					cout << "Enter the array size: ";
					const int bufferSize = GetArraySize();
					double* arrayOfValues = new double[bufferSize];
					cout << endl;
					for (int i = 0; i < bufferSize; ++i)
					{
						cout << "Enter value [" << i << "]: ";
						arrayOfValues[i] = GetCorrectIntegerValue();
					}
					cout << endl;
					ShowArrayOfDoubles(arrayOfValues, bufferSize);
					SortArrayOfDoubles(arrayOfValues, bufferSize);
					cout << "~ Sorted ~" << endl << endl;
					ShowArrayOfDoubles(arrayOfValues, bufferSize);
					delete[] arrayOfValues;
					arrayOfValues = nullptr;
				}
				catch (exception)
				{
					cerr << endl << "Error: Array size cannot be less than one"
						<< endl << endl;
				}
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