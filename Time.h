#pragma once

#ifndef _TIME_H_
#define _TIME_H_

/// @brief Перечисление доступных пунктов меню работы
/// со структурой времени
enum class TimeMenu
{
	// Используются ASCII-коды
	FirstTask = 49, // 1
	SecondTask = 50, // 2
	WorkWithArray = 51, // 3
	Exit = 27 // ESC
};

struct Time
{
	// Часы
	unsigned int Hours = 0;
	// Минуты
	unsigned int Minutes = 0;
	// Секунды
	unsigned int Seconds = 0;
};

Time* MakeTime(unsigned int hours, unsigned int minutes,
	unsigned int seconds);

Time* CopyTime(Time* time);

Time* DemoTime();

Time* PushInfoAboutTime();

void ChangeInfoAboutTime(Time* time);

void ShowTime(Time* time);

void TimeMain();

#endif //!_TIME_H_