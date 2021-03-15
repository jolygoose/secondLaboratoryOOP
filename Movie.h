#pragma once

#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>

using namespace std;

/// @brief ������������ ��������� ������� ���� ������
/// �� ���������� ������
enum class MovieMenu
{
	// ������������ ASCII-����
	FirstTask = 49, // 1
	SecondTask = 50, // 2
	WorkWithArray = 51, // 3
	Exit = 27 // ESC
};

struct Movie
{
	// ��������
	string Title = "";
	// ����������������� � �������
	unsigned int DurationInMinutes = 0;
	// ��� �������
	unsigned int YearOfIssue = 0;
	// ����
	string Genre = "";
	// �������
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