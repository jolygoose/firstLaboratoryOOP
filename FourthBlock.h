#pragma once

#ifndef _FOURTHBLOCK_H_
#define _FOURTHBLOCK_H_

/// @brief ������������ ������� ���� ��������� ����� �������
enum class FourthBlockTasks
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

/// @brief �������, ��������������� ������ � ����������, ���������� �
/// ������� �� ��������
/// 
/// @param a - ����������, ������������ �� ��������
void ShowWorkWithAValue(double a);

/// @brief �������, ��������������� ������ � ����������, ���������� �
/// ������� �� ������
/// 
/// @param a - ����������, ������������ �� ������
void ShowWorkWithAReference(double& a);

/// @brief �������, ��������������� ������ � ����������, ���������� �
/// ������� �� ���������
/// 
/// @param a - ����������, ������������ �� ���������
void ShowWorkWithAPointer(double* a);

/// @brief �������-���� ��� ������ � ��������� ��������� �����
void FourthBlockMain();

#endif // !_FOURTHBLOCK_H_