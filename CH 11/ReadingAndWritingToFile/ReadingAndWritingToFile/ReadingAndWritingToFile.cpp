// ReadingAndWritingToFile.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream DataFile;
	DataFile.open("n.txt");

	if (DataFile.is_open())
	{
		cout << "File opened!" << endl;
		DataFile.close();
	}
	else
	{
		cout << "fail" << endl;
	}

	ofstream DataFile ("c:\\DataFilePractice.txt", ios::app);

	if (DataFile.is_open())
	{
		cout << "GOOD" << endl;
		DataFile.close();
	}
	else
	{
		cout << "NO GOOD" << endl;
	}

    return 0;
}

