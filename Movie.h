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

/// @brief ������������ ������
enum class Genre
{
	Comedy = '1',
	Drama = '2',
	Thriller = '3',
	Action = '4',
	Horror = '5',
	Blockbuster = '6'
};

/// @brief ��������� ������
struct Movie
{
	// ��������
	string Title = "";
	// ����������������� � �������
	unsigned int DurationInMinutes = 0;
	// ��� �������
	unsigned int YearOfIssue = 0;
	// ����
	Genre MovieGenre;
	// �������
	double Rating = 0;
};

/// @brief ������� ����������� ���������� �����
/// 
/// @return ��������� ����������
Genre GetCorrectGenre();

/// @brief ������� ��������������� ����� � �����
/// 
/// @param movieGenre - ���� ������
/// 
/// @return ��������� �����������
string ConvertGenreEnumToText(Genre movieGenre);

/// @brief �������-����������� ������� ��������� �����
/// 
/// @param title - ��������
/// @param movieGenre - ����
/// @param rating - �������
/// @param yearOfIssue - ��� �������
/// @param durationInMinutes - ����������������� � �������
/// 
/// @return ��������� ������ �������-������������
Movie* MakeMovie(string title, Genre movieGenre, double rating,
	unsigned int yearOfIssue, unsigned int durationInMinutes);

/// @brief ������� ����������� ������� ��������� �����
/// 
/// @param movie - �����
/// 
/// @return ��������� �����������
Movie* CopyMovie(Movie* movie);

/// @brief �������, ���������� �������-�����������
/// ��������� ����� � ������������ ����������
/// 
/// @return ��������� ������ �������-������������
Movie* DemoMovie();

/// @brief ������� ������������� ���������������� ���� ���������� � ������ �
/// ���������� � � �������-�����������
/// 
/// @return ��������� �������� �������� ������ � �������-�����������
Movie* PushInfoAboutMovie();

/// @brief ������� ��������� ������ � ������
/// 
/// @param movie - �����
void ChangeInfoAboutMovie(Movie* movie);

/// @brief ������� ������ ���������� � ������ �� �����
/// 
/// @param movie - �����
void ShowMovie(Movie* movie);

/// @brief �������-���� ��� ������ �� ���������� �����
void MovieMain();

#endif //!_MOVIE_H_