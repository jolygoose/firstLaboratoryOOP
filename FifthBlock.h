#pragma once

#ifndef _FIFTHBLOCK_H_
#define _FIFTHBLOCK_H_

/// @brief ������������ ������� ���� ������ ����� �������
enum class FifthBlockTasks
{
	First = 49,
	Second = 50,
	Third = 51,
	Fourth = 52,
	Fifth = 53,
	Sixth = 54,
	Seventh = 55,
	Eighth = 56,
	Exit = 27
};

/// @brief ������� ���������� ������� ������������ �����
/// 
/// @param arrayOfValues - ������ ������������ �����
/// @param bufferSize - ������ �������
void SortArrayOfDoubles(double* arrayOfValues, int bufferSize);

/// @brief ������� ������ �������� � �������
/// 
/// @param arrayOfValues - ������ ������������� ��������
/// @param bufferSize - ������ �������
/// @param searchValue - ������� ��������
/// 
/// @retval 0 - �������� �� �������
/// 
/// @return ��������� ������ ��������
int SearchValue(int* arrayOfValues, int bufferSize, int searchValue);

/// @brief �������, ��������� ������ ��������� �����
/// 
/// @param arraySize - ������ �������
/// 
/// @return ��������� �������� �������
int* MakeRandomArray(int arraySize);

/// @brief ������� �������� � ���������� ������� �������������� ����������
/// 
/// @param count - ���������� ��������
/// 
/// @return ��������� �������� �������
int* ReadArray(int count);

/// @brief �������, ��������� ���������� ������������� �������� � �������
/// 
/// @param values - ������ ��������
/// @param count - ���������� ������������� ��������
/// 
/// @return ��������� ����� ������������� ��������
int CountPositiveValues(int* values, int count);

/// @brief �������-���� ��� ������ � ��������� ������ �����
void FifthBlockMain();

#endif // !_FIFTHBLOCK_H_