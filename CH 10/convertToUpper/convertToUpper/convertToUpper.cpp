// convertToUpper.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void DisplayName(char firstName[], char lastName[]);
void GetFirstAndLastName(char firstName[], char lastName[]);

int firstNameLength;
int lastNameLength;

int main()
{
	char firstName[20];
	char lastName[35];

	GetFirstAndLastName(firstName, lastName);
	DisplayName(firstName, lastName);
    return 0;
}

void GetFirstAndLastName(char firstName[], char lastName[])
{
	cout << "Please enter your first name: ";
	cin.getline(firstName, 20);

	firstNameLength = strlen(firstName);
	
	cout << "Please enter your first name: ";
	cin.getline(lastName, 35);

	lastNameLength = strlen(lastName);
}

void DisplayName(char firstName[], char lastName[])
{
	for (int i = 0; i < firstNameLength; i++)
	{
		if (i == 0)
		{
			cout << "Hello " << char(toupper(firstName[i]));
		}
		else
		{
			cout << firstName[i];
		}
	}

	cout << " ";

	for (int i = 0; i < lastNameLength; i++)
	{
		if (i == 0)
		{
			cout << char(toupper(lastName[i]));
		}
		else
		{
			cout << lastName[i];
		}
	}
	cout << endl;
}