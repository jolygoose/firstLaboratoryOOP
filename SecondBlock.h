#pragma once

#ifndef _SECONDBLOCK_H_
#define _SECONDBLOCK_H_

/// @brief Перечисление пунктов меню второго блока заданий
enum class SecondBlockTasks
{
	First = 49,
	Second = 50,
	Third = 51,
	Exit = 27
};

/// @brief Функция сортировки массива целочисленных значений
/// 
/// @param arrayOfValues - массив целочисленных значений
/// @param bufferSize - размер массива
void SortArrayOfIntegers(int* arrayOfValues, const int bufferSize);

/// @brief Функция, находящая сумму чисел в массиве вещественных значений,
/// которые больше сравнимого значения
/// 
/// @param arrayOfValues - массив вещественных чисел
/// @param bufferSize - размер массива
/// @param requiredValue - сравнимое значение
/// 
/// @return Результат сравнения числа со значениями в массиве
int CompareValues(float* arrayOfValues, int bufferSize, int requiredValue);

/// @brief Функция-меню для работы с заданиями второго блока
void SecondBlockMain();

#endif // !_SECONDBLOCK_H_