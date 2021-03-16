#include <iostream>

#include "Color.h"

using namespace std;

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