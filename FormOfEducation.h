#pragma once

#ifndef _FORMOFEDUCATION_H_
#define _FORMOFEDUCATION_H_

#include <iostream>

using namespace std;

/// @brief Перечисление доступных пунктов меню работы
/// с перечислением форм обучения
enum class FormOfEducationMenu
{
	// Используются ASCII-коды
	FirstTask = 49,		// 1
	SecondTask = 50,	// 2
	Exit = 27 // ESC
};

/// @brief Перечисление форм обучения
enum class FormOfEducation
{
	// Используются ASCII-коды
	FullTime = 49,	// 1
	Correspondence = 50, // 2
	Evening = 51,	// 3
	Distance = 52,	// 4
};

/// @brief Функция конвертирования формы обучения в текст
/// 
/// @param formOfEducation - форма обучения
/// 
/// @return Результат конвертации
string ConvertFormOfEducationEnumToText(FormOfEducation formOfEducation);

/// @brief Функция вывода на экран массива форм обучения
/// 
/// @param formsOfEducation - массив форм обучения
/// @param arraySize - размер массива
void ShowFormsOfEducation(FormOfEducation formsOfEducation[], const unsigned int arraySize);

/// @brief Функция-меню для работы с перечислением форм обучения
void FormOfEducationMain();

#endif //!_FORMOFEDUCATION_H_