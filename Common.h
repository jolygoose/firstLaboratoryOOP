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

int GetRadndomIntegerValue(int minimumBorder, int maximumBorder);

double GetRadndomDoubleValue();

void ShowArrayOfIntegers(int* arrayOfIntegers,
	const int bufferSize);

void ShowArrayOfFloats(float* arrayOfFloats, int bufferSize);

void ShowArrayOfDoubles(double* newArray, int bufferSize);

void ShowArrayOfBools(bool* newArray, int bufferSize);

void ShowArrayOfChars(char* arrayOfChars, int bufferSize);

bool IsSymbolIsLetter(char symbol);

void ShowLetters(char* arrayOfChars, int bufferSize);

#endif // !_COMMON_H_