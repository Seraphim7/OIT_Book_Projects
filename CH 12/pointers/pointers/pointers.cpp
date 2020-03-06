// pointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int numbers[5] = { 99, 34, 1, 88, 100 };
	int * int_ptr = numbers;
	int ** int_ptr_ptr = &int_ptr;

	cout << numbers << endl;
	cout << int_ptr << endl;
	cout << *int_ptr_ptr << endl;
	cout << &int_ptr << endl;
	cout << int_ptr_ptr << endl;
	cout << int_ptr[0] << endl;
	cout << *int_ptr_ptr[0] << endl;
	*int_ptr = numbers[1];
	cout << *int_ptr << endl;
	cout << **int_ptr_ptr << endl;

    return 0;
}

