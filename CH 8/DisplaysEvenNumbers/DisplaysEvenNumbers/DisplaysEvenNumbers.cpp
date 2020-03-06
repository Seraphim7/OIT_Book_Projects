// DisplaysEvenNumbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void DisplayEvenNumbers(int);
void LoopThroughNumbers(int);

int main()
{
	int userInput;
	
	cout << "Please enter a integer between 1 and 50: ";
	cin >> userInput;

	LoopThroughNumbers(userInput);

	return 0;
}

void LoopThroughNumbers(int userInput)
{
	for (int currentNumber = userInput; currentNumber >= 0; currentNumber--)
	{
		if (currentNumber % 2 == 0)
			DisplayEvenNumbers(currentNumber);
	}
}

void DisplayEvenNumbers(int num)
{
	cout << num << endl;
}
