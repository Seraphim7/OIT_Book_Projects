// gasTypes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int GetOctaneLevel();
char* CalculateGasType(int);
void DisplayGasType(char*);

int main()
{
	int octaneLevel = GetOctaneLevel();
	char* gasType = CalculateGasType(octaneLevel);
	DisplayGasType(gasType);
    return 0;
}

int GetOctaneLevel()
{
	int octaneLevel;

	cout << "Input the Octane Level of the gasoline: ";
	cin >> octaneLevel;

	return octaneLevel;
}

char* CalculateGasType(int octaneLevel)
{
	switch (octaneLevel)
	{
	case 87:
		return "Regular Unleaded";
	case 89:
		return "Unleaded Plus";
	case 92:
		return "Premium";
	default:
		return "Diesel";
	}
	return 0;
}

void DisplayGasType(char* gasType)
{
	cout << "The octane level shows that you have used " << gasType << " gasoline" << endl;
}
