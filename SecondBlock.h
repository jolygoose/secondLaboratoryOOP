#pragma once

#ifndef _SECONDBLOCK_H_
#define _SECONDBLOCK_H_

/// @brief Перечисление доступных пунктов меню второго блока
enum class SecondBlockTasks
{
	// Используются ASCII-коды
	Rectangle = 49,	// 1
	Flight = 50,	// 2
	Movie = 51,		// 3
	Time = 52,		// 4
	Circle = 53,	// 5
	Exit = 27		// ESC
};

/// @brief Функция-меню для выбора структуры
void WorkWithSomeStructuresMain();

#endif //!_SECONDBLOCK_H_