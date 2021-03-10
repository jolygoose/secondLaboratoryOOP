#include <iostream>
#include <conio.h>

#include "Rectangle.h"
#include "Common.h"


void DemoRectangle(Rectangle* rectangle)
{
	rectangle->Length = 60;
	rectangle->Width = 90;
	rectangle->Color = "Purple";
}


unsigned int GetCorrectIndexOfArray(unsigned int arraySize)
{
	unsigned int index = GetCorrectUnsignedIntegerValue();
	while (index >= arraySize)
	{
		cerr << "Error: Value cannot be more than " << arraySize << endl;
		index = GetCorrectUnsignedIntegerValue();
	}
	return index;
}


void PushInfoAboutRectangle(Rectangle* rectangle)
{
	cout << "Enter the length: ";
	rectangle->Length = GetCorrectUnsignedIntegerValue();
	cout << "Enter the width: ";
	rectangle->Width = GetCorrectUnsignedIntegerValue();
	cout << "Enter the color: ";
	getline(cin, rectangle->Color);
}


void ShowRectangle(Rectangle* rectangle)
{
	cout << "Rectangle characteristics: "
		<< "Length = " << rectangle->Length << " | "
		<< "Width = " << rectangle->Width << " | "
		<< "Color = " << rectangle->Color << " |" << endl;
}


void ReadRectangle(Rectangle*& rectangle)
{
	cout << "Enter the length: ";
	rectangle->Length = GetCorrectUnsignedIntegerValue();
	cout << "Enter the width: ";
	rectangle->Width = GetCorrectUnsignedIntegerValue();
	cout << "Enter the color: ";
	getline(cin, rectangle->Color);
}


void WriteRectangle(Rectangle*& rectangle)
{
	cout << "Rectangle characteristics: "
		<< "Length = " << rectangle->Length << " | "
		<< "Width = " << rectangle->Width << " | "
		<< "Color = " << rectangle->Color << " |" << endl;
}


void DemoReadAndWriteRectangles(Rectangle** arrayOfRectangles, unsigned int arraySize)
{
	for (unsigned int i = 0; i < arraySize; ++i)
	{
		cout << "[" << i << "] Rectangle" << endl;
		arrayOfRectangles[i] = new Rectangle;
		ReadRectangle(arrayOfRectangles[i]);
	}
	cout << endl << "Array of rectangles:" << endl;
	for (unsigned int i = 0; i < arraySize; ++i)
	{
		cout << "Rectangle [" << i << "]: ";
		WriteRectangle(arrayOfRectangles[i]);
	}
	cout << endl;
}


void Exchange(Rectangle*& firstRectangle, Rectangle*& secondRectangle)
{
	// length
	double temporaryStorage = firstRectangle->Length;
	firstRectangle->Length = secondRectangle->Length;
	secondRectangle->Length = temporaryStorage;
	// Width
	temporaryStorage = firstRectangle->Width;
	firstRectangle->Width = secondRectangle->Width;
	secondRectangle->Width = temporaryStorage;
	// Color
	string temporaryString = firstRectangle->Color;
	firstRectangle->Color = secondRectangle->Color;
	secondRectangle->Color = temporaryString;
}

/*
void FindRectangle(Rectangle** rectangles, int count)
{
	double minimumLength = 0;
	int index = 0;
	for (unsigned int i = 0; i < count; ++i)
	{
		if (rectangles[i].Length > minimumLength)
		{

		}
	}
}
*/

void RectangleMain()
{
	while (true)
	{
		cout << "Rectangle menu:" << endl
			<< "1. Work with one rectangle data with pointers and references" << endl
			<< "2. Work with one user-entered rectangle data" << endl
			<< "3. Work with array of user-entered rectangles data" << endl
			<< "Press ESC for exit" << endl;
		RectangleMenu taskChoice = static_cast <RectangleMenu> (_getch());
		system("cls");
		switch (taskChoice)
		{
			// 2.2.3.1 + 2.2.4.1-2 + 2.2.5.1-2 - One rectangle
			case RectangleMenu::FirstTask:
			{
				cout << "Example of displaying rectangle information" << endl << endl;
				Rectangle* rectangle = new Rectangle;
				// 2.2.3.1
				DemoRectangle(rectangle);
				ShowRectangle(rectangle);
				// 2.2.4.1
				Rectangle* newRectangle = rectangle;
				cout << endl << "~ New rectangle pointer ~" << endl << endl;
				ShowRectangle(newRectangle);
				cout << endl << "Enter new values for rectangle" << endl;
				PushInfoAboutRectangle(newRectangle);
				cout << endl << "~ Values changed ~" << endl << endl;
				ShowRectangle(newRectangle);
				// 2.2.4.2
				Rectangle* secondNewRectangle = rectangle;
				cout << endl << "Addresses: " << rectangle
					<< " | " << newRectangle
					<< " | " << secondNewRectangle << endl << endl;
				// 2.2.5.1
				cout << "~ Try to use reference ~" << endl << endl;
				WriteRectangle(rectangle);
				// 2.2.5.2
				cout << endl << "Enter new values for rectangle" << endl;
				ReadRectangle(rectangle);
				cout << endl << "~ Values changed ~" << endl << endl;
				WriteRectangle(rectangle);
				cout << endl;
				delete rectangle;
				rectangle = nullptr;
				newRectangle = nullptr;
				secondNewRectangle = nullptr;
				break;
			}
			// 2.2.3.2 - One user-entered rectangle
			case RectangleMenu::SecondTask:
			{
				cout << "An example of working with user-entered rectangle data"
					<< endl << endl;
				Rectangle* rectangle = new Rectangle;
				PushInfoAboutRectangle(rectangle);
				cout << endl << "Your rectangle:" << endl;
				ShowRectangle(rectangle);
				cout << endl;
				delete rectangle;
				rectangle = nullptr;
				break;
			}
			// 2.2.3.3 + 2.2.5.1-6 - Some user-entered rectangles
			case RectangleMenu::WorkWithArray:
			{
				cout << "An example of working with a user-entered array of "
					<< "rectangles data" << endl << endl;
				cout << "Enter the array of rectangles size: ";
				unsigned int arraySize = GetCorrectUnsignedIntegerValue();
				Rectangle** arrayOfRectangles = new Rectangle * [arraySize];
				DemoReadAndWriteRectangles(arrayOfRectangles, arraySize);
				cout << "~ Swap two rectangles ~" << endl << endl;
				cout << "Enter the index of first rectangle: ";
				unsigned int firstRectangleIndex = GetCorrectIndexOfArray(arraySize);
				cout << "Enter the index of second rectangle: ";
				unsigned int secondRectangleIndex = GetCorrectIndexOfArray(arraySize);
				// 2.2.5.4
				Exchange(arrayOfRectangles[firstRectangleIndex],
					arrayOfRectangles[secondRectangleIndex]);
				cout << endl << "Array of rectangles:" << endl;
				for (unsigned int i = 0; i < arraySize; ++i)
				{
					cout << "Rectangle [" << i << "]: ";
					WriteRectangle(arrayOfRectangles[i]);
				}

				delete[] arrayOfRectangles;
				arrayOfRectangles = nullptr;
				return;
			}
			case RectangleMenu::Exit:
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