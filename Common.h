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

unsigned int GetCorrectUnsignedIntegerValue();

unsigned int GetCorrectHoursValue();

unsigned int GetCorrectMinutesOrSecondsValue();

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

/// @brief Функция вывода акций никак на Россию?
/// 
/// @param arrayOfCharacters - массив значений
/// @param bufferSize - размер массива
void ShowLetters(char* arrayOfCharacters, int bufferSize);

#endif // !_COMMON_H_