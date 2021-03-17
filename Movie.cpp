#include <iostream>
#include <conio.h>

#include "Movie.h"
#include "Common.h"


Movie* MakeMovie(string title, Genre movieGenre, double rating,
	unsigned int yearOfIssue, unsigned int durationInMinutes)
{
	Movie* movie = new Movie();
	movie->Title = title;
	movie->MovieGenre = movieGenre;
	movie->Rating = rating;
	movie->YearOfIssue = yearOfIssue;
	movie->DurationInMinutes = durationInMinutes;
	return movie;
}


Genre GetCorrectGenre()
{
	int movieGenre = _getch();
	const int minimumBorder = static_cast <int> (Genre::Comedy);
	const int maximumBorder = static_cast <int> (Genre::Blockbuster);
	while ((movieGenre < minimumBorder) || (movieGenre > maximumBorder))
	{
		cerr << "Error: Choice cannot be less than " << (char)minimumBorder 
			<< " and more than " << (char)maximumBorder << endl;
		movieGenre = _getch();
	}
	return (static_cast <Genre> (movieGenre));
}


double GetCorrectRating()
{
	double rating = GetCorrectUnsignedDoubleValue();
	const double minimumBorder = 0.0;
	const double maximumBorder = 10.0;
	while ((rating < minimumBorder) || (rating > maximumBorder))
	{
		cerr << "Error: Choice cannot be less than 0.0 and more than 10.0" << endl;
		rating = GetCorrectUnsignedDoubleValue();
	}
	return rating;
}


string ConvertGenreEnumToText(Genre movieGenre)
{
	string genre;
	switch (movieGenre)
	{
		case Genre::Comedy:
		{
			genre = "Comedy";
			break;
		}
		case Genre::Drama:
		{
			genre = "Drama";
			break;
		}
		case Genre::Thriller:
		{
			genre = "Thriller";
			break;
		}
		case Genre::Action:
		{
			genre = "Action";
			break;
		}
		case Genre::Horror:
		{
			genre = "Horror";
			break;
		}
		case Genre::Blockbuster:
		{
			genre = "Blockbuster";
			break;
		}
		default:
		{
			genre = "-";
			break;
		}
	}
	return genre;
}


Movie* CopyMovie(Movie* movie)
{
	Movie* copiedMovie = new Movie();
	copiedMovie->Title = movie->Title;
	copiedMovie->MovieGenre = movie->MovieGenre;
	copiedMovie->DurationInMinutes = movie->DurationInMinutes;
	copiedMovie->YearOfIssue = movie->YearOfIssue;
	copiedMovie->Rating = movie->Rating;
	return copiedMovie;
}


Movie* DemoMovie()
{
	return MakeMovie("Teacher", Genre::Comedy, 9.3, 1939, 104);
}


Movie* PushInfoAboutMovie()
{
	string title;
	cout << "Enter the title: ";
	getline(cin, title);
	cout << "Enter the duration in minutes: ";
	unsigned int durationInMinutes = GetCorrectUnsignedIntegerValue();
	cout << "Enter the year of issue: ";
	unsigned int yearOfIssue = GetCorrectUnsignedIntegerValue();
	cout << "Press the key with the specific number to select the genre of the movie:"
		<< endl << "1. Comedy\t2.Drama\t\t3.Thriller"
		<< endl << "4. Action\t5.Horror\t6.Blockbuster" << endl;
	Genre genre = GetCorrectGenre();
	cout << "Enter the rating: ";
	double rating = GetCorrectRating();
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
	cout << "Press the key with the specific number to select the genre of the movie:"
		<< endl << "1. Comedy\t2.Drama\t\t3.Thriller"
		<< endl << "4. Action\t5.Horror\t6.Blockbuster" << endl;
	movie->MovieGenre = GetCorrectGenre();
	cout << "Enter the rating: ";
	movie->Rating = GetCorrectRating();
}


void ShowMovie(Movie* movie)
{
	cout << "Movie '" << movie->Title << "' - " 
		<< "Duration: " << movie->DurationInMinutes << " minutes | "
		<< "Year of issue: " << movie->YearOfIssue << " | "
		<< "Genre: " << ConvertGenreEnumToText(movie->MovieGenre) << " | "
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
				// 2.2.7.2
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
				Movie* movie = PushInfoAboutMovie();
				cout << endl << "Your movie:" << endl;
				ShowMovie(movie);
				cout << endl << "~ Try to copy movie ~" << endl;
				// 2.2.7.3
				Movie* copiedMovie = CopyMovie(movie);
				ShowMovie(copiedMovie);
				cout << endl;
				delete movie;
				delete copiedMovie;
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
					arrayOfMovies[i] = PushInfoAboutMovie();
				}
				cout << endl << "Array of movies:" << endl;
				for (unsigned int i = 0; i < arraySize; ++i)
				{
					cout << "Movie [" << i << "]: ";
					ShowMovie(arrayOfMovies[i]);
				}
				cout << endl;
				for (unsigned int i = 0; i < arraySize; ++i)
				{
					delete arrayOfMovies[i];
				}
				delete[] arrayOfMovies;
				arrayOfMovies = nullptr;
				break;
			}
			case MovieMenu::Exit:
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