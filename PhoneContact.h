#pragma once

#ifndef _PHONECONTACT_H_
#define _PHONECONTACT_H_

#include <string>

using namespace std;

/// @brief ��������� �������� � ��������
struct PhoneContact
{
	// ���
	string Name;
	// �������
	string Surname;
	// ����� ��������
	unsigned int Number;
};

#endif //!_PHONECONTACT_H_