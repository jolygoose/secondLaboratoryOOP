#include <iostream>
#include <conio.h>

#include "FormOfEducation.h"
#include "Common.h"

using namespace std;


string ConvertFormOfEducationEnumToText(FormOfEducation movieGenre)
{
	string formOfEducation;
	switch (movieGenre)
	{
		case FormOfEducation::FullTime:
		{
			formOfEducation = "Full-time";
			break;
		}
		case FormOfEducation::Ñorrespondence:
		{
			formOfEducation = "Correspondence";
			break;
		}
		case FormOfEducation::Evening:
		{
			formOfEducation = "Evening";
			break;
		}
		case FormOfEducation::Distance:
		{
			formOfEducation = "Distance";
			break;
		}
		default:
		{
			formOfEducation = "-";
			break;
		}
	}
	return formOfEducation;
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
			<< "1. Work with one time data with pointers and references" << endl
			<< "2. Work with one user-entered time data" << endl
			<< "3. Work with array of user-entered time data" << endl
			<< "Press ESC for exit" << endl;
		FormOfEducationMenu taskChoice = static_cast <FormOfEducationMenu> (_getch());
		system("cls");
		switch (taskChoice)
		{
			case FormOfEducationMenu::FirstTask:
			{
				FormOfEducation formOfEducation = FormOfEducation::Distance;
				cout << "Your form of education is: " << endl
					<< ConvertFormOfEducationEnumToText(formOfEducation) << endl << endl;
				break;
			}
			case FormOfEducationMenu::SecondTask:
			{
				const unsigned int arraySize = 6;
				FormOfEducation formsOfEducation[arraySize] 
					= {FormOfEducation::Distance, FormOfEducation::FullTime,
					FormOfEducation::Evening, FormOfEducation::Ñorrespondence,
					FormOfEducation::Distance, FormOfEducation::Distance};
				ShowFormsOfEducation(formsOfEducation, arraySize);
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