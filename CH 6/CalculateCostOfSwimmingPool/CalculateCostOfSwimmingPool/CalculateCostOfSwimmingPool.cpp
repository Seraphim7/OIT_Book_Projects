// CalculateCostOfSwimmingPool.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

#define CU_INCH 1/1728
#define pi 3.14159265358979324

double GetDiameter();
double GetHeight();
double CalculateCostToFillSwimmingPool(double, double);
void DisplayCostToFillSwimmingPool(double);

int main()
{
	double diameter = GetDiameter();
	double height = GetHeight();
	double costToFillSwimmmingPool = CalculateCostToFillSwimmingPool(diameter, height);
	DisplayCostToFillSwimmingPool(costToFillSwimmmingPool);
    return 0;
}

double GetDiameter()
{
	double diameter;

	cout << "Calvin, please enter in the diameter of the cylindrical swimming pool: ";
	cin >> diameter;

	return diameter;
}

double GetHeight()
{
	double height;

	cout << "Calvin, please enter in the height of the cylindrical swimming pool: ";
	cin >> height;

	return height;
}

double CalculateCostToFillSwimmingPool(double diameter, double height)
{
	double radius = diameter / 2;

	double volume = (pi* pow(radius, 2) * height);
	double units = volume / 748;
	double cost = units * 1.80;
	return cost;
}

void DisplayCostToFillSwimmingPool(double costToFillSwimmmingPool)
{
	cout << "Your swimming pool will cost: $" << costToFillSwimmmingPool << endl;
}