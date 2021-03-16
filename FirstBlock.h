#pragma once

#ifndef _FIRSTBLOCK_H_
#define _FIRSTBLOCK_H_

/// @brief ������������ ��������� ������� ���� ������� �����
enum class FirstBlockTasks
{
	// ������������ ASCII-����
	First = 49, // 1
	Second = 50, // 2
	Exit = 27 // ESC
};

/// @brief ������� ���������� ������� ������������ �����
/// 
/// @param arrayOfValues - ������ ������������ �����
/// @param bufferSize - ������ �������
void SortArrayOfDoubles(double* arrayOfValues, int bufferSize);

/// @brief �������-���� ��� ������ � ������ ������ �������
void FirstBlockMain();

#endif //!_FIRSTBLOCK_H_