#include <iostream>
#include <conio.h>

#include "FifthBlock.h"
#include "Common.h"

using namespace std;

/*
 *
 * Task 1.1.5.4
 *
*/

void SortArrayOfDoubles(double* arrayOfValues, int bufferSize)
{
	for (int i = 0; i < bufferSize; ++i)
	{
		for (int j = 0; j < bufferSize - 1; ++j)
		{
			if (arrayOfValues[j] > arrayOfValues[j + 1])
			{
				double temporaryPool = arrayOfValues[j];
				arrayOfValues[j] = arrayOfValues[j + 1];
				arrayOfValues[j + 1] = temporaryPool;
			}
		}
	}
}

/*
 *
 * Task 1.1.5.5
 *
*/

int SearchValue(int* arrayOfValues, int bufferSize, int searchValue)
{
	for (int i = 0; i < bufferSize; ++i)
	{
		if (arrayOfValues[i] == searchValue)
		{
			return i;
		}
	}
	return 0;
}

/*
 *
 * Task 1.1.5.7
 *
*/


int* MakeRandomArray(int arraySize)
{
	int minimumBorder = 0;
	int maximumBorder = 100;
	int* newArrayOfValues = new int[arraySize];
	for (int i = 0; i < arraySize; ++i)
	{
		newArrayOfValues[i] = GetRandomIntegerValue
			(minimumBorder, maximumBorder);
	}
	return newArrayOfValues;
}

/*
 *
 * Task 1.1.5.8
 *
*/

int* ReadArray(int count)
{
	cout << "Fill array to check it" << endl << endl;
	int* values = new int[count];
	for (int i = 0; i < count; i++)
	{
		cout << "Enter a[" << i << "]: ";
		cin >> values[i];
	}
	return values;
}

int CountPositiveValues(int* values, int count)
{
	int result = 0;
	for (int i = 0; i < count; i++)
	{
		if (values[i] > 0)
		{
			result++;
		}
	}
	return result;
}


