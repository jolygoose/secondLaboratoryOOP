#include <iostream>
#include <conio.h>

#include "Rectangle.h"
#include "Common.h"


Rectangle* MakeRectangle(double length, double width, string color)
{
	Rectangle* rectangle = new Rectangle();
	rectangle->Length = length;
	rectangle->Width = width;
	rectangle->Color = color;
	return rectangle;
}


Rectangle* CopyRectangle(Rectangle* rectangle)
{
	Rectangle* copiedRectangle = new Rectangle();
	copiedRectangle->Length = rectangle->Length;
	copiedRectangle->Width = rectangle->Width;
	copiedRectangle->Color = rectangle->Color;
	return copiedRectangle;
}


Rectangle* DemoRectangle()
{
	return MakeRectangle(90, 50, "Purple");
}


Rectangle* PushInfoAboutRectangle()
{
	double length;
	double width;
	string color;
	cout << "Enter the length of rectangle: ";
	length = GetCorrectUnsignedDoubleValue();
	cout << "Enter the width of rectangle: ";
	width = GetCorrectUnsignedDoubleValue();
	cout << "Enter the color of rectangle: ";
	getline(cin, color);
	return MakeRectangle(length, width, color);
}


void ChangeInfoAboutRectangle(Rectangle* rectangle)
{
	cout << "Enter the length: ";
	rectangle->Length = GetCorrectUnsignedDoubleValue();
	cout << "Enter the width: ";
	rectangle->Width = GetCorrectUnsignedDoubleValue();
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

// 2.2.5.1
void WriteRectangle(Rectangle*& rectangle)
{
	cout << "Rectangle characteristics: "
		<< "Length = " << rectangle->Length << " | "
		<< "Width = " << rectangle->Width << " | "
		<< "Color = " << rectangle->Color << " |" << endl;
}

// 2.2.5.2
void ReadRectangle(Rectangle*& rectangle)
{
	cout << "Enter the length: ";
	rectangle->Length = GetCorrectUnsignedIntegerValue();
	cout << "Enter the width: ";
	rectangle->Width = GetCorrectUnsignedIntegerValue();
	cout << "Enter the color: ";
	getline(cin, rectangle->Color);
}

// 2.2.5.3
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

// 2.2.5.4
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

// 2.2.5.5
unsigned int FindRectangle(Rectangle** rectangles, unsigned int count)
{
	double maximumLength = 0;
	unsigned int index = 0;
	for (unsigned int i = 0; i < count; ++i)
	{
		if (rectangles[i]->Length > maximumLength)
		{
			maximumLength = rectangles[i]->Length;
			index = i;
		}
	}
	return index;
}

// 2.2.5.6
unsigned int FindMaxRectangle(Rectangle** rectangles, unsigned int count)
{
	double maximumSquare = 0;
	double temporarySquare = 0;
	unsigned int index = 0;
	for (unsigned int i = 0; i < count; ++i)
	{
		temporarySquare = rectangles[i]->Length * rectangles[i]->Width;
		if (temporarySquare > maximumSquare)
		{
			maximumSquare = temporarySquare;
			index = i;
		}
	}
	return index;
}

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
				// 2.2.7.2
				Rectangle* rectangle = DemoRectangle();
				// 2.2.3.1
				ShowRectangle(rectangle);
				// 2.2.4.1
				Rectangle* newRectangle = rectangle;
				cout << endl << "~ New rectangle pointer ~" << endl << endl;
				ShowRectangle(newRectangle);
				cout << endl << "Enter new values for rectangle" << endl;
				ChangeInfoAboutRectangle(newRectangle);
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
				Rectangle* rectangle = PushInfoAboutRectangle();
				cout << endl << "Your rectangle:" << endl;
				ShowRectangle(rectangle);
				cout << endl << "~ Try to copy rectangle ~" << endl;
				// 2.2.7.3
				Rectangle* copiedRectangle = CopyRectangle(rectangle);
				ShowRectangle(copiedRectangle);
				cout << endl;
				delete rectangle;
				delete copiedRectangle;
				rectangle = nullptr;
				copiedRectangle = nullptr;
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
				unsigned int firstIndexToSwap = GetCorrectIndexOfArray(arraySize);
				cout << "Enter the index of second rectangle: ";
				unsigned int secondIndexToSwap = GetCorrectIndexOfArray(arraySize);
				// 2.2.5.4
				Exchange(arrayOfRectangles[firstIndexToSwap],
					arrayOfRectangles[secondIndexToSwap]);
				cout << endl << "Array of rectangles:" << endl;
				for (unsigned int i = 0; i < arraySize; ++i)
				{
					cout << "Rectangle [" << i << "]: ";
					WriteRectangle(arrayOfRectangles[i]);
				}
				// 2.2.5.5
				unsigned int indexOfMaximumLength 
					= FindRectangle(arrayOfRectangles, arraySize);
				cout << endl << "Rectangle with maximum length: " << endl;
				ShowRectangle(arrayOfRectangles[indexOfMaximumLength]);
				// 2.2.5.6
				unsigned int indexOfMaximumSquare
					= FindMaxRectangle(arrayOfRectangles, arraySize);
				cout << endl << "Rectangle with maximum square: " << endl;
				ShowRectangle(arrayOfRectangles[indexOfMaximumSquare]);
				cout << endl;
				for (unsigned int i = 0; i < arraySize; ++i)
				{
					delete arrayOfRectangles[i];
				}
				delete[] arrayOfRectangles;
				arrayOfRectangles = nullptr;
				break;
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