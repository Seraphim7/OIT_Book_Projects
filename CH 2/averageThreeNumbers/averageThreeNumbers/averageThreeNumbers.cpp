// averageThreeNumbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

double CalculateAverage(double, double, double);
void PrintAverage(double);

int main()
{
	double num1 = 10;
	double num2 = 100;
	double num3 = 1000;

	double average = CalculateAverage(num1, num2, num3);
	PrintAverage(average);
    return 0;
}

double CalculateAverage(double num1, double num2, double num3)
{
	double avg = (num1 + num2 + num3) / 3;
	return avg;
}

void PrintAverage(double average)
{
	cout << "The average of these numbers is: " << average << endl;
}

