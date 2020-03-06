// printingScores.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int CalculateTotal(int, int, int);
double CalculateAverage(int);
void Print(int, double);

int main()
{
	int exam1;
	int exam2;
	int exam3;

	int total;
	double avg;

	cout << "This is an exam score calculator" << endl;
	cout << "--------------------------------" << endl;
	cout << "Please enter your three exam scores" << endl;

	cout << "1: ";
	cin >> exam1;

	cout << "2: ";
	cin >> exam2;

	cout << "3: ";
	cin >> exam3;

	cout << "Thank You" << endl;

	total = CalculateTotal(exam1, exam2, exam3);
	avg = CalculateAverage(total);

	Print(total, avg);
    return 0;
}

int CalculateTotal(int exam1, int exam2, int exam3)
{
	return (exam1 + exam2 + exam3);
}

double CalculateAverage(int total)
{
	return (total / 3.0);
}

void Print(int total, double avg)
{
	cout << "\n" << total << " Total " << avg << " Average" << endl;
}
