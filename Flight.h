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
	FirstTask = 49, // 1
	SecondTask = 50, // 2
	WorkWithArray = 51, // 3
	Exit = 27 // ESC
};

struct Flight
{
	// Пункт отправления
	string DeparturePoint = "";
	// Пункт назначения
	string Destination = "";
	// Продолжительность полёта в минутах
	unsigned int DurationInMinutes = 0;
};

Flight* MakeFlight(string departurePoint, string destination,
	unsigned int durationInMinutes);

Flight* CopyFlight(Flight* flight);

Flight* DemoFlight();

Flight* PushInfoAboutFlight();

unsigned int FindShortestFlight(Flight** flights, unsigned int count);

void ChangeInfoAboutFlight(Flight* flight);

void ShowFlight(Flight* flight);

void FlightMain();

#endif //!_FLIGHT_H_