#pragma once

#ifndef _SECONDBLOCK_H_
#define _SECONDBLOCK_H_

/// @brief ������������ ������� ���� ������� ����� �������
enum class SecondBlockTasks
{
	First = 49,
	Second = 50,
	Third = 51,
	Exit = 27
};

/// @brief ������� ���������� ������� ������������� ��������
/// 
/// @param arrayOfValues - ������ ������������� ��������
/// @param bufferSize - ������ �������
void SortArrayOfIntegers(int* arrayOfValues, const int bufferSize);

/// @brief �������, ��������� ����� ����� � ������� ������������ ��������,
/// ������� ������ ���������� ��������
/// 
/// @param arrayOfValues - ������ ������������ �����
/// @param bufferSize - ������ �������
/// @param requiredValue - ��������� ��������
/// 
/// @return ��������� ��������� ����� �� ���������� � �������
int CompareValues(float* arrayOfValues, int bufferSize, int requiredValue);

/// @brief �������-���� ��� ������ � ��������� ������� �����
void SecondBlockMain();

#endif // !_SECONDBLOCK_H_