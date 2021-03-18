#include <iostream>
#include <conio.h>

#include "Color.h"
#include "Common.h"

using namespace std;

Color GetCorrectColor()
{
	int movieGenre = _getch();
	const int minimumBorder = static_cast <int> (Color::Red);
	const int maximumBorder = static_cast <int> (Color::Purple);
	while ((movieGenre < minimumBorder) || (movieGenre > maximumBorder))
	{
		cerr << "Error: Choice cannot be less than " << (char)minimumBorder
			<< " and more than " << (char)maximumBorder << endl;
		movieGenre = _getch();
	}
	return (static_cast <Color> (movieGenre));
}

string ConvertColorEnumToText(Color color)
{
	string temporaryColor;
	switch (color)
	{
		case Color::Red:
		{
			temporaryColor = "Red";
			break;
		}
		case Color::Orange:
		{
			temporaryColor = "Orange";
			break;
		}
		case Color::Yellow:
		{
			temporaryColor = "Yellow";
			break;
		}
		case Color::Green:
		{
			temporaryColor = "Green";
			break;
		}
		case Color::LightBlue:
		{
			temporaryColor = "Light blue";
			break;
		}
		case Color::Blue:
		{
			temporaryColor = "Blue";
			break;
		}
		case Color::Purple:
		{
			temporaryColor = "Purple";
			break;
		}
		default:
		{
			temporaryColor = "-";
			break;
		}
	}
	return temporaryColor;
}


void ShowColors(Color colors[], const unsigned int arraySize)
{
	for (unsigned int i = 0; i < arraySize; ++i)
	{
		cout << "Season [" << i + 1 << "]: "
			<< ConvertColorEnumToText(colors[i]) << endl;
	}
}


int CountColor(Color* colors, unsigned int count, Color findedColor)
{
	int countColor = 0;
	for (unsigned int i = 0; i < count; ++i)
	{
		if (colors[i] == findedColor)
		{
			++countColor;
		}
	}
	return countColor;
}


void ColorMain()
{
	while (true)
	{
		cout << "Color menu:" << endl
			<< "1. Work with one static Color object" << endl
			<< "2. Work with array of Color objects" << endl
			<< "Press ESC for exit" << endl;
		ColorMenu taskChoice = static_cast <ColorMenu> (_getch());
		system("cls");
		switch (taskChoice)
		{
			case ColorMenu::FirstTask:
			{
				Color color = Color::Purple;
				cout << "Your color is: "
					<< ConvertColorEnumToText(color) << endl << endl;
				break;
			}
			case ColorMenu::SecondTask:
			{
				const unsigned int arraySize = 7;
				Color arrayOfColors[arraySize]
					= { Color::Red, Color::Orange,
					Color::Yellow, Color::Green,
					Color::Blue, Color::Blue,
					Color::Purple };
				Color* colors = arrayOfColors;
				cout << "Array of colors: " << endl;
				ShowColors(arrayOfColors, arraySize);
				cout << endl << "Count of red:" 
					<< CountColor(colors, arraySize, Color::Red) << endl;
				cout << "Press the key with the specific number "
					<< "to select the color to search count of it"
					<< endl << "1. Red\t\t2.Orange\t3.Yellow"
					<< endl << "4. Green\t5.Light blue\t6.Blue\t7.Purple"
					<< endl;
				Color findedColor = GetCorrectColor();
				cout << endl << "Count of " 
					<< ConvertColorEnumToText(findedColor) << " color: "
					<< CountColor(colors, arraySize, findedColor) << endl;
				cout << endl;
				break;
			}
			case ColorMenu::Exit:
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