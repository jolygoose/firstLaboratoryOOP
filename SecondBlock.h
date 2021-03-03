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

void SortArrayOfIntegers(int* arrayOfIntegers,
	const int bufferSize);

void DeleteArrayOfIntegers(int* arrayOfIntegers);

int CompareValues(float* arrayOfFloats, int bufferSize, int requiredValue);

void DeleteArrayOfFloats(float* arrayOfFloats);

void DeleteArrayOfChars(char* arrayOfChars);

void SecondBlockMain();

#endif // !_SECONDBLOCK_H_