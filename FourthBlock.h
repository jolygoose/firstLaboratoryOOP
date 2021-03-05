#pragma once

#ifndef _FOURTHBLOCK_H_
#define _FOURTHBLOCK_H_

/// @brief Перечисление пунктов меню четвёртого блока заданий
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

/// @brief Функция, демонстрирующая работу с переменной, переданной в
/// функцию по значению
/// 
/// @param a - переменная, передаваемая по значению
void ShowWorkWithAValue(double a);

/// @brief Функция, демонстрирующая работу с переменной, переданной в
/// функцию по ссылке
/// 
/// @param a - переменная, передаваемая по ссылке
void ShowWorkWithAReference(double& a);

/// @brief Функция, демонстрирующая работу с переменной, переданной в
/// функцию по указателю
/// 
/// @param a - переменная, передаваемая по указателю
void ShowWorkWithAPointer(double* a);

/// @brief Функция-меню для работы с заданиями четвёртого блока
void FourthBlockMain();

#endif // !_FOURTHBLOCK_H_