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


