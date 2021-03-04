#pragma once

#ifndef _FIRSTBLOCK_H_
#define _FIRSTBLOCK_H_

/// @brief ѕеречисление пунктов меню первого блока заданий
enum class FirstBlockTasks
{
	First = 49,
	Second = 50,
	Exit = 27
};

/// @brief ‘ункци€, в которой необходимо провер€ть значени€ в переменных
/// на каждом шаге цикла, использу€ точки останова
void FirstFunctionWithBreakpoints();

/// @brief ‘ункци€, в которой необходимо проверить значение в переменных
/// на 777-ом шаге цикла, использу€ точку останова
void SecondFunctionWithBreakpoints();

/// @brief ‘ункци€-меню дл€ работы с задани€ми первого блока
void FirstBlockMain();

#endif // !_FIRSTBLOCK_H_