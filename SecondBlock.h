#pragma once

#ifndef _SECONDBLOCK_H_
#define _SECONDBLOCK_H_

/// @brief Перечисление доступных пунктов меню второго блока
enum class SecondBlockTasks
{
	First = 49,
	Second = 50,
	Exit = 27
};

void SecondBlockMain();

#endif //!_SECONDBLOCK_H_