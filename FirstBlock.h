#pragma once

#ifndef _FIRSTBLOCK_H_
#define _FIRSTBLOCK_H_

/// @brief ������������ ������� ���� ������� ����� �������
enum class FirstBlockTasks
{
	First = 49,
	Second = 50,
	Exit = 27
};

/// @brief �������, � ������� ���������� ��������� �������� � ����������
/// �� ������ ���� �����, ��������� ����� ��������
void FirstFunctionWithBreakpoints();

/// @brief �������, � ������� ���������� ��������� �������� � ����������
/// �� 777-�� ���� �����, ��������� ����� ��������
void SecondFunctionWithBreakpoints();

/// @brief �������-���� ��� ������ � ��������� ������� �����
void FirstBlockMain();

#endif // !_FIRSTBLOCK_H_