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
	FirstTask = 49,		// 1
	SecondTask = 50,	// 2
	WorkWithArray = 51, // 3
	Exit = 27 // ESC
};

/// @brief ��������� �����
struct Flight
{
	// ����� �����������
	string DeparturePoint = "";
	// ����� ����������
	string Destination = "";
	// ����������������� ����� � �������
	unsigned int DurationInMinutes = 0;
};

/// @brief �������-����������� ������� ��������� ����
/// 
/// @param departurePoint - ����� �����������
/// @param destination - ����� ����������
/// @param durationInMinutes - ����������������� ����� � �������
/// 
/// @return ��������� ������ �������-������������
Flight* MakeFlight(string departurePoint, string destination,
	unsigned int durationInMinutes);

/// @brief ������� ����������� ������� ��������� ����
/// 
/// @param flight - ����
/// 
/// @return ��������� �����������
Flight* CopyFlight(Flight* flight);

/// @brief �������, ���������� �������-�����������
/// ��������� ���� � ������������ ����������
/// 
/// @return ��������� ������ �������-������������
Flight* DemoFlight();

/// @brief ������� ������������� ���������������� ���� ���������� � ����� �
/// ���������� � � �������-�����������
/// 
/// @return ��������� �������� �������� ������ � �������-�����������
Flight* PushInfoAboutFlight();

/// @brief ������� ������ ����������� �����
/// 
/// @param flights - ������ ������
/// @param count - ���������� ������
/// 
/// @return ��������� ������
unsigned int FindShortestFlight(Flight** flights, unsigned int count);

/// @brief ������� ��������� ������ � �����
/// 
/// @param flight - ����
void ChangeInfoAboutFlight(Flight* flight);

/// @brief ������� ������ ���������� � ����� �� �����
/// 
/// @param flight - ����
void ShowFlight(Flight* flight);

/// @brief �������-���� ��� ������ �� ���������� ����
void FlightMain();

#endif //!_FLIGHT_H_