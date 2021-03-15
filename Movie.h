#pragma once

#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>

using namespace std;

enum class MovieMenu
{
	FirstTask = 49,
	SecondTask = 50,
	WorkWithArray = 51,
	Exit = 27
};

struct Movie
{
	string Title = "";
	unsigned int DurationInMinutes = 0;
	unsigned int YearOfIssue = 0;
	string Genre = "";
	double Rating = 0;
};

Movie* MakeMovie(string title, string genre, double rating,
	unsigned int yearOfIssue, unsigned int durationInMinutes);

Movie* CopyMovie(Movie* movie);

Movie* DemoMovie();

Movie* PushInfoAboutMovie();

void ChangeInfoAboutMovie(Movie* movie);

void ShowMovie(Movie* movie);

void MovieMain();

#endif //!_MOVIE_H_