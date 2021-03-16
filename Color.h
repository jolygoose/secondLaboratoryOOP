#pragma once

#ifndef _COLOR_H_
#define _COLOR_H_

#include <iostream>

using namespace std;

/// @brief Перечисление цветов
enum class Color
{
	// Используются ASCII-коды
	Red = 49,		// 0
	Orange = 50,	// 1
	Yellow = 51,	// 2
	Green = 52,		// 3
	LightBlue = 53, // 4
	Blue = 54,		// 5
	Purple = 55		// 6
};

/// @brief Функция конвертации цвета в текст
/// 
/// @param color - цвет
/// 
/// @return Результат конвертации
string ConvertColorEnumToText(Color color);

#endif //!_COLOR_H_