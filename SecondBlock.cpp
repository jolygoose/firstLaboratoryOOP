#include <iostream>
#include <conio.h>

#include "SecondBlock.h"
#include "Common.h"

using namespace std;

/* 
 *
 * Task 1.1.2.1
 * 
*/

void SortArrayOfIntegers(int* arrayOfValues, const int bufferSize)
{
	for (int i = 0; i < bufferSize; ++i)
	{
		for (int j = 0; j < bufferSize - 1; ++j)
		{
			if (arrayOfValues[j] > arrayOfValues[j + 1])
			{
				int temporaryStorage = arrayOfValues[j];
				arrayOfValues[j] = arrayOfValues[j + 1];
				arrayOfValues[j + 1] = temporaryStorage;
			}
		}
	}
}

/*
 *
 * Task 1.1.2.2
 *
*/

int CompareValues(float* arrayOfValues, int bufferSize, int requiredValue)
{
	int sum = 0;
	for (int i = 0; i < bufferSize; ++i)
	{
		if (arrayOfValues[i] > requiredValue)
		{
			++sum;
		}
	}
	return sum;
}

/*
 *
 * Task 1.1.2.3
 *
*/

void SecondBlockMain()
{
	while (true)
	{
		cout << "Second block menu:" << endl
			<< "1. Task 1.1.2.1" << endl
			<< "2. Task 1.1.2.2" << endl
			<< "3. Task 1.1.2.3" << endl
			<< "Press ESC for exit" << endl;
		SecondBlockTasks taskChoice = static_cast <SecondBlockTasks> (_getch());
		system("cls");
		switch (taskChoice)
		{
			// 1.1.2.1
			case SecondBlockTasks::First:
			{
				cout << "An example of working with an array of "
					<< "integer values and sorting them" << endl << endl;
				const int bufferSize = 10;
				int* arrayOfValues = new int[bufferSize];
				for (int i = 0; i < bufferSize; ++i)
				{
					cout << "Type [" << i + 1 << "] element: ";
					arrayOfValues[i] = GetCorrectIntegerValue();
				}
				ShowArrayOfIntegers(arrayOfValues, bufferSize);
				cout << "~ Sorted ~" << endl;
				SortArrayOfIntegers(arrayOfValues, bufferSize);
				ShowArrayOfIntegers(arrayOfValues, bufferSize);
				delete[] arrayOfValues;
				break;
			}
			// 1.1.2.2
			case SecondBlockTasks::Second:
			{
				cout << "An example of working with an array of "
					<< "float values and finding number of values " 
					<< "greater than comparable" << endl << endl;
				const int bufferSize = 12;
				float requiredValue;
				float* arrayOfValues = new float[bufferSize];
				for (int i = 0; i < bufferSize; ++i)
				{
					cout << "Type [" << i + 1 << "] element: ";
					arrayOfValues[i] = GetCorrectFloatValue();
				}
				ShowArrayOfFloats(arrayOfValues, bufferSize);
				cout << "Enter the number to compare: ";
				requiredValue = GetCorrectFloatValue();
				int countValues = CompareValues(arrayOfValues, 
					bufferSize, requiredValue);
				cout << endl << "Elements of array more than " << requiredValue
					<< " is: " << countValues << endl << endl;
				delete[] arrayOfValues;
				break;
			}
			// 1.1.2.3
			case SecondBlockTasks::Third:
			{
				cout << "An example of working with an array of characters "
					<< "and finding number of letters in an array" << endl << endl;
				const int bufferSize = 8;
				char* arrayOfSymbols = new char[bufferSize];
				for (int i = 0; i < bufferSize; ++i)
				{
					cout << "Type [" << i + 1 << "] element: ";
					cin >> arrayOfSymbols[i];
				}
				ShowArrayOfChars(arrayOfSymbols, bufferSize);
				ShowLetters(arrayOfSymbols, bufferSize);
				delete[] arrayOfSymbols;
				break;
			}
			case SecondBlockTasks::Exit:
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