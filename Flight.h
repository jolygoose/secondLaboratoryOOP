#pragma once

#ifndef _FLIGHT_H_
#define _FLIGHT_H_

#include <string>

using namespace std;

/// @brief Перечисление доступных пунктов меню работы
/// со структурой рейса
enum class FlightMenu
{
	// Используются ASCII-коды
	FirstTask = 49,		// 1
	SecondTask = 50,	// 2
	WorkWithArray = 51, // 3
	Exit = 27 // ESC
};

/// @brief Структура рейса
struct Flight
{
	// Пункт отправления
	string DeparturePoint = "";
	// Пункт назначения
	string Destination = "";
	// Продолжительность полёта в минутах
	unsigned int DurationInMinutes = 0;
};

/// @brief Функция-конструктор объекта структуры рейс
/// 
/// @param departurePoint - пункт отправления
/// @param destination - пункт назначения
/// @param durationInMinutes - продолжительность полёта в минутах
/// 
/// @return Результат работы функции-конструктора
Flight* MakeFlight(string departurePoint, string destination,
	unsigned int durationInMinutes);

/// @brief Функция копирования объекта структуры рейс
/// 
/// @param flight - рейс
/// 
/// @return Результат копирования
Flight* CopyFlight(Flight* flight);

/// @brief Функция, вызывающая функцию-конструктор
/// структуры рейс с определёнными значениями
/// 
/// @return Результат вызова функции-конструктора
Flight* DemoFlight();

/// @brief Функция запрашивающая пользовательский ввод информации о рейсе и
/// передающая её в функцию-конструктор
/// 
/// @return Результат передачи введённых данных в функцию-конструктор
Flight* PushInfoAboutFlight();

/// @brief Функция поиска кратчайшего рейса
/// 
/// @param flights - массив рейсов
/// @param count - количество рейсов
/// 
/// @return Результат поиска
unsigned int FindShortestFlight(Flight** flights, unsigned int count);

/// @brief Функция изменения данных о рейсе
/// 
/// @param flight - рейс
void ChangeInfoAboutFlight(Flight* flight);

/// @brief Функция вывода информации о рейсе на экран
/// 
/// @param flight - рейс
void ShowFlight(Flight* flight);

/// @brief Функция-меню для работы со структурой рейс
void FlightMain();

#endif //!_FLIGHT_H_