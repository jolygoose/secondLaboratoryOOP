#pragma once

#ifndef _SUBJECT_H_
#define _SUBJECT_H_

#include <string>

using namespace std;

/// @brief Перечисление дней недели
enum class Day
{
	// Используются ASCII-коды
	Monday = 1, // 1
	Tuesday = 2, // 2
	Wednesday = 3, // 3
	Thursday = 4, // 4
	Friday = 5, // 5
	Saturday = 6, // 6
	Sunday = 7 // 7
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