#pragma once

#ifndef _COLOR_H_
#define _COLOR_H_

#include <iostream>

using namespace std;

/// @brief ������������ ������
enum class Color
{
	// ������������ ASCII-����
	Red = 49,		// 1
	Orange = 50,	// 2
	Yellow = 51,	// 3
	Green = 52,		// 4
	LightBlue = 53, // 5
	Blue = 54,		// 6
	Purple = 55		// 7
};

/// @brief ������� ����������� ����� � �����
/// 
/// @param color - ����
/// 
/// @return ��������� �����������
string ConvertColorEnumToText(Color color);

#endif //!_COLOR_H_