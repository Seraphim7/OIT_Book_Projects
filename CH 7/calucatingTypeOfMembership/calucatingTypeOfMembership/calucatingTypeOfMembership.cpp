// calucatingTypeOfMembership.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

double GetValue();
int Accounts();
char* CheckMembershipStatus(double, int);
void DisplayMembershipStatus(char*);

int main()
{
	double value = GetValue();
	int accounts = Accounts();
	char* membershipStatus = CheckMembershipStatus(value, accounts);
	DisplayMembershipStatus(membershipStatus);
    return 0;
}

double GetValue()
{
	double value;

	cout << "How much money do you have in your account(s) at the credit union: ";
	cin >> value;

	return value;
}

int Accounts()
{
	int accounts;

	cout << "How many account(s) do you have at the credit union: ";
	cin >> accounts;

	return accounts;
}

char* CheckMembershipStatus(double value, int accounts)
{
	if (value > 25000)
	{
		char* memberStatus;

		memberStatus = "platinum";
		return memberStatus;
	}

	else if (value < 25000 && value > 10000 && accounts == 2)
	{
		char* memberStatus;

		memberStatus = "gold";
		return memberStatus;
	}

	else if (value < 25000 && value > 10000 && accounts == 1)
	{
		char* memberStatus;

		memberStatus = "silver";
		return memberStatus;
	}

	else if (value <= 10000)
	{
		char* memberStatus;

		memberStatus = "copper";
		return memberStatus;
	}
}

void DisplayMembershipStatus(char* membershipStatus)
{
	cout << "You are a " << membershipStatus << " member" << endl;
}