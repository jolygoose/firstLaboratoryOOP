#pragma once

#ifndef _FIFTHBLOCK_H_
#define _FIFTHBLOCK_H_

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

void ShowArrayOfDoubles(double* newArray, int bufferSize);

void ShowArrayOfBools(bool* newArray, int bufferSize);

void ShowCharsArray(char* arrayOfChars, int bufferSize);

void SortArrayOfDoubles(double* arrayOfDoubles, int bufferSize);

double GetRadndomDoubleValue();

int GetRadndomIntegerValue();

void FifthBlockMain();

#endif // !_FIFTHBLOCK_H_