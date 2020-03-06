// militaryToStandardTime.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int InputHours();
int InputMinutes();
int InputSeconds();
bool ValidInput(int, int, int);
int MilitaryToStandardTime(int);
char* determineTimeOfDay(int);
void DisplayStandardTime(int, int, int, char*);

int main()
{
	int militaryTimeHours = InputHours();
	int minutes = InputMinutes();
	int seconds = InputSeconds();
	
	bool inputIsValid = ValidInput(militaryTimeHours, minutes, seconds);

	if (inputIsValid)
	{
		int standardTimeHours = MilitaryToStandardTime(militaryTimeHours);

		char* timeOfDay = determineTimeOfDay(militaryTimeHours);
		DisplayStandardTime(standardTimeHours, minutes, seconds, timeOfDay);
	}
	else
	{
		cout << "Invalid Input" << endl;
	}
	
    return 0;
}

int InputHours()
{
	int militaryTimeHours;

	cout << "What is the time? Hrs first: ";
	cin >> militaryTimeHours;

	return militaryTimeHours;
}

int InputMinutes()
{
	int minutes;

	cout << "Now minutes: ";
	cin >> minutes;

	return minutes;
}

int InputSeconds()
{
	int seconds;

	cout << "And finally, Seconds: ";
	cin >> seconds;

	return seconds;
}

bool ValidInput(int militaryTimeHours, int minutes, int seconds)
{
	return (militaryTimeHours >= 0 && militaryTimeHours <= 23) &&
		(minutes >= 0 && minutes <= 59) &&
		(seconds >= 0 && seconds <= 59);
}

int MilitaryToStandardTime(int militaryTimeHours)
{
	if (militaryTimeHours > 0 && militaryTimeHours < 12)
	{
		return militaryTimeHours;
	}
	else if (militaryTimeHours > 12 && militaryTimeHours <= 23)
	{
		return militaryTimeHours - 12;
	}
	else if (militaryTimeHours == 0 || militaryTimeHours == 12)
	{
		return 12;
	}
	return 0;
}

char* determineTimeOfDay(int militaryTimeHours)
{
	if (militaryTimeHours >= 0 && militaryTimeHours < 12)
	{
		char* timeOfDay = "AM";

		return timeOfDay;
	}
	else if (militaryTimeHours >= 12 && militaryTimeHours <= 23)
	{
		char* timeOfDay = "PM";

		return timeOfDay;
	}
}

void DisplayStandardTime(int hours, int minutes, int seconds, char* timeOfDay)
{
	cout << hours << ":" << minutes << ":" << seconds << " " << timeOfDay << endl;
}