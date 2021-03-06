#pragma once

#ifndef _FIRSTBLOCK_H_
#define _FIRSTBLOCK_H_

/// @brief ������������ ��������� ������� ���� ������� �����
enum class FirstBlockTasks
{
	First = 49,
	Second = 50,
	Exit = 27
};

/// @brief ������� ���������� ������� ������������ �����
/// 
/// @param arrayOfValues - ������ ������������ �����
/// @param bufferSize - ������ �������
void SortArrayOfDoubles(double* arrayOfValues, int bufferSize);

void FirstBlockMain();

#endif //!_FIRSTBLOCK_H_