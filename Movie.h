#pragma once

#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>

using namespace std;

struct Movie
{
	string Title;
	int DurationInMinutes;
	int YearOfIssue;
	string Genre;
	double Rating;
};

#endif //!_MOVIE_H_