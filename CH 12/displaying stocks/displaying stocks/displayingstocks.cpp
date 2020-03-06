// displayingstocks.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	char buffer[10];
	int nameCounter;
	char** arrayOfPtrs = new char*[1];

	while (true)
	{
		cin >> buffer;

		char c1 = cin.get();

		switch (c1)
		{
		case EOF:
			break;
		case '\n':
			nameCounter = 0;
		default:
			int lengthOfStockName = strlen(buffer);
			char* stockName = new char[lengthOfStockName + 1];

			for (size_t i = 0; i < lengthOfStockName; i++)
			{

			}
			nameCounter++;

			if (nameCounter == maximumCapacityOf)
			{
				
			}
		}
	}
    return 0;
}

char* extendingArrayOfPrts()
{
	
}

