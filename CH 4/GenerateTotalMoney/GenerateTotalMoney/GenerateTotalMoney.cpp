// GenerateTotalMoney.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int InputNumberOfAccumilations();
int CalculateTotalAmount(int);
void DisplayTotalAmount(int);

int main()
{
	int numberOfAccumilations = InputNumberOfAccumilations();
	int totalAmount = CalculateTotalAmount(numberOfAccumilations);
	DisplayTotalAmount(totalAmount);
    return 0;
}

int InputNumberOfAccumilations()
{
	int numberOfAccumilations;

	cout << "How many times are you accumilating: ";
	cin >> numberOfAccumilations;

	return numberOfAccumilations;
}

int CalculateTotalAmount(int numberOfAccumilations)
{
	int totalAmount = 0;

	for (int i = 0; i < numberOfAccumilations; i++)
	{
		totalAmount = totalAmount++;
	}
	return totalAmount;
}

void DisplayTotalAmount(int totalAmount)
{
	if (totalAmount >= 0 && totalAmount < 31)
	{
		cout << "You have " << totalAmount << " cent(s)" << endl;
	}
	else
	{
		cout << "error" << endl;
	}
}