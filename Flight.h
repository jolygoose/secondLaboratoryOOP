#pragma once

#ifndef _VOYAGE_H_
#define _VOYAGE_H_

#include <string>

using namespace std;

enum class FlightMenu
{
	FirstTask = 49,
	SecondTask = 50,
	WorkWithArray = 51,
	Exit = 27
};

struct Flight
{
	string DeparturePoint = "";
	string Destination = "";
	unsigned int DurationInMinutes = 0;
};

Flight* MakeFlight(string departurePoint, string destination,
	unsigned int durationInMinutes);

Flight* DemoFlight();

Flight* PushInfoAboutFlight();

unsigned int FindShortestFlight(Flight** flights, unsigned int count);

void PushInfoAboutFlight(Flight* flight);

void ShowFlight(Flight* flight);

void FlightMain();

#endif //!_VOYAGE_H_