#pragma once

#ifndef _SUBJECT_H_
#define _SUBJECT_H_

#include <string>

using namespace std;

/// @brief ������������ ���� ������
enum class Day
{
	// ������������ ASCII-����
	Monday = 49,	// 1
	Tuesday = 50,	// 2
	Wednesday = 51,	// 3
	Thursday = 52,	// 4
	Friday = 53,	// 5
	Saturday = 54,	// 6
	Sunday = 55		// 7
};

/// @brief ��������� ����������
struct Subject
{
	// ��������
	string Title;
	// ������� �������������
	string TeacherSurname;
	// ������
	unsigned int Grade;
	// ���� ������
	Day DayOfWeek;
};

#endif //!_SUBJECT_H_