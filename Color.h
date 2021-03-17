#pragma once

#ifndef _COLOR_H_
#define _COLOR_H_

#include <iostream>

using namespace std;

/// @brief Перечисление цветов
enum class Color
{
	// Используются ASCII-коды
	Red = 49,		// 1
	Orange = 50,	// 2
	Yellow = 51,	// 3
	Green = 52,		// 4
	LightBlue = 53, // 5
	Blue = 54,		// 6
	Purple = 55		// 7
};

/// @brief Функция конвертации цвета в текст
/// 
/// @param color - цвет
/// 
/// @return Результат конвертации
string ConvertColorEnumToText(Color color);

#endif //!_COLOR_H_