// DetermineGradeOfTests.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	const int NUMBER_STUDENTS = 10;
	double test_grades[NUMBER_STUDENTS];
	int gradeA = 0;
	int gradeB = 0;
	int gradeC = 0;
	int gradeD = 0;
	int gradeF = 0;
	double totalGrades;

	for (int iterations = 0; iterations < NUMBER_STUDENTS; iterations++)
	{
		cout << "Enter test grade " << iterations + 1 << " : ";
		cin >> test_grades[iterations];
		totalGrades = test_grades[iterations];

		if (test_grades[iterations] >= 92)
		{
			gradeA = gradeA + 1;
		}
		else if (test_grades[iterations] >= 84 && test_grades[iterations] < 92)
		{
			gradeB = gradeB + 1;
		}
		else if (test_grades[iterations] >= 75 && test_grades[iterations] < 84)
		{
			gradeC = gradeC + 1;
		}
		else if (test_grades[iterations] >= 65 && test_grades[iterations] < 75)
		{
			gradeD = gradeD + 1;
		}
		else if (test_grades[iterations] < 65)
		{
			gradeF = gradeF + 1;
		}
	}

	cout << "Students that got A's: " << gradeA << endl;
	cout << "Students that got B's: " << gradeB << endl;
	cout << "Students that got C's: " << gradeC << endl;
	cout << "Students that got D's: " << gradeD << endl;
	cout << "Students that got F's: " << gradeF << endl << endl;

	cout << "The average is: " << (test_grades[0] + 
		test_grades[1] + 
		test_grades[2] + 
		test_grades[3] + 
		test_grades[4] + 
		test_grades[5] + 
		test_grades[6] +
		test_grades[7] + 
		test_grades[8] + 
		test_grades[9]) / 10 << "%" << endl;

    return 0;
}

