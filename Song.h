#pragma once

#ifndef _SONG_H_
#define _SONG_H_

#include <string>

using namespace std;

/// @brief ��������� �����
struct Song
{
	// ��������
	string Title;
	// �����������
	string Singer;
	// ����������������� � ��������
	unsigned int DurationInSeconds;
};

#endif //!_SONG_H_