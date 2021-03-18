#pragma once

#ifndef _THIRDBLOCK_H_
#define _THIRDBLOCK_H_

/// @brief Перечисление доступных пунктов меню третьего блока
enum class ThirdBlockTasks
{
	// Используются ASCII-коды
	FormOfEducation = 49, // 1
	Phone = 50,	// 2
	Season = 51,// 3
	Color = 52, // 4
	Exit = 27	// ESC
};

/// @brief Функция-меню для выбора перечисления
void WorkWithSomeEnums();

#endif //!_THIRDBLOCK_H_