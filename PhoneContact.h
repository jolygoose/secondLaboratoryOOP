#pragma once

#ifndef _PHONECONTACT_H_
#define _PHONECONTACT_H_

#include <string>

using namespace std;

/// @brief Структура контакта в телефоне
struct PhoneContact
{
	// Имя
	string Name;
	// Фамилия
	string Surname;
	// Номер телефона
	unsigned int Number;
};

#endif //!_PHONECONTACT_H_