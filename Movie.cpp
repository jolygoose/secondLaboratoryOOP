#include <iostream>
#include <conio.h>

#include "Movie.h"
#include "Common.h"


Movie* MakeMovie(string title, string genre, double rating,
	unsigned int yearOfIssue, unsigned int durationInMinutes)
{
	Movie* movie = new Movie();
	movie->Title = title;
	movie->Genre = genre;
	movie->Rating = rating;
	movie->YearOfIssue = yearOfIssue;
	movie->DurationInMinutes = durationInMinutes;
	return movie;
}


Movie* DemoMovie()
{
	return MakeMovie("Teacher", "Comedy", 9.3, 1939, 104);
}


Movie* PushInfoAboutMovie()
{
	string title;
	string genre;
	unsigned int durationInMinutes;
	unsigned int yearOfIssue;
	double rating;
	cout << "Enter the title: ";
	getline(cin, title);
	cout << "Enter the duration in minutes: ";
	durationInMinutes = GetCorrectUnsignedIntegerValue();
	cout << "Enter the year of issue: ";
	yearOfIssue = GetCorrectUnsignedIntegerValue();
	cout << "Enter the genre: ";
	getline(cin, genre);
	cout << "Enter the rating: ";
	rating = GetCorrectDoubleValue();
	return MakeMovie(title, genre, rating, yearOfIssue, durationInMinutes);
}


void ChangeInfoAboutMovie(Movie* movie)
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
			<< "1. Work with one movie data with pointers and references" << endl
			<< "2. Work with one user-entered movie data" << endl
			<< "3. Work with array of user-entered movies data" << endl
			<< "Press ESC for exit" << endl;
		MovieMenu taskChoice = static_cast <MovieMenu> (_getch());
		system("cls");
		switch (taskChoice)
		{
			// 2.2.3.1 + 2.2.4.1-2 - One movie
			case MovieMenu::FirstTask:
			{
				cout << "Example of displaying movie information" << endl << endl;
				Movie* movie = DemoMovie();
				// 2.2.3.1
				
				ShowMovie(movie);
				// 2.2.4.1
				Movie* newMovie = movie;
				cout << endl << "~ New movie pointer ~" << endl << endl;
				ShowMovie(newMovie);
				cout << endl << "Enter new values for movie" << endl;
				ChangeInfoAboutMovie(newMovie);
				cout << endl << "~ Values changed ~" << endl << endl;
				ShowMovie(newMovie);
				// 2.2.4.2
				Movie* secondNewMovie = movie;
				cout << endl << "Addresses: " << movie
					<< " | " << newMovie
					<< " | " << secondNewMovie << endl << endl;
				delete movie;
				movie = nullptr;
				newMovie = nullptr;
				secondNewMovie = nullptr;
				break;
			}
			// 2.2.3.2 - One user-entered movie
			case MovieMenu::SecondTask:
			{
				cout << "An example of working with user-entered movie data"
					<< endl << endl;
				Movie* movie = new Movie;
				ChangeInfoAboutMovie(movie);
				cout << endl << "Your movie:" << endl;
				ShowMovie(movie);
				cout << endl;
				delete movie;
				movie = nullptr;
				break;
			}
			// 2.2.3.3 - Some user-entered movies
			case MovieMenu::WorkWithArray:
			{
				cout << "An example of working with a user-entered array of movies data"
					<< endl << endl;
				cout << "Enter the array of movies size: ";
				unsigned int arraySize = GetCorrectUnsignedIntegerValue();
				Movie** arrayOfMovies = new Movie * [arraySize];
				for (unsigned int i = 0; i < arraySize; ++i)
				{
					cout << "[" << i << "] Movie" << endl;
					arrayOfMovies[i] = new Movie;
					ChangeInfoAboutMovie(arrayOfMovies[i]);
				}
				cout << endl << "Array of movies:" << endl;
				for (unsigned int i = 0; i < arraySize; ++i)
				{
					cout << "Movie [" << i << "]: ";
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