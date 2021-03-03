#pragma once

#ifndef _COMMON_H_
#define _COMMON_H_

/// @brief Функция корректного считывания значения типа данных "integer"
/// 
/// @return Результат считывания введённого значения
int GetCorrectIntegerValue();

/// @brief Функция корректного считывания значения типа данных "float"
/// 
/// @return Результат считывания введённого значения
float GetCorrectFloatValue();

/// @brief Функция корректного считывания значения типа данных "double"
/// 
/// @return Результат считывания введённого значения
double GetCorrectDoubleValue();

/// @brief Функция корректного считывания значения типа данных "char"
/// 
/// @return Результат считывания введённого значения
char GetCorrectCharValue();

/// @brief Функция получения случайного значения типа данных "int"
/// 
/// @param minimumBorder - минимальная граница
/// @param maximumBorder - максимальная граница
/// 
/// @return Результат получения случайного числа
int GetRadndomIntegerValue(int minimumBorder, int maximumBorder);

/// @brief Функция получения случайного значения типа данных "double"
/// 
/// @return Результат получения случайного числа
double GetRadndomDoubleValue();

/// @brief Функция вывода на экран массива значений типа "int"
/// 
/// @param arrayOfIntegers - массив значений
/// @param bufferSize - размер массива
void ShowArrayOfIntegers(int* arrayOfIntegers,
	const int bufferSize);

/// @brief Функция вывода на экран массива значений типа "float"
/// 
/// @param arrayOfIntegers - массив значений
/// @param bufferSize - размер массива
void ShowArrayOfFloats(float* arrayOfFloats, int bufferSize);

/// @brief Функция вывода на экран массива значений типа "double"
/// 
/// @param arrayOfIntegers - массив значений
/// @param bufferSize - размер массива
void ShowArrayOfDoubles(double* newArray, int bufferSize);

/// @brief Функция вывода на экран массива значений типа "bool"
/// 
/// @param newArray - массив значений
/// @param bufferSize - размер массива
void ShowArrayOfBools(bool* newArray, int bufferSize);

/// @brief Функция вывода на экран массива значений типа "char"
/// 
/// @param arrayOfChars - массив значений
/// @param bufferSize - размер массива
void ShowArrayOfChars(char* arrayOfChars, int bufferSize);

/// @brief Проверка, являются ли введённые символы - буквами
/// 
/// @param symbol - Полученный символ
bool IsSymbolIsLetter(char symbol);

/// @brief Функция вывода акций никак на Россию?
/// 
/// @param arrayOfChars - массив значений
/// @param bufferSize - размер массива
void ShowLetters(char* arrayOfChars, int bufferSize);

#endif // !_COMMON_H_