void FifthBlockMain()
{
	while (true)
	{
		cout << "Fifth block menu:" << endl
			<< "1. Task 1.1.5.1\t\t||\t5. Task 1.1.5.5" << endl
			<< "2. Task 1.1.5.2\t\t||\t6. Task 1.1.5.6" << endl
			<< "3. Task 1.1.5.3\t\t||\t7. Task 1.1.5.7" << endl
			<< "4. Task 1.1.5.4\t\t||\t8. Task 1.1.5.8" << endl
			<< "Press ESC for exit" << endl;
		FifthBlockTasks taskChoice = static_cast <FifthBlockTasks> (_getch());
		system("cls");
		switch (taskChoice)
		{
			// 1.1.5.1
			case FifthBlockTasks::First:
			{
				cout << "Function that works with an array of real numbers"
					<< endl << endl;
				const int bufferSize = 8;
				const double measurementStep = 0.5;
				double* arrayOfValues = new double[bufferSize];
				for (int i = 0; i < bufferSize; ++i)
				{
					arrayOfValues[i] = i + measurementStep;
				}
				ShowArrayOfDoubles(arrayOfValues, bufferSize);
				delete[] arrayOfValues;
				break;
			}
			// 1.1.5.2
			case FifthBlockTasks::Second:
			{
				cout << "Function that works with an array of bools"
					<< endl << endl;
				const int bufferSize = 8;
				bool* arrayOfValues = new bool[bufferSize];
				for (int i = 0; i < bufferSize; ++i)
				{
					if (i % 2 == 1)
					{
						arrayOfValues[i] = true;
					}
					else
					{
						arrayOfValues[i] = false;
					}
				}
				ShowArrayOfBools(arrayOfValues, bufferSize);
				delete[] arrayOfValues;
				break;
			}
			// 1.1.5.3
			case FifthBlockTasks::Third:
			{
				cout << "Function that works with an array of characters"
					<< endl << endl;
				int bufferSize = 0;
				cout << "Enter array size: ";
				bufferSize = GetCorrectIntegerValue();
				char* arrayOfChars = new char[bufferSize];
				for (int i = 0; i < bufferSize; ++i)
				{
					cout << "Enter a[" << i << "]: ";
					arrayOfChars[i] = GetCorrectCharValue();
				}
				ShowArrayOfChars(arrayOfChars, bufferSize);
				delete[] arrayOfChars;
				break;
			}
			// 1.1.5.4
			case FifthBlockTasks::Fourth:
			{
				cout << "Function that works with an array of real numbers "
					<< "and sorts it" << endl << endl;
				int bufferSize = 10;
				double* arrayOfValues = new double[bufferSize];
				for (int i = 0; i < bufferSize; ++i)
				{
					arrayOfValues[i] = GetRandomDoubleValue();
				}
				ShowArrayOfDoubles(arrayOfValues, bufferSize);
				cout << "~ Sorted ~" << endl << endl;
				SortArrayOfDoubles(arrayOfValues, bufferSize);
				ShowArrayOfDoubles(arrayOfValues, bufferSize);
				delete[] arrayOfValues;
				break;
			}
			// 1.1.5.5
			case FifthBlockTasks::Fifth:
			{
				cout << "A function that fills an array with random integer values "
					<< "and searches for a number in it" << endl << endl;
				int bufferSize = 10;
				int searchingValue = 0;
				int minimumBorder = 1;
				int maximumBorder = 10000;
				int* arrayOfValues = new int[bufferSize];
				for (int i = 0; i < bufferSize; ++i)
				{
					arrayOfValues[i] = GetRandomIntegerValue
						(minimumBorder, maximumBorder);
				}
				ShowArrayOfIntegers(arrayOfValues, bufferSize);
				cout << "Enter searching value: ";
				searchingValue = GetCorrectIntegerValue();
				int resultOfSearch = SearchValue(arrayOfValues,
					bufferSize, searchingValue);
				if ((searchingValue != arrayOfValues[0]) && (resultOfSearch == 0))
				{
					cout << "There is no desired element" << endl << endl;
				}
				else
				{
					cout << endl << "Index of searching value " << searchingValue
						<< " is: " << resultOfSearch << endl << endl;
				}
				delete[] arrayOfValues;
				break;
			}
			// 1.1.5.6
			case FifthBlockTasks::Sixth:
			{
				cout << "A function that works with an array of characters "
					<< "and searches for a character in it" << endl << endl;
				int bufferSize = 15;
				char* arrayOfCharacters = new char[bufferSize];
				cout << "Fill 15 chars into an array" << endl << endl;
				for (int i = 0; i < bufferSize; ++i)
				{
					cout << "Enter a[" << i << "]: ";
					arrayOfCharacters[i] = GetCorrectCharValue();
				}
				ShowArrayOfChars(arrayOfCharacters, bufferSize);
				ShowLetters(arrayOfCharacters, bufferSize);
				delete[] arrayOfCharacters;
				break;
			}
			// 1.1.5.7
			case FifthBlockTasks::Seventh:
			{
				cout << "A function that fills three arrays with "
					<< "random numbers, shows them and "
					<< "frees memory after that" << endl << endl;
				int firstArraySize = 5;
				int secondArraySize = 8;
				int thirdArraySize = 13;
				int* firstArray = MakeRandomArray(firstArraySize);
				int* secondArray = MakeRandomArray(secondArraySize);
				int* thirdArray = MakeRandomArray(thirdArraySize);
				ShowArrayOfIntegers(firstArray, firstArraySize);
				ShowArrayOfIntegers(secondArray, secondArraySize);
				ShowArrayOfIntegers(thirdArray, thirdArraySize);
				delete[] firstArray;
				delete[] secondArray;
				delete[] thirdArray;
				break;
			}
			// 1.1.5.8
			case FifthBlockTasks::Eighth:
			{
				cout << "Function with a bug fix for a memory leak" << endl << endl;
				int count = 15;
				int* values = ReadArray(count);
				cout << "Count is: " << CountPositiveValues(values, count) << endl;
				delete[] values;
				count = 20;
				values = ReadArray(count);
				cout << "Count is: " << CountPositiveValues(values, count) << endl;
				delete[] values;
				break;
			}
			case FifthBlockTasks::Exit:
			{
				return;
			}
			default:
			{
				cerr << "Error: Incorrect choice! Try again" << endl << endl;
				break;
			}
		}
	}
	return;
}