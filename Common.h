#pragma once

#ifndef _COMMON_H_
#define _COMMON_H_

/// @brief Функция корректного считывания значения типа данных "integer"
/// 
/// @return Результат считывания введённого значения
int GetCorrectIntegerValue();

/// @brief Функция корректного считывания значения типа данных "float"
/// 
/// @return Результат считывания введённого значения
float GetCorrectFloatValue();

/// @brief Функция корректного считывания значения типа данных "double"
/// 
/// @return Результат считывания введённого значения
double GetCorrectDoubleValue();

/// @brief Функция корректного считывания значения типа данных "char"
/// 
/// @return Результат считывания введённого значения
char GetCorrectCharValue();

/// @brief Функция корректного считывания значения типа данных "unsigned int"
/// 
/// @return Результат считывания введённого значения
unsigned int GetCorrectUnsignedIntegerValue();

/// @brief Функция корректного считывания вещественного числа без знака
/// 
/// @return Результат считывания введённого значения
double GetCorrectUnsignedDoubleValue();

/// @brief Функция корректного считывания числа часов
/// 
/// @return Результат считывания введённого значения
unsigned int GetCorrectHoursValue();

/// @brief Функция корректного считывания числа минут или секунд
/// 
/// @return Результат считывания введённого значения
unsigned int GetCorrectMinutesOrSecondsValue();

/// @brief Функция корректного считывания индекса массива
/// 
/// @param arraySize - размер массива
/// 
/// @return Результат считывания введённого значения
unsigned int GetCorrectIndexOfArray(unsigned int arraySize);

/// @brief Функция получения случайного значения типа данных "int"
/// 
/// @param minimumBorder - минимальная граница
/// @param maximumBorder - максимальная граница
/// 
/// @return Результат получения случайного числа
int GetRandomIntegerValue(int minimumBorder, int maximumBorder);

/// @brief Функция получения случайного значения типа данных "double"
/// 
/// @return Результат получения случайного числа
double GetRandomDoubleValue();

/// @brief Функция вывода на экран массива значений типа "int"
/// 
/// @param arrayOfValues - массив значений
/// @param bufferSize - размер массива
void ShowArrayOfIntegers(int* arrayOfValues, const int bufferSize);

/// @brief Функция вывода на экран массива значений типа "float"
/// 
/// @param arrayOfValues - массив значений
/// @param bufferSize - размер массива
void ShowArrayOfFloats(float* arrayOfValues, int bufferSize);

/// @brief Функция вывода на экран массива значений типа "double"
/// 
/// @param arrayOfValues - массив значений
/// @param bufferSize - размер массива
void ShowArrayOfDoubles(double* arrayOfValues, int bufferSize);

/// @brief Функция вывода на экран массива значений типа "bool"
/// 
/// @param arrayOfValues - массив значений
/// @param bufferSize - размер массива
void ShowArrayOfBools(bool* arrayOfValues, int bufferSize);

/// @brief Функция вывода на экран массива значений типа "char"
/// 
/// @param arrayOfCharacters - массив значений
/// @param bufferSize - размер массива
void ShowArrayOfChars(char* arrayOfCharacters, int bufferSize);

/// @brief Проверка, являются ли введённые символы - буквами
/// 
/// @param symbol - Полученный символ
bool IsSymbolIsLetter(char symbol);

/// @brief Функция вывода букв на экран
/// 
/// @param arrayOfCharacters - массив значений
/// @param bufferSize - размер массива
void ShowLetters(char* arrayOfCharacters, int bufferSize);

#endif // !_COMMON_H_