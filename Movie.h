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

/// @brief Структура фильма
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

/// @brief Функция-конструктор объекта структуры фильм
/// 
/// @param title - название
/// @param genre - жанр
/// @param rating - рейтинг
/// @param yearOfIssue - год выпуска
/// @param durationInMinutes - продолжительность в минутах
/// 
/// @return Результат работы функции-конструктора
Movie* MakeMovie(string title, string genre, double rating,
	unsigned int yearOfIssue, unsigned int durationInMinutes);

/// @brief Функция копирования объекта структуры фильм
/// 
/// @param movie - фильм
/// 
/// @return Результат копирования
Movie* CopyMovie(Movie* movie);

/// @brief Функция, вызывающая функцию-конструктор
/// структуры фильм с определёнными значениями
/// 
/// @return Результат вызова функции-конструктора
Movie* DemoMovie();

/// @brief Функция запрашивающая пользовательский ввод информации о фильме и
/// передающая её в функцию-конструктор
/// 
/// @return Результат передачи введённых данных в функцию-конструктор
Movie* PushInfoAboutMovie();

/// @brief Функция изменения данных о фильме
/// 
/// @param movie - фильм
void ChangeInfoAboutMovie(Movie* movie);

/// @brief Функция вывода информации о фильме на экран
/// 
/// @param movie - фильм
void ShowMovie(Movie* movie);

/// @brief Функция-меню для работы со структурой фильм
void MovieMain();

#endif //!_MOVIE_H_