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


void RectangleMain()
{
	while (true)
	{
		cout << "Rectangle menu:" << endl
			<< "1. Task 2.2.3.1" << endl
			<< "2. Task 2.2.3.2" << endl
			<< "3. Task 2.2.3.3" << endl
			<< "Press ESC for exit" << endl;
		RectangleMenu taskChoice = static_cast <RectangleMenu> (_getch());
		system("cls");
		switch (taskChoice)
		{
			// 2.2.3.1 - One static rectangle
			case RectangleMenu::FirstTask:
			{
				cout << "Example of displaying rectangle information" << endl << endl;
				Rectangle* rectangle = new Rectangle;
				DemoRectangle(rectangle);
				ShowRectangle(rectangle);
				cout << endl;
				delete rectangle;
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
				break;
			}
			// 2.2.3.3 - Some user-entered movies
			case RectangleMenu::ThirdTask:
			{
				cout << "An example of working with a user-entered array of "
					<< "rectangles data" << endl << endl;
				cout << "Enter the array of rectangles size: ";
				unsigned int arraySize = GetCorrectUnsignedIntegerValue();
				Rectangle** arrayOfRectangles = new Rectangle * [arraySize];
				for (unsigned int i = 0; i < arraySize; ++i)
				{
					cout << "[" << i + 1 << "] Rectangle" << endl;
					arrayOfRectangles[i] = new Rectangle;
					PushInfoAboutRectangle(arrayOfRectangles[i]);
				}
				cout << endl << "Array of movies:" << endl;
				for (unsigned int i = 0; i < arraySize; ++i)
				{
					cout << "Rectangle [" << i + 1 << "]: ";
					ShowRectangle(arrayOfRectangles[i]);
				}
				cout << endl;
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