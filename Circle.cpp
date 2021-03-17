#include <iostream>
#include <conio.h>

#include "Circle.h"
#include "Common.h"

using namespace std;


Circle* MakeCircle(double x, double y, double radius, Color mainColor)
{
	Circle* circle = new Circle();
	circle->X = x;
	circle->Y = y;
	circle->Radius = radius;
	circle->MainColor = mainColor;
	return circle;
}


Circle* CopyCircle(Circle* circle)
{
	Circle* copiedCircle = new Circle();
	copiedCircle->X = circle->X;
	copiedCircle->Y = circle->Y;
	copiedCircle->Radius = circle->Radius;
	copiedCircle->MainColor = circle->MainColor;
	return copiedCircle;
}


void ShowCircle(Circle* circle)
{
	cout << "X = " << circle->X
		<< " | Y = " << circle->Y << " | "
		<< "Radius = " << circle->Radius
		<< " | Color: " << ConvertColorEnumToText(circle->MainColor) << endl;
}


void CircleMain()
{
	Circle* firstCircle = MakeCircle(5.0, 7.0, 7.5, Color::Red);
	Circle* secondCircle = MakeCircle(2.0, -12.0, 12.75, Color::Green);
	Circle* thirdCircle = MakeCircle(-10.0, 10.0, 1.45, Color::Blue);
	Circle* firstCopiedCircle = CopyCircle(firstCircle);
	Circle* secondCopiedCircle = CopyCircle(secondCircle);
	Circle* thirdCopiedCircle = CopyCircle(thirdCircle);
	cout << "First circle info: ";
	ShowCircle(firstCircle);
	cout << "Second circle info: ";
	ShowCircle(secondCircle);
	cout << "Third circle info: ";
	ShowCircle(thirdCircle);
	cout << "First copied circle info: ";
	ShowCircle(firstCopiedCircle);
	cout << "Second copied circle info: ";
	ShowCircle(secondCopiedCircle);
	cout << "Third copied circle info: ";
	ShowCircle(thirdCopiedCircle);
	delete firstCircle;
	delete secondCircle;
	delete thirdCircle;
	delete firstCopiedCircle;
	delete secondCopiedCircle;
	delete thirdCopiedCircle;
	system("pause");
	system("cls");
}