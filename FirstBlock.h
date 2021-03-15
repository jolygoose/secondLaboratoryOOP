#pragma once

#ifndef _FIRSTBLOCK_H_
#define _FIRSTBLOCK_H_

/// @brief Перечисление доступных пунктов меню первого блока
enum class FirstBlockTasks
{
	// Используются ASCII-коды
	First = 49, // 1
	Second = 50, // 2
	Exit = 27 // ESC
};

/// @brief Функция сортировки массива вещественных чисел
/// 
/// @param arrayOfValues - массив вещественных чисел
/// @param bufferSize - размер массива
void SortArrayOfDoubles(double* arrayOfValues, int bufferSize);

void FirstBlockMain();

#endif //!_FIRSTBLOCK_H_