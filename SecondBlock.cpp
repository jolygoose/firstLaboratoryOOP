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

void SortArrayOfIntegers(int* arrayOfIntegers,
	const int bufferSize)
{
	for (int i = 0; i < bufferSize; ++i)
	{
		for (int j = 0; j < bufferSize - 1; ++j)
		{
			if (arrayOfIntegers[j] > arrayOfIntegers[j + 1])
			{
				int temporaryPool = arrayOfIntegers[j];
				arrayOfIntegers[j] = arrayOfIntegers[j + 1];
				arrayOfIntegers[j + 1] = temporaryPool;
			}
		}
	}
}


void DeleteArrayOfIntegers(int* arrayOfIntegers)
{
	delete[] arrayOfIntegers;
}

/*
 *
 * Task 1.1.2.2
 *
*/

int CompareValues(float* arrayOfFloats, int bufferSize, int requiredValue)
{
	int sum = 0;
	for (int i = 0; i < bufferSize; ++i)
	{
		if (arrayOfFloats[i] > requiredValue)
		{
			++sum;
		}
	}
	return sum;
}


void DeleteArrayOfFloats(float* arrayOfFloats)
{
	delete[] arrayOfFloats;
}

/*
 *
 * Task 1.1.2.3
 *
*/

void DeleteArrayOfChars(char* arrayOfChars)
{
	delete[] arrayOfChars;
}


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
			case SecondBlockTasks::First:
			{
				const int bufferSizeOfArrayOfIntegers = 10;
				int* arrayOfIntegers = new int[bufferSizeOfArrayOfIntegers];
				for (int i = 0; i < bufferSizeOfArrayOfIntegers; ++i)
				{
					cout << "Type [" << i + 1 << "] element: ";
					arrayOfIntegers[i] = GetCorrectIntegerValue();
				}
				ShowArrayOfIntegers(arrayOfIntegers, bufferSizeOfArrayOfIntegers);
				cout << "~ Sorted ~" << endl;
				SortArrayOfIntegers(arrayOfIntegers, bufferSizeOfArrayOfIntegers);
				ShowArrayOfIntegers(arrayOfIntegers, bufferSizeOfArrayOfIntegers);
				DeleteArrayOfIntegers(arrayOfIntegers);
				break;
			}
			case SecondBlockTasks::Second:
			{
				const int bufferSizeOfArrayOfFloats = 12;
				float requiredValue;
				float* arrayOfFloats = new float[bufferSizeOfArrayOfFloats];
				for (int i = 0; i < bufferSizeOfArrayOfFloats; ++i)
				{
					cout << "Type [" << i + 1 << "] element: ";
					arrayOfFloats[i] = GetCorrectFloatValue();
				}
				ShowArrayOfFloats(arrayOfFloats, bufferSizeOfArrayOfFloats);
				cout << "Enter the number to compare: ";
				requiredValue = GetCorrectFloatValue();
				int countValues = CompareValues(arrayOfFloats, 
					bufferSizeOfArrayOfFloats, requiredValue);
				cout << endl << "Elements of array more than " << requiredValue
					<< " is: " << countValues << endl << endl;
				DeleteArrayOfFloats(arrayOfFloats);
				break;
			}
			case SecondBlockTasks::Third:
			{
				const int bufferSizeOfArrayOfChars = 8;
				char* arrayOfChars = new char[bufferSizeOfArrayOfChars];
				for (int i = 0; i < bufferSizeOfArrayOfChars; ++i)
				{
					cout << "Type [" << i + 1 << "] element: ";
					cin >> arrayOfChars[i];
				}
				ShowArrayOfChars(arrayOfChars, bufferSizeOfArrayOfChars);
				ShowLetters(arrayOfChars, bufferSizeOfArrayOfChars);
				DeleteArrayOfChars(arrayOfChars);
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