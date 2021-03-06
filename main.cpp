#include <iostream>
#include <conio.h>

#include "FirstBlock.h"
#include "SecondBlock.h"
#include "ThirdBlock.h"

using namespace std;

/// @brief Перечисление доступных пунктов основного меню
enum class Menu
{
	FirstBlock = 49,
	SecondBlock = 50,
	ThirdBlock = 51,
	Exit = 27
};

/// @brief Точка входа программы
/// 
/// @retval 0 - успешное завершение программы
/// 
/// @return Код завершения программы
int main()
{
	cout << "Hello! This is second Laboratory OOP." << endl << endl;
	while (true)
	{
		cout << "Menu:" << endl
			<< "1. First block" << endl
			<< "2. Work with some structures" << endl
			<< "3. Work with some enums" << endl
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
				WorkWithSomeStructuresMain();
				break;
			}
			case Menu::ThirdBlock:
			{
				WorkWithSomeEnums();
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
				break;
			}
		}
	}
	return 0;
}