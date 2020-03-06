// DisplayPersonsTemp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

double InputPersonsTemp();
void DisplayPersonsTemp(double);

int main()
{
	double personsTemp = InputPersonsTemp();
	DisplayPersonsTemp(personsTemp);
    return 0;
}

double InputPersonsTemp()
{
	double personsTemp;

	cout << "What is your body temperature: ";
	cin >> personsTemp;

	return personsTemp;
}

void DisplayPersonsTemp(double personsTemp)
{
	cout << "Your Body Temperature is " << setw(6) << setprecision(3) << personsTemp << endl;
}

