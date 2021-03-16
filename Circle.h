#pragma once

#ifndef _CIRCLE_H_
#define _CIRCLE_H_

#include "Color.h"

/// @brief ��������� �����
struct Circle
{
	// X-���������� ������ �����
	double X;
	// Y-���������� ������ �����
	double Y;
	// ������
	double Radius;
	// ����
	Color MainColor;
};

/// @brief �������-����������� ������� ��������� ����
/// 
/// @param x - ���������� X
/// @param y - ���������� Y
/// @param radius - ������ �����
/// @param mainColor - ���� �����
/// 
/// @return ��������� ������ �������-������������
Circle* MakeCircle(double x, double y, double radius, Color mainColor);

/// @brief ������� ����������� ������� ��������� ����
/// 
/// @param circle - ����
/// 
/// @return ��������� �����������
Circle* CopyCircle(Circle* circle);

/// @brief ������� ������ ���������� � ����� �� �����
/// 
/// @param circle - ����
void ShowCircle(Circle* circle);

/// @brief �������-���� ��� ������ �� ���������� �����
void CircleMain();

#endif //!_CIRCLE_H_