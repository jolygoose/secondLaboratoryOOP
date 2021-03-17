#include <iostream>
#include <conio.h>

#include "Flight.h"
#include "Common.h"


Flight* MakeFlight(string departurePoint, string destination,
	unsigned int durationInMinutes)
{
	Flight* flight = new Flight();
	flight->DeparturePoint = departurePoint;
	flight->Destination = destination;
	flight->DurationInMinutes = durationInMinutes;
	return flight;
}


Flight* CopyFlight(Flight* flight)
{
	Flight* copiedFlight = new Flight();
	copiedFlight->DeparturePoint = flight->DeparturePoint;
	copiedFlight->Destination = flight->Destination;
	copiedFlight->DurationInMinutes = flight->DurationInMinutes;
	return copiedFlight;
}


Flight* DemoFlight()
{
	return MakeFlight("Moscow", "Tomsk", 255);
}


Flight* PushInfoAboutFlight()
{
	string departurePoint;
	string destination;
	cout << "Enter the departure point: ";
	getline(cin, departurePoint);
	cout << "Enter the destination: ";
	getline(cin, destination);
	cout << "Enter the duration in minutes: ";
	unsigned int durationInMinutes = GetCorrectUnsignedIntegerValue();
	return MakeFlight(departurePoint, destination, durationInMinutes);
}


unsigned int FindShortestFlight(Flight** flights, unsigned int count)
{
	unsigned int minimumDuration = flights[0]->DurationInMinutes;
	unsigned int index = 0;
	for (unsigned int i = 0; i < count; ++i)
	{
		if (flights[i]->DurationInMinutes < minimumDuration)
		{
			minimumDuration = flights[i]->DurationInMinutes;
			index = i;
		}
	}
	return index;
}


void ChangeInfoAboutFlight(Flight* flight)
{
	cout << "Enter the departure point: ";
	getline(cin, flight->DeparturePoint);
	cout << "Enter the destination: ";
	getline(cin, flight->Destination);
	cout << "Enter the duration in minutes: ";
	flight->DurationInMinutes = GetCorrectUnsignedIntegerValue();
}


void ShowFlight(Flight* flight)
{
	cout << "Flight " << flight->DeparturePoint << " - " << flight->Destination
		<< " will be in transit " << flight->DurationInMinutes << " minutes" << endl;
}


void FlightMain()
{
	while (true)
	{
		cout << "Flight menu:" << endl
			<< "1. Work with one flight data with pointers and references" << endl
			<< "2. Work with one user-entered flight data" << endl
			<< "3. Work with array of user-entered flights data" << endl
			<< "Press ESC for exit" << endl;
		FlightMenu taskChoice = static_cast <FlightMenu> (_getch());
		system("cls");
		switch (taskChoice)
		{
			// 2.2.3.1 + 2.2.4.1-2 - One flight
			case FlightMenu::FirstTask:
			{
				cout << "Example of displaying flight information" << endl << endl;
				// 2.2.6.1 - 2.2.7.2
				Flight* flight = DemoFlight();
				// 2.2.3.1
				ShowFlight(flight);
				// 2.2.4.1
				Flight* newFlight = flight;
				cout << endl << "~ New flight pointer ~" << endl << endl;
				ShowFlight(newFlight);
				cout << endl << "Enter new values for flight" << endl;
				ChangeInfoAboutFlight(newFlight);
				cout << endl << "~ Values changed ~" << endl << endl;
				ShowFlight(newFlight);
				// 2.2.4.2
				Flight* secondNewFlight = flight;
				cout << endl << "Addresses: " << flight
					<< " | " << newFlight
					<< " | " << secondNewFlight << endl << endl;
				delete flight;
				flight = nullptr;
				newFlight = nullptr;
				secondNewFlight = nullptr;
				break;
			}
			// 2.2.3.2 - One user-entered flight
			case FlightMenu::SecondTask:
			{
				cout << "An example of working with user-entered flight data"
					<< endl << endl;
				Flight* flight = PushInfoAboutFlight();
				cout << endl << "Your flight:" << endl;
				ShowFlight(flight);
				cout << endl << "~ Try to copy flight ~" << endl;
				// 2.2.7.3
				Flight* copiedFlight = CopyFlight(flight);
				ShowFlight(copiedFlight);
				cout << endl;
				delete flight;
				delete copiedFlight;
				flight = nullptr;
				copiedFlight = nullptr;
				break;
			}
			// 2.2.3.3 - Some user-entered flights
			case FlightMenu::WorkWithArray:
			{
				cout << "An example of working with a user-entered array of flights data"
					<< endl << endl;
				cout << "Enter the array of flights size: ";
				unsigned int arraySize = GetCorrectUnsignedIntegerValue();
				// 2.2.6.2
				Flight** flights = new Flight * [arraySize];
				for (unsigned int i = 0; i < arraySize; ++i)
				{
					cout << "[" << i << "] Flight" << endl;
					flights[i] = PushInfoAboutFlight();
				}
				cout << endl << "Array of flights:" << endl;
				for (unsigned int i = 0; i < arraySize; ++i)
				{
					cout << "Flight [" << i << "]: ";
					ShowFlight(flights[i]);
				}
				// 2.2.6.3
				unsigned int shortestFlightIndex
					= FindShortestFlight(flights, arraySize);
				cout << endl << "The shortest flight: "
					<< flights[shortestFlightIndex]->DeparturePoint
					<< " - " 
					<< flights[shortestFlightIndex]->Destination
					<< " will be in transit " 
					<< flights[shortestFlightIndex]->DurationInMinutes 
					<< " minutes" << endl << endl;
				for (unsigned int i = 0; i < arraySize; ++i)
				{
					delete flights[i];
				}
				delete[] flights;
				flights = nullptr;
				break;
			}
			case FlightMenu::Exit:
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