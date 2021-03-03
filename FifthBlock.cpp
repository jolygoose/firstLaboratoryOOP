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

void SortArrayOfDoubles(double* arrayOfDoubles, int bufferSize)
{
	for (int i = 0; i < bufferSize; ++i)
	{
		for (int j = 0; j < bufferSize - 1; ++j)
		{
			if (arrayOfDoubles[j] > arrayOfDoubles[j + 1])
			{
				double temporaryPool = arrayOfDoubles[j];
				arrayOfDoubles[j] = arrayOfDoubles[j + 1];
				arrayOfDoubles[j + 1] = temporaryPool;
			}
		}
	}
}

/*
 *
 * Task 1.1.5.5
 *
*/

int SearchValue(int* intArray, int bufferSize, int searchValue)
{
	for (int i = 0; i < bufferSize; ++i)
	{
		if (intArray[i] == searchValue)
		{
			return i;
		}
	}
	return 0;
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
				const int bufferSizeOfArrayOfDoubles = 8;
				const double measurementStep = 0.5;
				double* arrayOfDoubles = new double[bufferSizeOfArrayOfDoubles];
				for (int i = 0; i < bufferSizeOfArrayOfDoubles; ++i)
				{
					arrayOfDoubles[i] = i + measurementStep;
				}
				ShowArrayOfDoubles(arrayOfDoubles, bufferSizeOfArrayOfDoubles);
				delete[] arrayOfDoubles;
				break;
			}
			// 1.1.5.2
			case FifthBlockTasks::Second:
			{
				const int bufferSizeOfArrayOfBools = 8;
				bool* arrayOfBools = new bool[bufferSizeOfArrayOfBools];
				for (int i = 0; i < bufferSizeOfArrayOfBools; ++i)
				{
					if (i % 2 == 1)
					{
						arrayOfBools[i] = true;
					}
					else
					{
						arrayOfBools[i] = false;
					}
				}
				ShowArrayOfBools(arrayOfBools, bufferSizeOfArrayOfBools);
				delete[] arrayOfBools;
				break;
			}
			// 1.1.5.3
			case FifthBlockTasks::Third:
			{
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
				int bufferSize = 10;
				double* arrayOfDoubles = new double[bufferSize];
				for (int i = 0; i < bufferSize; ++i)
				{
					arrayOfDoubles[i] = GetRadndomDoubleValue();
				}
				ShowArrayOfDoubles(arrayOfDoubles, bufferSize);
				cout << "~ Sorted ~" << endl << endl;
				SortArrayOfDoubles(arrayOfDoubles, bufferSize);
				ShowArrayOfDoubles(arrayOfDoubles, bufferSize);
				delete[] arrayOfDoubles;
				break;
			}
			// 1.1.5.5
			case FifthBlockTasks::Fifth:
			{
				int bufferSizeOfArrayOfIntegers = 10;
				int searchingValue = 0;
				int minimumRandomBorder = 1;
				int maximumRandomBorder = 10000;
				int* arrayOfIntegers = new int[bufferSizeOfArrayOfIntegers];
				for (int i = 0; i < bufferSizeOfArrayOfIntegers; ++i)
				{
					arrayOfIntegers[i] = GetRadndomIntegerValue
						(minimumRandomBorder, maximumRandomBorder);
				}
				ShowArrayOfIntegers(arrayOfIntegers, bufferSizeOfArrayOfIntegers);
				cout << "Enter searching value: ";
				searchingValue = GetCorrectIntegerValue();
				int resultOfSearch = SearchValue(arrayOfIntegers,
					bufferSizeOfArrayOfIntegers, searchingValue);
				if ((searchingValue != arrayOfIntegers[0]) && (resultOfSearch == 0))
				{
					cout << "There is no desired element" << endl << endl;
				}
				else
				{
					cout << endl << "Index of searching value " << searchingValue
						<< " is: " << resultOfSearch << endl << endl;
				}
				delete[] arrayOfIntegers;
				break;
			}
			// 1.1.5.6
			case FifthBlockTasks::Sixth:
			{
				int bufferSizeOfArrayOfChars = 15;
				char* arrayOfChars = new char[bufferSizeOfArrayOfChars];
				cout << "Fill 15 chars into an array" << endl << endl;
				for (int i = 0; i < bufferSizeOfArrayOfChars; ++i)
				{
					cout << "Enter a[" << i << "]: ";
					arrayOfChars[i] = GetCorrectCharValue();
				}
				ShowArrayOfChars(arrayOfChars, bufferSizeOfArrayOfChars);
				ShowLetters(arrayOfChars, bufferSizeOfArrayOfChars);
				delete[] arrayOfChars;
				break;
			}
			// 1.1.5.7
			case FifthBlockTasks::Seventh:
			{

				break;
			}
			// 1.1.5.8
			case FifthBlockTasks::Eighth:
			{
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







/*
int* ReadArray(int count)
{
	int* values = new int[count];
	for (int i = 0; i < count; i++)
	{
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

int main()
{
	int count = 15;
	int* values = ReadArray(count);
	cout << "Count is: " << CountPositiveValues(values, count) << endl;

	count = 20;
	delete[] values;
	values = ReadArray(count);
	cout << "Count is: " << CountPositiveValues(values, count) << endl;

	delete[] values;
}
*/
