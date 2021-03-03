#include <iostream>
#include <conio.h>

#include "FourthBlock.h"

using namespace std;

/*
 *
 * Task 1.1.4.4
 *
*/

void FooFirst(double a)
{
	cout << "Address of a in Foo(): " << &a << endl;
	cout << "Value of a in Foo(): " << a << endl;
	a = 15.0;
	cout << "New value of a in Foo(): " << a << endl;
}

/*
 *
 * Task 1.1.4.5
 *
*/

void FooSecond(double& a)
{
	cout << "Address of a in Foo(): " << &a << endl;
	cout << "Value of a in Foo(): " << a << endl;
	a = 15.0;
	cout << "New value of a in Foo(): " << a << endl;
}

/*
 *
 * Task 1.1.4.8
 *
*/

void FooThird(double* a)
{
	cout << "Address in pointer: " << a << endl;
	cout << "Address of pointer: " << &a << endl;
	cout << "Value in pointer address: " << *a << endl;
	*a = 15.0;
	cout << "New value in pointer address: " << *a << endl;
}


void FourthBlockMain()
{
	setlocale(LC_ALL, "Russian");
	while (true)
	{
		cout << "Fourth block menu:" << endl
			<< "1. Task 1.1.4.1\t\t||\t5. Task 1.1.4.5"  <<  endl
			<< "2. Task 1.1.4.2\t\t||\t6. Task 1.1.4.6" << endl
			<< "3. Task 1.1.4.3\t\t||\t7. Task 1.1.4.7" << endl
			<< "4. Task 1.1.4.4\t\t||\t8. Task 1.1.4.8" << endl
			<< "Press ESC for exit" << endl;
		FourthBlockTasks taskChoice = static_cast <FourthBlockTasks> (_getch());
		system("cls");
		switch (taskChoice)
		{
			// 1.1.4.1
			case FourthBlockTasks::First:
			{
				int a = 5;
				int b = 4;
				double c = 13.5;
				bool d = true;
				cout << "Address of a: " << &a << endl
					<< "Address of b: " << &b << endl
					<< "Address of c: " << &c << endl
					<< "Address of d: " << &d << endl << endl;
				break;
			}
			// 1.1.4.2
			case FourthBlockTasks::Second:
			{
				int a[10] = { 1, 2, 7, -1, 5, 3, -1, 7, 1, 6 };
				double b[10] = { 1.0, 2.0, 7.0, -1.0, 5.0, 3.5, -1.8, 7.2, 1.9, 6.2 };
				cout << "Size of int type: " << sizeof(int) << "\t\t|\t"
					<< "Size of double type: " << sizeof(double) << endl;
				for (int i = 0; i < 10; ++i)
				{
					cout << "Address of a[" << i << "]: " << &a[i] << "\t|\t"
						<< "Address of b[" << i << "]: " << &b[i] << endl;
				}
				cout << endl;
				break;
			}
			// 1.1.4.3
			case FourthBlockTasks::Third:
			{
				int a = 5;
				int& b = a;
				cout << "Address of a: " << &a << endl
					<< "Address of b: " << &b << endl << endl;
				b = 7;
				cout << "~ Value changed ~" << endl << endl 
					<< "Value of a: " << a << endl << endl;
				break;
			}
			// 1.1.4.4
			case FourthBlockTasks::Fourth:
			{
				double a = 5.0;
				cout << "Address of a in main(): " << &a << endl
					<< "Value of a in main(): " << a << endl << endl;
				FooFirst(a);
				cout << endl << "Value of a in main(): " << a << endl << endl;
				break;
			}
			// 1.1.4.5
			case FourthBlockTasks::Fifth:
			{
				double a = 5.0;
				cout << "Address of a in main(): " << &a << endl
					<< "Value of a in main(): " << a << endl << endl;
				FooSecond(a);
				cout << endl << "Value of a in main(): " << a << endl << endl;
				break;
			}
			// 1.1.4.6
			case FourthBlockTasks::Sixth:
			{
				int b = 5;
				int* pointer = &b;
				cout << "Address of b: " << &b << endl
					<< "Address in pointer: " << pointer << endl
					<< "Address of pointer: " << &pointer << endl << endl;
				*pointer = 7;
				cout << "~ Value changed ~"
					<< endl << endl << "Value in b: " << b << endl
					<< "Value by pointer address: " << *pointer << endl << endl;
				break;
			}
			// 1.1.4.7
			case FourthBlockTasks::Seventh:
			{
				/*
				1. ѕри операции объ€влени€ указател€ перед символом '*' 
				указываетс€ тип данных и сама операци€ представл€ет выражение
				типƒанных* им€ѕеременной
				2. ќпераци€ разыменовани€ указател€ представл€ет выражение
				в виде *им€”казател€
				3. ќпераци€ умножени€ представл€ет выражение
				в виде им€ѕеременной1 * им€ѕеременной2
				ѕоэтому €зык видит 
				*/
				cout << "Task completed, let's ask the author" << endl << endl;
				break;
			}
			// 1.1.4.8
			case FourthBlockTasks::Eighth:
			{
				double value = 5.0;
				double* pointerValue = &value;
				cout << "Address of value in main(): " << &value << endl
					<< "Address in pointerValue in main(): " << pointerValue << endl
					<< "Address of pointerValue in main(): " << &pointerValue << endl
					<< "Value of a in main(): " << value << endl << endl;
				FooThird(pointerValue);
				cout << endl << "Value of a in main(): " << value << endl << endl;
				break;
			}
			case FourthBlockTasks::Exit:
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