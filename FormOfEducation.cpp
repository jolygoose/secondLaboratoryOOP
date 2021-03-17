#include <iostream>
#include <conio.h>

#include "FormOfEducation.h"
#include "Common.h"

using namespace std;

string ConvertFormOfEducationEnumToText(FormOfEducation formOfEducation)
{
	string form;
	switch (formOfEducation)
	{
		case FormOfEducation::FullTime:
		{
			form = "Full-time";
			break;
		}
		case FormOfEducation::Correspondence:
		{
			form = "Correspondence";
			break;
		}
		case FormOfEducation::Evening:
		{
			form = "Evening";
			break;
		}
		case FormOfEducation::Distance:
		{
			form = "Distance";
			break;
		}
		default:
		{
			form = "-";
			break;
		}
	}
	return form;
}


void ShowFormsOfEducation(FormOfEducation formsOfEducation[], const unsigned int arraySize)
{
	for (unsigned int i = 0; i < arraySize; ++i)
	{
		cout << "Form [" << i + 1 << "]: "
			<< ConvertFormOfEducationEnumToText(formsOfEducation[i]) << endl;
	}
}


void FormOfEducationMain()
{
	while (true)
	{
		cout << "Form of education menu:" << endl
			<< "1. Work with one static FormOfEducation object" << endl
			<< "2. Work with array of FormOfEducation objects" << endl
			<< "Press ESC for exit" << endl;
		FormOfEducationMenu taskChoice = static_cast <FormOfEducationMenu> (_getch());
		system("cls");
		switch (taskChoice)
		{
			case FormOfEducationMenu::FirstTask:
			{
				FormOfEducation formOfEducation = FormOfEducation::Distance;
				cout << "Your form of education is: "
					<< ConvertFormOfEducationEnumToText(formOfEducation) << endl << endl;
				break;
			}
			case FormOfEducationMenu::SecondTask:
			{
				const unsigned int arraySize = 6;
				FormOfEducation formsOfEducation[arraySize] 
					= {FormOfEducation::Distance, FormOfEducation::FullTime,
					FormOfEducation::Evening, FormOfEducation::Correspondence,
					FormOfEducation::Distance, FormOfEducation::Distance};
				cout << "Array of forms of education: " << endl;
				ShowFormsOfEducation(formsOfEducation, arraySize);
				cout << endl;
				break;
			}
			case FormOfEducationMenu::Exit:
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