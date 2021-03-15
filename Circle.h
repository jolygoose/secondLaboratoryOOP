#pragma once

#ifndef _CIRCLE_H_
#define _CIRCLE_H_

#include <string>

using namespace std;

/// @brief Структура круга
struct Circle
{
	// X-координата центра круга
	double X;
	// Y-координата центра круга
	double Y;
	// Радиус
	double Radius;
	// Цвет
	string Color;
};

#endif //!_CIRCLE_H_