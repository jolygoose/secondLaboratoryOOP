#include <iostream>
#include <conio.h>

#include "PhoneManufacturer.h"
#include "Common.h"

using namespace std;

string ConvertPhoneManufacturerEnumToText(PhoneManufacturer phoneManufacturer)
{
	string manufacturer;
	switch (phoneManufacturer)
	{
		case PhoneManufacturer::Apple:
		{
			manufacturer = "Apple";
			break;
		}
		case PhoneManufacturer::Honor:
		{
			manufacturer = "Honor";
			break;
		}
		case PhoneManufacturer::Huawei:
		{
			manufacturer = "Huawei";
			break;
		}
		case PhoneManufacturer::OnePlus:
		{
			manufacturer = "OnePlus";
			break;
		}
		case PhoneManufacturer::Oppo:
		{
			manufacturer = "Oppo";
			break;
		}
		case PhoneManufacturer::Samsung:
		{
			manufacturer = "Samsung";
			break;
		}
		case PhoneManufacturer::Sony:
		{
			manufacturer = "Sony";
			break;
		}
		case PhoneManufacturer::Xiaomi:
		{
			manufacturer = "Xiaomi";
			break;
		}
		default:
		{
			manufacturer = "-";
			break;
		}
	}
	return manufacturer;
}


void ShowPhoneManufacturers(PhoneManufacturer phoneManufacturers[], const unsigned int arraySize)
{
	for (unsigned int i = 0; i < arraySize; ++i)
	{
		cout << "Phone manufacturer [" << i + 1 << "]: "
			<< ConvertPhoneManufacturerEnumToText(phoneManufacturers[i]) << endl;
	}
}


void PhoneManufacturerMain()
{
	while (true)
	{
		cout << "Phone manufacturer menu:" << endl
			<< "1. Work with one static PhoneManufacturer object" << endl
			<< "2. Work with array of PhoneManufacturer objects" << endl
			<< "Press ESC for exit" << endl;
		PhoneManufacturerMenu taskChoice = static_cast <PhoneManufacturerMenu> (_getch());
		system("cls");
		switch (taskChoice)
		{
			case PhoneManufacturerMenu::FirstTask:
			{
				PhoneManufacturer phoneManufacturer = PhoneManufacturer::Apple;
				cout << "Your phone manufacturer is: "
					<< ConvertPhoneManufacturerEnumToText(phoneManufacturer) << endl << endl;
				break;
			}
			case PhoneManufacturerMenu::SecondTask:
			{
				const unsigned int arraySize = 8;
				PhoneManufacturer phoneManufacturers[arraySize]
					= { PhoneManufacturer::Apple, PhoneManufacturer::Honor,
					PhoneManufacturer::Huawei, PhoneManufacturer::OnePlus,
					PhoneManufacturer::Oppo, PhoneManufacturer::Samsung,
					PhoneManufacturer::Sony, PhoneManufacturer::Xiaomi };
				cout << "Array of phone manufacturers: " << endl;
				ShowPhoneManufacturers(phoneManufacturers, arraySize);
				cout << endl;
				break;
			}
			case PhoneManufacturerMenu::Exit:
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