#include <iostream>
#include <conio.h>

#include "FirstBlock.h"
#include "SecondBlock.h"
#include "ThirdBlock.h"
#include "FourthBlock.h"
#include "FifthBlock.h"

using namespace std;

enum class Menu
{
	FirstBlock = 49,
	SecondBlock = 50,
	ThirdBlock = 51,
	FourthBlock = 52,
	FifthBlock = 53,
	Exit = 27
};

int main()
{
	cout << "Hello! This is first Laboratory OOP." << endl << endl;
	while (true)
	{
		cout << "Menu:" << endl
			<< "1. First block" << endl
			<< "2. Second block" << endl
			<< "3. Third block" << endl
			<< "4. Fourth block" << endl
			<< "5. Fifth block" << endl
			<< "Press ESC for exit" << endl;
		Menu taskChoice = static_cast <Menu> (_getch());
		system("cls");
		switch (taskChoice)
		{
			case Menu::FirstBlock:
			{
				FirstBlockMain();
				break;
			}
			case Menu::SecondBlock:
			{
				SecondBlockMain();
				break;
			}
			case Menu::ThirdBlock:
			{
				ThirdBlockMain();
				break;
			}
			case Menu::FourthBlock:
			{
				FourthBlockMain();
				break;
			}
			case Menu::FifthBlock:
			{
				FifthBlockMain();
				break;
			}
			case Menu::Exit:
			{
				cout << "Goodbye!" << endl << endl;
				return 0;
			}
			default:
			{
				cerr << "Error: Incorrect choice! Try again" << endl << endl;
			}
		}
	}
	return 0;
}