// callingAFunction.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void DisplayName();


int main()
{
	DisplayName();
    return 0;
}

void DisplayName()
{
	cout << "My name is Alex" << endl;
}