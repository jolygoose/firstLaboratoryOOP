#pragma once

#ifndef _SECONDBLOCK_H_
#define _SECONDBLOCK_H_

enum class SecondBlockTasks
{
	First = 49,
	Second = 50,
	Third = 51,
	Exit = 27
};

void ShowArrayOfIntegers(int* arrayOfIntegers,
	const int bufferSize);

void SortArrayOfIntegers(int* arrayOfIntegers,
	const int bufferSize);

void DeleteArrayOfIntegers(int* arrayOfIntegers);

void ShowArrayOfFloats(float* arrayOfFloats, int bufferSize);

int CompareValues(float* arrayOfFloats, int bufferSize, int requiredValue);

void DeleteArrayOfFloats(float* arrayOfFloats);

void ShowArrayOfChars(char* arrayOfChars, int bufferSize);

bool IsSymbolIsLetter(char symbol);

void ShowLetters(char* arrayOfChars, int bufferSize);

void DeleteArrayOfChars(char* arrayOfChars);

void SecondBlockMain();

#endif // !_SECONDBLOCK_H_