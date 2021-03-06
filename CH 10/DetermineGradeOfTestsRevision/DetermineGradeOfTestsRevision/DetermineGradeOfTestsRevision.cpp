// DetermineGradeOfTestsRevision.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

const int NUMBER_STUDENTS = 10;

void DetermineGrade(double test_grades[], double totalGrades, int &gradeA, int &gradeB, int &gradeC, int &gradeD, int &gradeF);
void DisplayGrades(double test_grades[], int gradeA, int gradeB, int gradeC, int gradeD, int gradeF);

int main()
{
	double test_grades[NUMBER_STUDENTS];
	double totalGrades = 0;
	int gradeA = 0;
	int gradeB = 0;
	int gradeC = 0;
	int gradeD = 0;
	int gradeF = 0;
	

	DetermineGrade(test_grades, totalGrades, gradeA, gradeB, gradeC, gradeD, gradeF);
	DisplayGrades(test_grades, gradeA, gradeB, gradeC, gradeD, gradeF);

	

    return 0;
}

void DetermineGrade(double test_grades[], double totalGrades, int &gradeA, int &gradeB, int &gradeC, int &gradeD, int &gradeF)
{
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
}

void DisplayGrades(double test_grades[], int gradeA, int gradeB, int gradeC, int gradeD, int gradeF)
{
	cout << endl << "Students that got A's: " << gradeA << endl;
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
}

