#pragma once

#ifndef _COLOR_H_
#define _COLOR_H_

#include <iostream>

using namespace std;

/// @brief ������������ ������
enum class Color
{
	// ������������ ASCII-����
	Red = 49,		// 0
	Orange = 50,	// 1
	Yellow = 51,	// 2
	Green = 52,		// 3
	LightBlue = 53, // 4
	Blue = 54,		// 5
	Purple = 55		// 6
};

/// @brief ������� ����������� ����� � �����
/// 
/// @param color - ����
/// 
/// @return ��������� �����������
string ConvertColorEnumToText(Color color);

#endif //!_COLOR_H_