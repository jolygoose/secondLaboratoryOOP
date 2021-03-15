#pragma once

#ifndef _FLIGHT_H_
#define _FLIGHT_H_

#include <string>

using namespace std;

/// @brief ������������ ��������� ������� ���� ������
/// �� ���������� �����
enum class FlightMenu
{
	// ������������ ASCII-����
	FirstTask = 49, // 1
	SecondTask = 50, // 2
	WorkWithArray = 51, // 3
	Exit = 27 // ESC
};

struct Flight
{
	// ����� �����������
	string DeparturePoint = "";
	// ����� ����������
	string Destination = "";
	// ����������������� ����� � �������
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