#pragma once

#ifndef _SUBJECT_H_
#define _SUBJECT_H_

#include <string>

using namespace std;

/// @brief Перечисление дней недели
enum class Day
{
	// Используются ASCII-коды
	Monday = 49,	// 1
	Tuesday = 50,	// 2
	Wednesday = 51,	// 3
	Thursday = 52,	// 4
	Friday = 53,	// 5
	Saturday = 54,	// 6
	Sunday = 55		// 7
};

/// @brief Структура дисциплины
struct Subject
{
	// Название
	string Title;
	// Фамилия преподавателя
	string TeacherSurname;
	// Оценка
	unsigned int Grade;
	// День недели
	Day DayOfWeek;
};

#endif //!_SUBJECT_H_