#include <iostream>
#include <conio.h>

#include "Season.h"
#include "Common.h"

using namespace std;

string ConvertSeasonEnumToText(Season season)
{
	string currentSeason;
	switch (season)
	{
		case Season::Winter:
		{
			currentSeason = "Winter";
			break;
		}
		case Season::Spring:
		{
			currentSeason = "Spring";
			break;
		}
		case Season::Summer:
		{
			currentSeason = "Summer";
			break;
		}
		case Season::Autumn:
		{
			currentSeason = "Autumn";
			break;
		}
		default:
		{
			currentSeason = "-";
			break;
		}
	}
	return currentSeason;
}


void ShowSeasons(Season seasons[], const unsigned int arraySize)
{
	for (unsigned int i = 0; i < arraySize; ++i)
	{
		cout << "Season [" << i + 1 << "]: "
			<< ConvertSeasonEnumToText(seasons[i]) << endl;
	}
}


void SeasonMain()
{
	while (true)
	{
		cout << "Season menu:" << endl
			<< "1. Work with one static Season object" << endl
			<< "2. Work with array of Season objects" << endl
			<< "Press ESC for exit" << endl;
		SeasonMenu taskChoice = static_cast <SeasonMenu> (_getch());
		system("cls");
		switch (taskChoice)
		{
			case SeasonMenu::FirstTask:
			{
				Season season = Season::Winter;
				cout << "Your season is: "
					<< ConvertSeasonEnumToText(season) << endl << endl;
				break;
			}
			case SeasonMenu::SecondTask:
			{
				const unsigned int arraySize = 4;
				Season seasons[arraySize]
					= { Season::Winter, Season::Spring,
					Season::Summer, Season::Autumn };
				cout << "Array of seasons: " << endl;
				ShowSeasons(seasons, arraySize);
				cout << endl;
				break;
			}
			case SeasonMenu::Exit:
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