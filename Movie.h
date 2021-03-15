#pragma once

#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>

using namespace std;

/// @brief Перечисление доступных пунктов меню работы
/// со структурой фильма
enum class MovieMenu
{
	// Используются ASCII-коды
	FirstTask = 49, // 1
	SecondTask = 50, // 2
	WorkWithArray = 51, // 3
	Exit = 27 // ESC
};

struct Movie
{
	// Название
	string Title = "";
	// Продолжительность в минутах
	unsigned int DurationInMinutes = 0;
	// Год выпуска
	unsigned int YearOfIssue = 0;
	// Жанр
	string Genre = "";
	// Рейтинг
	double Rating = 0;
};

Movie* MakeMovie(string title, string genre, double rating,
	unsigned int yearOfIssue, unsigned int durationInMinutes);

Movie* CopyMovie(Movie* movie);

Movie* DemoMovie();

Movie* PushInfoAboutMovie();

void ChangeInfoAboutMovie(Movie* movie);

void ShowMovie(Movie* movie);

void MovieMain();

#endif //!_MOVIE_H_