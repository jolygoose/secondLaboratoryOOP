#include <iostream>
#include <conio.h>

#include "Flight.h"
#include "Common.h"


void DemoFlight(Flight* flight)
{
	flight->DeparturePoint = "Moscow";
	flight->Destination = "Tomsk";
	flight->DurationInMinutes = 235;
}


void PushInfoAboutFlight(Flight* flight)
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
				Flight* flight = new Flight;
				// 2.2.3.1
				DemoFlight(flight);
				ShowFlight(flight);
				// 2.2.4.1
				Flight* newFlight = flight;
				cout << endl << "~ New flight pointer ~" << endl << endl;
				ShowFlight(newFlight);
				cout << endl << "Enter new values for flight" << endl;
				PushInfoAboutFlight(newFlight);
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
				Flight* flight = new Flight;
				PushInfoAboutFlight(flight);
				cout << endl << "Your flight:" << endl;
				ShowFlight(flight);
				cout << endl;
				delete flight;
				flight = nullptr;
				break;
			}
			// 2.2.3.3 - Some user-entered flights
			case FlightMenu::WorkWithArray:
			{
				cout << "An example of working with a user-entered array of flights data"
					<< endl << endl;
				cout << "Enter the array of flights size: ";
				unsigned int arraySize = GetCorrectUnsignedIntegerValue();
				Flight** arrayOfFlights = new Flight * [arraySize];
				for (unsigned int i = 0; i < arraySize; ++i)
				{
					cout << "[" << i << "] Flight" << endl;
					arrayOfFlights[i] = new Flight;
					PushInfoAboutFlight(arrayOfFlights[i]);
				}
				cout << endl << "Array of flights:" << endl;
				for (unsigned int i = 0; i < arraySize; ++i)
				{
					cout << "Flight [" << i << "]: ";
					ShowFlight(arrayOfFlights[i]);
				}
				cout << endl;
				delete[] arrayOfFlights;
				arrayOfFlights = nullptr;
				return;
			}
			case FlightMenu::Exit:
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