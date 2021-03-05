#include <iostream>
#include <conio.h>

#include "FirstBlock.h"

using namespace std;


void FirstFunctionWithBreakpoints()
{
	double add = 1.0;
	double sum = 0.0;
	for (int i = 0; i < 10; ++i)
	{
		sum += add * i;
		add *= 1.1;
	}
	cout << "Total sum is " << sum << endl << endl;
}


void SecondFunctionWithBreakpoints()
{
	double add = 1.0;
	double sum = 0.0;
	for (int i = 0; i < 1000; ++i)
	{
		// Поставьте условную точку останова здесь
		sum += add * i;
		if (i % 3 == 0)
		{
			add *= 1.1;
		}
		else
		{
			add /= 3.0;
		}
	}
	cout << "Total sum is " << sum << endl << endl;
}


void FirstBlockMain()
{
	while (true)
	{
		cout << "First block menu:" << endl
			<< "1. Task 1.1.1.1" << endl
			<< "2. Task 1.1.1.2" << endl
			<< "Press ESC for exit" << endl;
		FirstBlockTasks taskChoice = static_cast <FirstBlockTasks> (_getch());
		system("cls");
		switch (taskChoice)
		{
			// 1.1.1.1
			case FirstBlockTasks::First:
			{
				cout << "Sample function for working with a breakpoints" 
					<< endl << endl;
				FirstFunctionWithBreakpoints();
				break;
			}
			// 1.1.1.2
			case FirstBlockTasks::Second:
			{
				cout << "Sample function for working with a breakpoints"
					<< endl << endl;
				SecondFunctionWithBreakpoints();
				break;
			}
			case FirstBlockTasks::Exit:
			{
				return;
			}
			default:
			{
				cerr << "Error: Incorrect choice! Try again" << endl << endl;
			}
		}
	}
	return;
}