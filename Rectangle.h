#pragma once

#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_

#include <string>

using namespace std;

enum class RectangleMenu
{
	FirstTask = 49,
	SecondTask = 50,
	ThirdTask = 51,
	Exit = 27
};

struct Rectangle
{
	double Length = 0;
	double Width = 0;
	string Color = "";
};

void DemoRectangle(Rectangle* rectangle);

void PushInfoAboutRectangle(Rectangle* rectangle);

void ShowRectangle(Rectangle* rectangle);

void RectangleMain();

#endif //!_RECTANGLE_H_