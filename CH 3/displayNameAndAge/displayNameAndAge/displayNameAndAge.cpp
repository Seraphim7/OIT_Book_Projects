// displayNameAndAge.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void Display(char*, int);

int main()
{
	char* name = "Alex";
	int age = 17;
	Display(name, age);
    return 0;
}

void Display(char* name, int age)
{
	cout << "Your name is " << name << " and you are " << age << " years old" << endl;
}

