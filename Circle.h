#pragma once

#ifndef _CIRCLE_H_
#define _CIRCLE_H_

#include "Color.h"

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
	Color MainColor;
};

/// @brief Функция-конструктор объекта структуры круг
/// 
/// @param x - координата X
/// @param y - координата Y
/// @param radius - радиус круга
/// @param mainColor - цвет круга
/// 
/// @return Результат работы функции-конструктора
Circle* MakeCircle(double x, double y, double radius, Color mainColor);

/// @brief Функция копирования объекта структуры круг
/// 
/// @param circle - круг
/// 
/// @return Результат копирования
Circle* CopyCircle(Circle* circle);

/// @brief Функция вывода информации о круге на экран
/// 
/// @param circle - круг
void ShowCircle(Circle* circle);

/// @brief Функция-меню для работы со структурой круга
void CircleMain();

#endif //!_CIRCLE_H_