#pragma once

#ifndef _FIRSTBLOCK_H_
#define _FIRSTBLOCK_H_

/// @brief ѕеречисление доступных пунктов меню первого блока
enum class FirstBlockTasks
{
	First = 49,
	Second = 50,
	Exit = 27
};

/// @brief ‘ункци€ сортировки массива вещественных чисел
/// 
/// @param arrayOfValues - массив вещественных чисел
/// @param bufferSize - размер массива
void SortArrayOfDoubles(double* arrayOfValues, int bufferSize);

void FirstBlockMain();

#endif //!_FIRSTBLOCK_H_