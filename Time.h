#pragma once

#ifndef _TIME_H_
#define _TIME_H_

/// @brief ������������ ��������� ������� ���� ������
/// �� ���������� �������
enum class TimeMenu
{
	// ������������ ASCII-����
	FirstTask = 49,		// 1
	SecondTask = 50,	// 2
	WorkWithArray = 51,	// 3
	Exit = 27 // ESC
};

/// @brief ��������� �������
struct Time
{
	// ����
	unsigned int Hours = 0;
	// ������
	unsigned int Minutes = 0;
	// �������
	unsigned int Seconds = 0;
};

/// @brief �������-����������� ������� ��������� �����
/// 
/// @param hours - ����
/// @param minutes - ������
/// @param seconds - �������
/// 
/// @return ��������� ������ �������-������������
Time* MakeTime(unsigned int hours, unsigned int minutes,
	unsigned int seconds);

/// @brief ������� ����������� ������� ��������� �����
/// 
/// @param time - �����
/// 
/// @return ��������� �����������
Time* CopyTime(Time* time);

/// @brief �������, ���������� �������-�����������
/// ��������� ����� � ������������ ����������
/// 
/// @return ��������� ������ �������-������������
Time* DemoTime();

/// @brief ������� ������������� ���������������� ���� ���������� � ������� �
/// ���������� � � �������-�����������
/// 
/// @return ��������� �������� �������� ������ � �������-�����������
Time* PushInfoAboutTime();

/// @brief ������� ��������� ������ � �������
/// 
/// @param time - �����
void ChangeInfoAboutTime(Time* time);

/// @brief ������� ������ ���������� � ������� �� �����
/// 
/// @param time - �����
void ShowTime(Time* time);

/// @brief �������-���� ��� ������ �� ���������� �����
void TimeMain();

#endif //!_TIME_H_