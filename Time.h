#pragma once

#ifndef _TIME_H_
#define _TIME_H_

/// @brief Перечисление доступных пунктов меню работы
/// со структурой времени
enum class TimeMenu
{
	// Используются ASCII-коды
	FirstTask = 49,		// 1
	SecondTask = 50,	// 2
	WorkWithArray = 51,	// 3
	Exit = 27 // ESC
};

/// @brief Структура времени
struct Time
{
	// Часы
	unsigned int Hours = 0;
	// Минуты
	unsigned int Minutes = 0;
	// Секунды
	unsigned int Seconds = 0;
};

/// @brief Функция-конструктор объекта структуры время
/// 
/// @param hours - часы
/// @param minutes - минуты
/// @param seconds - секунды
/// 
/// @return Результат работы функции-конструктора
Time* MakeTime(unsigned int hours, unsigned int minutes,
	unsigned int seconds);

/// @brief Функция копирования объекта структуры время
/// 
/// @param time - время
/// 
/// @return Результат копирования
Time* CopyTime(Time* time);

/// @brief Функция, вызывающая функцию-конструктор
/// структуры время с определёнными значениями
/// 
/// @return Результат вызова функции-конструктора
Time* DemoTime();

/// @brief Функция запрашивающая пользовательский ввод информации о времени и
/// передающая её в функцию-конструктор
/// 
/// @return Результат передачи введённых данных в функцию-конструктор
Time* PushInfoAboutTime();

/// @brief Функция изменения данных о времени
/// 
/// @param time - время
void ChangeInfoAboutTime(Time* time);

/// @brief Функция вывода информации о времени на экран
/// 
/// @param time - время
void ShowTime(Time* time);

/// @brief Функция-меню для работы со структурой время
void TimeMain();

#endif //!_TIME_H_