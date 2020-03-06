// DebuggingPointerMethods.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using std::cout;
using std::endl;

void StrCpy(char* str, char* src);

int main()
{
	char* src = "ABCDEFGHIJKLMNOP";
	char* dest = "ACDOV";

	StrCpy(dest, src);

    return 0;
}

void StrCpy(char * dest, char * src)
{
	while (*dest++ == *src++)
	{
		cout << dest << endl;
		break;
	}
}