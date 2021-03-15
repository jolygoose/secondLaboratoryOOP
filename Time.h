#pragma once

#ifndef _TIME_H_
#define _TIME_H_

enum class TimeMenu
{
	FirstTask = 49,
	SecondTask = 50,
	WorkWithArray = 51,
	Exit = 27
};

struct Time
{
	unsigned int Hours = 0;
	unsigned int Minutes = 0;
	unsigned int Seconds = 0;
};

Time* MakeTime(unsigned int hours, unsigned int minutes,
	unsigned int seconds);

Time* DemoTime();

Time* PushInfoAboutTime();

void ChangeInfoAboutTime(Time* time);

void ShowTime(Time* time);

void TimeMain();

#endif //!_TIME_H_