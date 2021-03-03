#include "Common.h"

#include <iostream>

using namespace std;


int GetCorrectIntegerValue()
{
	int inputIntegerValue;
	while (true)
	{
		if (cin >> inputIntegerValue)
		{
			break;
		}
		cerr << "Error: Incorrect value, try again.";
		cout << endl << endl;
		cin.clear();
		cin.ignore(numeric_limits <streamsize> ::max(), '\n');
	}
	cin.ignore(numeric_limits <streamsize> ::max(), '\n');
	return inputIntegerValue;
}


float GetCorrectFloatValue()
{
	float inputFloatValue;
	while (true)
	{
		if (cin >> inputFloatValue)
		{
			break;
		}
		cerr << "Error: Incorrect value, try again.";
		cout << endl << endl;
		cin.clear();
		cin.ignore(numeric_limits <streamsize> ::max(), '\n');
	}
	cin.ignore(numeric_limits <streamsize> ::max(), '\n');
	return inputFloatValue;
}


double GetCorrectDoubleValue()
{
	double inputDoubleValue;
	while (true)
	{
		if (cin >> inputDoubleValue)
		{
			break;
		}
		cerr << "Error: Incorrect value, try again.";
		cout << endl << endl;
		cin.clear();
		cin.ignore(numeric_limits <streamsize> ::max(), '\n');
	}
	cin.ignore(numeric_limits <streamsize> ::max(), '\n');
	return inputDoubleValue;
}


char GetCorrectCharValue()
{
	char inputCharValue;
	while (true)
	{
		if (cin >> inputCharValue)
		{
			break;
		}
		cerr << "Error: Incorrect value, try again.";
		cout << endl << endl;
		cin.clear();
		cin.ignore(numeric_limits <streamsize> ::max(), '\n');
	}
	cin.ignore(numeric_limits <streamsize> ::max(), '\n');
	return inputCharValue;
}


int GetRadndomIntegerValue(int minimumBorder, int maximumBorder)
{
	double fractionDenominator = static_cast <double> (RAND_MAX) + 1.0;
	static const double fraction = (1.0 / fractionDenominator);
	int randomResult = static_cast <int> (rand() * fraction *
		(minimumBorder - maximumBorder + 1) + minimumBorder);
	return randomResult;
}


double GetRadndomDoubleValue()
{
	int maximumBorder = 10000;
	return (double)(rand() % maximumBorder)
		/ (double)maximumBorder + (double)(rand() % maximumBorder);
}


void ShowArrayOfIntegers(int* arrayOfIntegers,
	const int bufferSize)
{
	cout << endl << "Array of integers:" << endl;
	for (int i = 0; i < bufferSize; ++i)
	{
		cout << "[" << arrayOfIntegers[i] << "]  ";
	}
	cout << endl << endl;
}


void ShowArrayOfFloats(float* arrayOfFloats, int bufferSize)
{
	cout << endl << "Array of floats:" << endl;
	for (int i = 0; i < bufferSize; ++i)
	{
		cout << "[" << arrayOfFloats[i] << "]  ";
	}
	cout << endl << endl;
}


void ShowArrayOfDoubles(double* arrayOfDoubles, int bufferSize)
{
	cout << "Array of double:" << endl;
	for (int i = 0; i < bufferSize; ++i)
	{
		cout << "[" << arrayOfDoubles[i] << "]  ";
	}
	cout << endl << endl;
}


void ShowArrayOfBools(bool* arrayOfBools, int bufferSize)
{
	cout << "Array of bool:" << endl;
	for (int i = 0; i < bufferSize; ++i)
	{
		if (arrayOfBools[i] == 1)
		{
			cout << "true\t";
		}
		else
		{
			cout << "false\t";
		}
	}
	cout << endl << endl;
}


void ShowArrayOfChars(char* arrayOfChars, int bufferSize)
{
	cout << endl << "Array of chars:" << endl;
	for (int i = 0; i < bufferSize; ++i)
	{
		cout << "[" << arrayOfChars[i] << "]  ";
	}
	cout << endl << endl;
}


bool IsSymbolIsLetter(char symbol)
{
	return (((symbol >= 'A') && (symbol <= 'Z'))
		|| ((symbol >= 'a') && (symbol <= 'z')));
}


void ShowLetters(char* arrayOfChars, int bufferSize)
{
	cout << "All letters in your array:" << endl;
	for (int i = 0; i < bufferSize; ++i)
	{
		if (IsSymbolIsLetter(arrayOfChars[i]))
		{
			cout << "[" << arrayOfChars[i] << "]  ";
		}
	}
	cout << endl << endl;
}