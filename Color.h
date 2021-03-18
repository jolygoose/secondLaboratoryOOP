#pragma once

#ifndef _COLOR_H_
#define _COLOR_H_

#include <iostream>

using namespace std;

/// @brief Перечисление доступных пунктов меню работы
/// с перечислением цветов
enum class ColorMenu
{
	// Используются ASCII-коды
	FirstTask = 49,		// 1
	SecondTask = 50,	// 2
	Exit = 27 // ESC
};

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

/// @brief Функция корректного считывания цвета
/// 
/// @return Результат считывания
Color GetCorrectColor();

/// @brief Функция конвертации цвета в текст
/// 
/// @param color - цвет
/// 
/// @return Результат конвертации
string ConvertColorEnumToText(Color color);

/// @brief Функция вывода массива цветов на экран
/// 
/// @param colors - массив цветов 
/// @param arraySize - размер массива
void ShowColors(Color colors[], const unsigned int arraySize);

/// @brief Функция подсчёта количества определённого цвета в массиве
/// 
/// @param colors - массив цветов
/// @param count - размер массива
/// @param findedColor - искомый цвет
/// 
/// @return Результат подсчёта
int CountColor(Color* colors, unsigned int count, Color findedColor);

/// @brief Функция-меню для работы с перечислением цветов
void ColorMain();

#endif //!_COLOR_H_