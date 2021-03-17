#pragma once

#ifndef _PHONEMANUFACTURER_H_
#define _PHONEMANUFACTURER_H_

#include <iostream>

using namespace std;

/// @brief Перечисление доступных пунктов меню работы
/// с перечислением производителей телефонов
enum class PhoneManufacturerMenu
{
	// Используются ASCII-коды
	FirstTask = 49,		// 1
	SecondTask = 50,	// 2
	Exit = 27 // ESC
};

/// @brief Перечисление производителей телефонов
enum class PhoneManufacturer
{
	// Используются ASCII-коды
	Apple = 49,		// 1
	Honor = 50,		// 2
	Huawei = 51,	// 3
	OnePlus = 52,	// 4
	Oppo = 53,		// 5
	Samsung = 54,	// 6
	Sony = 55,		// 7
	Xiaomi = 56		// 8
};

string ConvertPhoneManufacturerEnumToText(PhoneManufacturer phoneManufacturer);

void ShowPhoneManufacturers(PhoneManufacturer phoneManufacturers[], const unsigned int arraySize);

void PhoneManufacturerMain();

#endif // !_PHONEMANUFACTURER_H_