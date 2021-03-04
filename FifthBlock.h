#pragma once

#ifndef _FIFTHBLOCK_H_
#define _FIFTHBLOCK_H_

/// @brief Перечисление пунктов меню пятого блока заданий
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

/// @brief Функция сортировки массива вещественных чисел
/// 
/// @param arrayOfValues - массив вещественных чисел
/// @param bufferSize - размер массива
void SortArrayOfDoubles(double* arrayOfValues, int bufferSize);

/// @brief Функция поиска значения в массиве
/// 
/// @param arrayOfValues - массив целочисленных значений
/// @param bufferSize - размер массива
/// @param searchValue - искомое значение
/// 
/// @retval 0 - значение не найдено
/// 
/// @return Результат поиска значения
int SearchValue(int* arrayOfValues, int bufferSize, int searchValue);

/// @brief Функция, создающая массив случайных чисел
/// 
/// @param arraySize - размер массива
/// 
/// @return Результат создания массива
int* MakeRandomArray(int arraySize);

/// @brief Функция создания и заполнения массива целочисленными значениями
/// 
/// @param count - количество значений
/// 
/// @return Результат создания массива
int* ReadArray(int count);

/// @brief Функция, считающая количество положительных значений в массиве
/// 
/// @param values - массив значений
/// @param count - количество положительных значений
/// 
/// @return Результат счёта положительных значений
int CountPositiveValues(int* values, int count);

/// @brief Функция-меню для работы с заданиями пятого блока
void FifthBlockMain();

#endif // !_FIFTHBLOCK_H_