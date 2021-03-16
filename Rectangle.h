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

/// @brief ������������ ������
enum class Color
{
	// ������������ ����������� ASCII-����
	Red, // 0
	Orange, // 1
	Yellow, // 2
	Green, // 3
	LightBlue, // 4
	Blue, // 5
	Purple // 6
};

/// @brief ��������� ��������������
struct Rectangle
{
	// �����
	double Length = 0;
	// ������
	double Width = 0;
	// ����
	string Color;
};

/// @brief �������-����������� ������� ��������� �������������
/// 
/// @param length - �����
/// @param width - ������
/// @param color - ����
/// 
/// @return ��������� ������ �������-������������
Rectangle* MakeRectangle(double length, double width, string color);

/// @brief ������� ����������� ������� ��������� �������������
/// 
/// @param rectangle - �������������
/// 
/// @return ��������� �����������
Rectangle* CopyRectangle(Rectangle* rectangle);

/// @brief �������, ���������� �������-�����������
/// ��������� ������������� � ������������ ����������
/// 
/// @return ��������� ������ �������-������������
Rectangle* DemoRectangle();

/// @brief ������� ������������� ���������������� ���� ���������� � ��������������,
/// ������� ������� �� ���������, � ���������� � � �������-�����������
/// 
/// @return ��������� �������� �������� ������ � �������-�����������
Rectangle* PushInfoAboutRectangle();

/// @brief ������� ��������� ������ � ��������������
/// 
/// @param rectangle - �������������
void ChangeInfoAboutRectangle(Rectangle* rectangle);

/// @brief ������� ������ ���������� � ��������������,
/// ������� ������� �� ���������, �� �����
/// 
/// @param rectangle - �������������
void ShowRectangle(Rectangle* rectangle);

/// @brief ������� ������ ���������� � ��������������,
/// ������� ������� �� ������, �� �����
/// 
/// @param rectangle - �������������
void WriteRectangle(Rectangle*& rectangle);

/// @brief ������� ������������� ���������������� ���� ���������� � ��������������,
/// ������� ������� �� ������, � ���������� � � �������-�����������
/// 
/// @param rectangle - �������������
void ReadRectangle(Rectangle*& rectangle);

/// @brief �������, ������������ ���������������� ������ � ������ ���������������
/// � ��������� �� �� �����
/// 
/// @param arrayOfRectangles - ������ ���������������
/// @param arraySize - ������ �������
void DemoReadAndWriteRectangles(Rectangle** arrayOfRectangles, unsigned int arraySize);

/// @brief ������� ������ ������ ���� ����� ����� ����������������
/// 
/// @param firstRectangle - ������ ������������� ��� ������ �������
/// @param secondRectangle - ������ ������������� ��� ������ �������
void Exchange(Rectangle*& firstRectangle, Rectangle*& secondRectangle);

/// @brief ������� ������ �������������� � ������������ �������
/// 
/// @param rectangles - ������ ���������������
/// @param count - ������ �������
/// 
/// @return ��������� ������ ��������������
unsigned int FindRectangle(Rectangle** rectangles, unsigned int count);

/// @brief ������� ������ �������������� � ������������ ��������
/// 
/// @param rectangles - ������ ���������������
/// @param count - ������ �������
/// 
/// @return ��������� ������ ��������������
unsigned int FindMaxRectangle(Rectangle** rectangles, unsigned int count);

/// @brief �������-���� ��� ������ �� ���������� �������������
void RectangleMain();

#endif //!_RECTANGLE_H_