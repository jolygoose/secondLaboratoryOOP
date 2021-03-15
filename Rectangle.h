#pragma once

#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_

#include <string>

using namespace std;

/// @brief ������������ ��������� ������� ���� ������
/// �� ���������� ��������������
enum class RectangleMenu
{
	// ������������ ASCII-����
	FirstTask = 49, // 1
	SecondTask = 50, // 2
	WorkWithArray = 51, // 3
	Exit = 27 // ESC
};

struct Rectangle
{
	// �����
	double Length = 0;
	// ������
	double Width = 0;
	// ����
	string Color = "";
};

Rectangle* MakeRectangle(double length, double width, string color);

Rectangle* CopyRectangle(Rectangle* rectangle);

Rectangle* DemoRectangle();

Rectangle* PushInfoAboutRectangle();

void ChangeInfoAboutRectangle(Rectangle* rectangle);

void ShowRectangle(Rectangle* rectangle);

void WriteRectangle(Rectangle*& rectangle);

void ReadRectangle(Rectangle*& rectangle);

void DemoReadAndWriteRectangles(Rectangle** arrayOfRectangles, unsigned int arraySize);

void Exchange(Rectangle*& firstRectangle, Rectangle*& secondRectangle);

unsigned int FindRectangle(Rectangle** rectangles, unsigned int count);

unsigned int FindMaxRectangle(Rectangle** rectangles, unsigned int count);

void RectangleMain();

#endif //!_RECTANGLE_H_