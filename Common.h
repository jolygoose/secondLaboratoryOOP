#pragma once

#ifndef _COMMON_H_
#define _COMMON_H_

/// @brief ������� ����������� ���������� �������� ���� ������ "integer"
/// 
/// @return ��������� ���������� ��������� ��������
int GetCorrectIntegerValue();

/// @brief ������� ����������� ���������� �������� ���� ������ "float"
/// 
/// @return ��������� ���������� ��������� ��������
float GetCorrectFloatValue();

/// @brief ������� ����������� ���������� �������� ���� ������ "double"
/// 
/// @return ��������� ���������� ��������� ��������
double GetCorrectDoubleValue();

/// @brief ������� ����������� ���������� �������� ���� ������ "char"
/// 
/// @return ��������� ���������� ��������� ��������
char GetCorrectCharValue();

/// @brief ������� ����������� ���������� �������� ���� ������ "unsigned int"
/// 
/// @return ��������� ���������� ��������� ��������
unsigned int GetCorrectUnsignedIntegerValue();

/// @brief ������� ����������� ���������� ������������� ����� ��� �����
/// 
/// @return ��������� ���������� ��������� ��������
double GetCorrectUnsignedDoubleValue();

/// @brief ������� ����������� ���������� ����� �����
/// 
/// @return ��������� ���������� ��������� ��������
unsigned int GetCorrectHoursValue();

/// @brief ������� ����������� ���������� ����� ����� ��� ������
/// 
/// @return ��������� ���������� ��������� ��������
unsigned int GetCorrectMinutesOrSecondsValue();

/// @brief ������� ����������� ���������� ������� �������
/// 
/// @param arraySize - ������ �������
/// 
/// @return ��������� ���������� ��������� ��������
unsigned int GetCorrectIndexOfArray(unsigned int arraySize);

/// @brief ������� ��������� ���������� �������� ���� ������ "int"
/// 
/// @param minimumBorder - ����������� �������
/// @param maximumBorder - ������������ �������
/// 
/// @return ��������� ��������� ���������� �����
int GetRandomIntegerValue(int minimumBorder, int maximumBorder);

/// @brief ������� ��������� ���������� �������� ���� ������ "double"
/// 
/// @return ��������� ��������� ���������� �����
double GetRandomDoubleValue();

/// @brief ������� ������ �� ����� ������� �������� ���� "int"
/// 
/// @param arrayOfValues - ������ ��������
/// @param bufferSize - ������ �������
void ShowArrayOfIntegers(int* arrayOfValues, const int bufferSize);

/// @brief ������� ������ �� ����� ������� �������� ���� "float"
/// 
/// @param arrayOfValues - ������ ��������
/// @param bufferSize - ������ �������
void ShowArrayOfFloats(float* arrayOfValues, int bufferSize);

/// @brief ������� ������ �� ����� ������� �������� ���� "double"
/// 
/// @param arrayOfValues - ������ ��������
/// @param bufferSize - ������ �������
void ShowArrayOfDoubles(double* arrayOfValues, int bufferSize);

/// @brief ������� ������ �� ����� ������� �������� ���� "bool"
/// 
/// @param arrayOfValues - ������ ��������
/// @param bufferSize - ������ �������
void ShowArrayOfBools(bool* arrayOfValues, int bufferSize);

/// @brief ������� ������ �� ����� ������� �������� ���� "char"
/// 
/// @param arrayOfCharacters - ������ ��������
/// @param bufferSize - ������ �������
void ShowArrayOfChars(char* arrayOfCharacters, int bufferSize);

/// @brief ��������, �������� �� �������� ������� - �������
/// 
/// @param symbol - ���������� ������
bool IsSymbolIsLetter(char symbol);

/// @brief ������� ������ ����� ����� �� ������?
/// 
/// @param arrayOfCharacters - ������ ��������
/// @param bufferSize - ������ �������
void ShowLetters(char* arrayOfCharacters, int bufferSize);

#endif // !_COMMON_H_