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

int CompareValues(float* arrayOfFloats, int bufferSize, int requiredValue);

void SecondBlockMain();

#endif // !_SECONDBLOCK_H_