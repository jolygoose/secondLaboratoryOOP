#pragma once

#ifndef _SEASON_H_
#define _SEASON_H_

#include <iostream>

using namespace std;

/// @brief ������������ ��������� ������� ���� ������
/// � ������������� ����� ����
enum class SeasonMenu
{
	// ������������ ASCII-����
	FirstTask = 49,		// 1
	SecondTask = 50,	// 2
	Exit = 27 // ESC
};

/// @brief ������������ ������� ����
enum class Season
{
	// ������������ ASCII-����
	Winter = 49, // 1
	Spring = 50, // 2
	Summer = 51, // 3
	Autumn = 52  // 4
};

string ConvertSeasonEnumToText(Season season);

void ShowSeasons(Season seasons[], const unsigned int arraySize);

void SeasonMain();

#endif // !_SEASON_H_