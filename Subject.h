#pragma once

#ifndef _SUBJECT_H_
#define _SUBJECT_H_

#include <string>

using namespace std;

/// @brief Структура дисциплины
struct Subject
{
	// Название
	string Title;
	// Фамилия преподавателя
	string TeacherSurname;
	// Оценка
	unsigned int Grade;
};

#endif //!_SUBJECT_H_