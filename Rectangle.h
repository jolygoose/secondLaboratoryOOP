#pragma once

#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_

#include <string>

using namespace std;

/// @brief Перечисление доступных пунктов меню работы
/// со структурой прямоугольника
enum class RectangleMenu
{
	// Используются ASCII-коды
	FirstTask = 49, // 1
	SecondTask = 50, // 2
	WorkWithArray = 51, // 3
	Exit = 27 // ESC
};

/// @brief Перечисление цветов
enum class Color
{
	// Используются стандартные ASCII-коды
	Red, // 0
	Orange, // 1
	Yellow, // 2
	Green, // 3
	LightBlue, // 4
	Blue, // 5
	Purple // 6
};

/// @brief Структура прямоугольника
struct Rectangle
{
	// Длина
	double Length = 0;
	// Ширина
	double Width = 0;
	// Цвет
	string Color;
};

/// @brief Функция-конструктор объекта структуры прямоугольник
/// 
/// @param length - длина
/// @param width - ширина
/// @param color - цвет
/// 
/// @return Результат работы функции-конструктора
Rectangle* MakeRectangle(double length, double width, string color);

/// @brief Функция копирования объекта структуры прямоугольник
/// 
/// @param rectangle - прямоугольник
/// 
/// @return Результат копирования
Rectangle* CopyRectangle(Rectangle* rectangle);

/// @brief Функция, вызывающая функцию-конструктор
/// структуры прямоугольник с определёнными значениями
/// 
/// @return Результат вызова функции-конструктора
Rectangle* DemoRectangle();

/// @brief Функция запрашивающая пользовательский ввод информации о прямоугольнике,
/// который передан по указателю, и передающая её в функцию-конструктор
/// 
/// @return Результат передачи введённых данных в функцию-конструктор
Rectangle* PushInfoAboutRectangle();

/// @brief Функция изменения данных о прямоугольнике
/// 
/// @param rectangle - прямоугольник
void ChangeInfoAboutRectangle(Rectangle* rectangle);

/// @brief Функция вывода информации о прямоугольнике,
/// который передан по указателю, на экран
/// 
/// @param rectangle - прямоугольник
void ShowRectangle(Rectangle* rectangle);

/// @brief Функция вывода информации о прямоугольнике,
/// который передан по ссылке, на экран
/// 
/// @param rectangle - прямоугольник
void WriteRectangle(Rectangle*& rectangle);

/// @brief Функция запрашивающая пользовательский ввод информации о прямоугольнике,
/// который передан по ссылке, и передающая её в функцию-конструктор
/// 
/// @param rectangle - прямоугольник
void ReadRectangle(Rectangle*& rectangle);

/// @brief Функция, записывающая пользовательские данные в массив прямоугольников
/// и выводящая их на экран
/// 
/// @param arrayOfRectangles - массив прямоугольников
/// @param arraySize - размер массива
void DemoReadAndWriteRectangles(Rectangle** arrayOfRectangles, unsigned int arraySize);

/// @brief Функция обмена данных двух между двумя прямоугольниками
/// 
/// @param firstRectangle - первый прямоугольник для обмена данными
/// @param secondRectangle - второй прямоугольник для обмена данными
void Exchange(Rectangle*& firstRectangle, Rectangle*& secondRectangle);

/// @brief Функция поиска прямоугольника с максимальной длинной
/// 
/// @param rectangles - массив прямоугольников
/// @param count - размер массива
/// 
/// @return Результат поиска прямоугольника
unsigned int FindRectangle(Rectangle** rectangles, unsigned int count);

/// @brief Функция поиска прямоугольника с максимальной площадью
/// 
/// @param rectangles - массив прямоугольников
/// @param count - размер массива
/// 
/// @return Результат поиска прямоугольника
unsigned int FindMaxRectangle(Rectangle** rectangles, unsigned int count);

/// @brief Функция-меню для работы со структурой прямоугольник
void RectangleMain();

#endif //!_RECTANGLE_H_