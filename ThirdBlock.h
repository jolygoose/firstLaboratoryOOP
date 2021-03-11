#pragma once

#ifndef _THIRDBLOCK_H_
#define _THIRDBLOCK_H_

/// @brief ������������ ������� ���� �������� ����� �������
enum class ThirdBlockTasks
{
	Second = 49,
	Third = 50,
	Fourth = 51,
	Exit = 27
};

/// @brief ����������� �������, ���������� ����������� �� ���� ����� � 
/// ����������� �� ���� �������
/// 
/// @param base - ���������
/// @param exponent - �������
/// 
/// @return ��������� ���������� ����� � �������
double Power(double base, int exponent);

/// @brief �������, �������������� ��������� ���������� ����� � �������
/// 
/// @param base - ���������
/// @param exponent - �������
/// 
/// @return ��������� ���������
double GetPower(double base, int exponent);

/// @brief �������, ���������� ������� GetPower() � ��������� � ���������
/// � ������� 'base ^ exponent = result'
/// 
/// @param base - ���������
/// @param exponent - �������
void DemoGetPower(double base, int exponent);

/// @brief �������, ����������� ����������� �� ���� �������� �� ��������
/// 
/// @param value - ����� ��� ����������
void RoundToTens(int& value);

/// @brief �������-���� ��� ������ � ��������� �������� �����
void ThirdBlockMain();

#endif // !_THIRDBLOCK_H_