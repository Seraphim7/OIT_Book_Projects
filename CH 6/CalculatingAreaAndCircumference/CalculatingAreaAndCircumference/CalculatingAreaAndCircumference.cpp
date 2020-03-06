// CalculatingAreaAndCircumference.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

#define PI 3.14159

double Input();
double CalculateCircumference(double);
double CalculateArea(double);
void Display(double, double);

int main()
{
	double radius = Input();
	double circumference = CalculateCircumference(radius);
	double area = CalculateArea(radius);
	Display(circumference, area);
    return 0;
}

double Input()
{
	double radius;

	cout << "Give me the radius so that I can give you the circumference and area of the circle: ";
	cin >> radius;

	return radius;
}

double CalculateCircumference(double radius)
{
	double circumference;

	circumference = 2 * PI * radius;

	return circumference;
}

double CalculateArea(double radius)
{
	double area;

	area = PI * pow(radius, 2);

	return area;
}

void Display(double circumference, double area)
{
	cout << endl << "Circumference of circle = " << circumference << endl;
	cout << "Area of circle = " << area << endl << endl;
}