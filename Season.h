#pragma once

#ifndef _SEASON_H_
#define _SEASON_H_

#include <iostream>

using namespace std;

/// @brief Перечисление доступных пунктов меню работы
/// с перечислением времён года
enum class SeasonMenu
{
	// Используются ASCII-коды
	FirstTask = 49,		// 1
	SecondTask = 50,	// 2
	Exit = 27 // ESC
};

/// @brief Перечисление времён года
enum class Season
{
	// Используются ASCII-коды
	Winter = 49, // 1
	Spring = 50, // 2
	Summer = 51, // 3
	Autumn = 52  // 4
};

/// @brief Фукнкция конвертации перечисления времён года в текст
/// 
/// @param season - время года
/// 
/// @return Результат конвертации
string ConvertSeasonEnumToText(Season season);

/// @brief Функция вывода на экран массива времён года
/// 
/// @param seasons - массив времён года
/// @param arraySize - размер массива
void ShowSeasons(Season seasons[], const unsigned int arraySize);

/// @brief Функция-меню для работы с перечислением времён года
void SeasonMain();

#endif // !_SEASON_H_