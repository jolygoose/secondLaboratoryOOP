#pragma once

#ifndef _SECONDBLOCK_H_
#define _SECONDBLOCK_H_

/// @brief Перечисление доступных пунктов меню второго блока
enum class SecondBlockTasks
{
	// Используются ASCII-коды
	Rectangle = 49, // 1
	Flight = 50, // 2
	Movie = 51, // 3
	Time = 52, // 4
	Exit = 27 // ESC
};

void SecondBlockMain();

#endif //!_SECONDBLOCK_H_