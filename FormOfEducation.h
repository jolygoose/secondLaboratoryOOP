#pragma once

#ifndef _FORMOFEDUCATION_H_
#define _FORMOFEDUCATION_H_

#include <iostream>

using namespace std;

/// @brief ������������ ��������� ������� ���� ������
/// � ������������� ���� ��������
enum class FormOfEducationMenu
{
	// ������������ ASCII-����
	FirstTask = 49,		// 1
	SecondTask = 50,	// 2
	Exit = 27 // ESC
};

/// @brief ������������ ���� ��������
enum class FormOfEducation
{
	// ������������ ASCII-����
	FullTime = 49,	// 1
	�orrespondence = 50, // 2
	Evening = 51,	// 3
	Distance = 52,	// 4
};

/// @brief ������� ��������������� ����� �������� � �����
/// 
/// @param formOfEducation 
/// @return 
string ConvertFormOfEducationEnumToText(FormOfEducation formOfEducation);

void ShowFormsOfEducation(FormOfEducation formsOfEducation[], const unsigned int arraySize);

void FormOfEducationMain();

#endif //!_FORMOFEDUCATION_H_