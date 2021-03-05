#include <iostream>
#include <conio.h>
#include <cmath>

#include "ThirdBlock.h"
#include "Common.h"

using namespace std;

/*
 *
 * Task 1.1.3.1-2
 *
*/

double GetPower(double base, int exponent)
{
	int index = 1;
	double result = 1;
	while (index <= abs(exponent))
	{
		result *= base;
		index++;
	}
	if (exponent >= 0)
	{
		return result;
	}
	return (1 / result);
}

/*
 *
 * Task 1.1.3.3
 *
*/

void DemoGetPower(double base, int exponent)
{

	double result = GetPower(base, exponent);
	cout << endl << base << " ^ " << exponent << " = " << result << endl << endl;
}

/*
 *
 * Task 1.1.3.4
 *
*/

void RoundToTens(int& value)
{
	if (value % 10 < 5)
	{
		value -= (value % 10);
	}
	else
	{
		value -= (value % 10);
		value += 10;
	}
}


void ThirdBlockMain()
{
	while (true)
	{
		cout << "Third block menu:" << endl
			<< "1. Task 1.1.3.2" << endl
			<< "2. Task 1.1.3.3" << endl
			<< "3. Task 1.1.3.4" << endl
			<< "Press ESC for exit" << endl;
		ThirdBlockTasks taskChoice = static_cast <ThirdBlockTasks> (_getch());
		system("cls");
		switch (taskChoice)
		{
			// 1.1.3.1
			case ThirdBlockTasks::Second:
			{
				cout << "Function for raising a number (base) to a power (exponent)"
					<< endl << endl;
				cout << "Enter base value: ";
				double base = GetCorrectDoubleValue();
				cout << endl << "Enter exponent value: ";
				int exponent = GetCorrectIntegerValue();
				cout << endl << "Answer: " << GetPower(base, exponent)
					<< endl << endl;
				break;
			}
			// 1.1.3.2
			case ThirdBlockTasks::Third:
			{
				cout << "Function for raising a number (base) to a power (exponent) "
					<< "and representing in the form 'base ^ exponent = result'"
					<< endl << endl;
				cout << "Enter base value: ";
				double base = GetCorrectDoubleValue();
				cout << endl << "Enter exponent value: ";
				int exponent = GetCorrectIntegerValue();
				DemoGetPower(base, exponent);
				break;
			}
			// 1.1.3.3
			case ThirdBlockTasks::Fourth:
			{
				cout << "The function of rounding a number to tens" << endl << endl;
				cout << "Enter value: ";
				int value = GetCorrectIntegerValue();
				int oldValue = value;
				RoundToTens(value);
				cout << endl << "For " << oldValue << " rounded value is "
					<< value << endl << endl;
				break;
			}
			case ThirdBlockTasks::Exit:
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