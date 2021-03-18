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
	FirstTask = 49,		// 1
	SecondTask = 50,	// 2
	WorkWithArray = 51,	// 3
	Exit = 27 // ESC
};

/// @brief Перечисление жанров
enum class Genre
{
	// Используются ASCII-коды
	Comedy = 49,	// 1
	Drama = 50,		// 2
	Thriller = 51,	// 3
	Action = 52,	// 4
	Horror = 53,	// 5
	Blockbuster = 54// 6
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
	Genre MovieGenre;
	// Рейтинг
	double Rating = 0;
};

/// @brief Функция-конструктор объекта структуры фильм
/// 
/// @param title - название
/// @param movieGenre - жанр
/// @param rating - рейтинг
/// @param yearOfIssue - год выпуска
/// @param durationInMinutes - продолжительность в минутах
/// 
/// @return Результат работы функции-конструктора
Movie* MakeMovie(string title, Genre movieGenre, double rating,
	unsigned int yearOfIssue, unsigned int durationInMinutes);

/// @brief Функция корректного считывания жанра
/// 
/// @return Результат считывания
Genre GetCorrectGenre();

/// @brief Функция корректного считывания рейтинга фильма
/// 
/// @return Результат считывания
double GetCorrectRating();

/// @brief Функция конвертирования жанра в текст
/// 
/// @return Результат конвертации
string ConvertGenreEnumToText(Genre movieGenre);

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

Movie* FindBestGenreMovie(Movie** movies, unsigned int count, Genre findedGenre);

/// @brief Функция-меню для работы со структурой фильм
void MovieMain();

#endif //!_MOVIE_H_