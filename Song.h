#pragma once

#ifndef _SONG_H_
#define _SONG_H_

#include <string>

using namespace std;

/// @brief Структура песни
struct Song
{
	// Название
	string Title;
	// Исполнитель
	string Singer;
	// Продолжительность в секундах
	unsigned int DurationInSeconds;
};

#endif //!_SONG_H_