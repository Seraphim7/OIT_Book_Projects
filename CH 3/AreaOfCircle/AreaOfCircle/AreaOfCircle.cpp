// AreaOfCircle.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

double Input();
double CalculateArea(double);
int DisplayArea(double);

int main()
{
	double radius = Input();
	double area = CalculateArea(radius);
	DisplayArea(area);
	return 0;
}

double Input()
{
	double radius;

	cout << "This is a calculator of the area of a circle based from a given radius\n";
	cout << "----------------------------------------------------------------------\n";
	cout << "Enter the radius of your circle: ";
	cin >> radius;

	return radius;
}

double CalculateArea(double radius)
{
	double pi = 3.1416;

	return pi * pow(radius, 2);
}

int DisplayArea(double area)
{
	cout << "\aThe area of this circle is " << area << endl;
	return 0;
}