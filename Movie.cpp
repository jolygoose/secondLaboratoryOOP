#include <iostream>
#include <conio.h>

#include "Movie.h"
#include "Common.h"


void DemoMovie(Movie* movie)
{
	movie->Title = "Teacher";
	movie->DurationInMinutes = 104;
	movie->YearOfIssue = 1939;
	movie->Genre = "Drama/Comedy";
	movie->Rating = 9.3;
}


void PushInfoAboutMovie(Movie* movie)
{
	cout << "Enter the title: ";
	getline(cin, movie->Title);
	cout << "Enter the duration in minutes: ";
	movie->DurationInMinutes = GetCorrectUnsignedIntegerValue();
	cout << "Enter the year of issue: ";
	movie->YearOfIssue = GetCorrectUnsignedIntegerValue();
	cout << "Enter the genre: ";
	getline(cin, movie->Genre);
	cout << "Enter the rating: ";
	movie->Rating = GetCorrectDoubleValue();
}


void ShowMovie(Movie* movie)
{
	cout << "Movie '" << movie->Title << "' - " 
		<< "Duration: " << movie->DurationInMinutes << " minutes | "
		<< "Year of issue: " << movie->YearOfIssue << " | "
		<< "Genre: " << movie->Genre << " | "
		<< "Rating: " << movie->Rating << " |" << endl;
}


void MovieMain()
{
	while (true)
	{
		cout << "Movie menu:" << endl
			<< "1. Task 2.2.3.1" << endl
			<< "2. Task 2.2.3.2" << endl
			<< "3. Task 2.2.3.3" << endl
			<< "Press ESC for exit" << endl;
		MovieMenu taskChoice = static_cast <MovieMenu> (_getch());
		system("cls");
		switch (taskChoice)
		{
			// 2.2.3.1 - One static movie
			case MovieMenu::FirstTask:
			{
				cout << "Example of displaying movie information" << endl << endl;
				Movie* movie = new Movie;
				DemoMovie(movie);
				ShowMovie(movie);
				cout << endl;
				delete movie;
				break;
			}
			// 2.2.3.2 - One user-entered movie
			case MovieMenu::SecondTask:
			{
				cout << "An example of working with user-entered movie data"
					<< endl << endl;
				Movie* movie = new Movie;
				PushInfoAboutMovie(movie);
				cout << endl << "Your movie:" << endl;
				ShowMovie(movie);
				cout << endl;
				delete movie;
				break;
			}
			// 2.2.3.3 - Some user-entered movies
			case MovieMenu::ThirdTask:
			{
				cout << "An example of working with a user-entered array of movies data"
					<< endl << endl;
				cout << "Enter the array of movies size: ";
				unsigned int arraySize = GetCorrectUnsignedIntegerValue();
				Movie** arrayOfMovies = new Movie * [arraySize];
				for (unsigned int i = 0; i < arraySize; ++i)
				{
					cout << "[" << i + 1 << "] Movie" << endl;
					arrayOfMovies[i] = new Movie;
					PushInfoAboutMovie(arrayOfMovies[i]);
				}
				cout << endl << "Array of movies:" << endl;
				for (unsigned int i = 0; i < arraySize; ++i)
				{
					cout << "Movie [" << i + 1 << "]: ";
					ShowMovie(arrayOfMovies[i]);
				}
				cout << endl;
				delete[] arrayOfMovies;
				arrayOfMovies = nullptr;
				return;
			}
			case MovieMenu::Exit:
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