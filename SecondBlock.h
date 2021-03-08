#pragma once

#ifndef _SECONDBLOCK_H_
#define _SECONDBLOCK_H_

/// @brief Перечисление доступных пунктов меню второго блока
enum class SecondBlockTasks
{
	Rectangle = 49,
	Flight = 50,
	Movie = 51,
	Time = 52,
	Exit = 27
};

void SecondBlockMain();

#endif //!_SECONDBLOCK_H_