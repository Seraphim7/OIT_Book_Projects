// convertingYearsToDays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

double CalculateYearsToDays(double, const int);
void DisplayAgeInDays(double);

int main()
{
	const int daysInYear = 365;
	int ageInYears = 17;

	double ageInDays = CalculateYearsToDays(ageInYears, daysInYear);
	DisplayAgeInDays(ageInDays);
	return 0;
}

double CalculateYearsToDays(double ageInYears, const int daysInYear)
{
	return (ageInYears * daysInYear);
}

void DisplayAgeInDays(double ageInDays)
{
	cout << "You are " << ageInDays << " days old" << endl;
}