#include <iostream>
#include <conio.h>

#include "FirstBlock.h"
#include "SecondBlock.h"

using namespace std;

enum class Menu
{
	FirstBlock = 49,
	SecondBlock = 50,
	Exit = 27
};

int main()
{
	cout << "Hello! This is second Laboratory OOP." << endl << endl;
	while (true)
	{
		cout << "Menu:" << endl
			<< "1. First block" << endl
			<< "Press ESC for exit" << endl;
		Menu taskChoice = static_cast <Menu> (_getch());
		system("cls");
		switch (taskChoice)
		{
			// 2.2.1.*
			case Menu::FirstBlock:
			{
				FirstBlockMain();
				break;
			}
			// 2.2.1.*
			case Menu::SecondBlock:
			{
				SecondBlockMain();
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