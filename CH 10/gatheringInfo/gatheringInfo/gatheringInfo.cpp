// gatheringInfo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void GetInfoIntoArrays(char nameOfClub1[], char nameOfClub2[], char nameOfClub3[], char nameOfClub4[], char nameOfClub5[], char nameOfClub6[], char nameOfClub7[], char nameOfClub8[], char nameOfClub9[], char nameOfClub0[], char president1[], char president2[], char president3[], char president4[], char president5[], char president6[], char president7[], char president8[], char president9[], char president0[], char numOfStudents1[], char numOfStudents2[], char numOfStudents3[], char numOfStudents4[], char numOfStudents5[], char numOfStudents6[], char numOfStudents7[], char numOfStudents8[], char numOfStudents9[], char numOfStudents0[]);
void DisplayInfoInArrays(char nameOfClub1[], char nameOfClub2[], char nameOfClub3[], char nameOfClub4[], char nameOfClub5[], char nameOfClub6[], char nameOfClub7[], char nameOfClub8[], char nameOfClub9[], char nameOfClub0[], char president1[], char president2[], char president3[], char president4[], char president5[], char president6[], char president7[], char president8[], char president9[], char president0[], char numOfStudents1[], char numOfStudents2[], char numOfStudents3[], char numOfStudents4[], char numOfStudents5[], char numOfStudents6[], char numOfStudents7[], char numOfStudents8[], char numOfStudents9[], char numOfStudents0[]);

int main()
{
	char nameOfClub1[25];
	char nameOfClub2[27];
	char nameOfClub3[16];
	char nameOfClub4[9];
	char nameOfClub5[13];
	char nameOfClub6[25];
	char nameOfClub7[6];
	char nameOfClub8[5];
	char nameOfClub9[19];
	char nameOfClub0[11];
	
	char president1[10];
	char president2[13];
	char president3[12];
	char president4[8];
	char president5[9];
	char president6[12];
	char president7[11];
	char president8[14];
	char president9[13];
	char president0[12];

	char numOfStudents1[2];
	char numOfStudents2[2];
	char numOfStudents3[3];
	char numOfStudents4[3];
	char numOfStudents5[2];
	char numOfStudents6[2];
	char numOfStudents7[2];
	char numOfStudents8[2];
	char numOfStudents9[3];
	char numOfStudents0[2];

	GetInfoIntoArrays(nameOfClub1, nameOfClub2, nameOfClub3, nameOfClub4, nameOfClub5, nameOfClub6, nameOfClub7, nameOfClub8, nameOfClub9, nameOfClub0, president1, president2, president3, president4, president5, president6, president7, president8, president9, president0, numOfStudents1, numOfStudents2, numOfStudents3, numOfStudents4, numOfStudents5, numOfStudents6, numOfStudents7, numOfStudents8, numOfStudents9, numOfStudents0);
	DisplayInfoInArrays(nameOfClub1, nameOfClub2, nameOfClub3, nameOfClub4, nameOfClub5, nameOfClub6, nameOfClub7, nameOfClub8, nameOfClub9, nameOfClub0, president1, president2, president3, president4, president5, president6, president7, president8, president9, president0, numOfStudents1, numOfStudents2, numOfStudents3, numOfStudents4, numOfStudents5, numOfStudents6, numOfStudents7, numOfStudents8, numOfStudents9, numOfStudents0);
    return 0;
}
void GetInfoIntoArrays(char nameOfClub1[], char nameOfClub2[], char nameOfClub3[], char nameOfClub4[], char nameOfClub5[], char nameOfClub6[], char nameOfClub7[], char nameOfClub8[], char nameOfClub9[], char nameOfClub0[], char president1[], char president2[], char president3[], char president4[], char president5[], char president6[], char president7[], char president8[], char president9[], char president0[], char numOfStudents1[], char numOfStudents2[], char numOfStudents3[], char numOfStudents4[], char numOfStudents5[], char numOfStudents6[], char numOfStudents7[], char numOfStudents8[], char numOfStudents9[], char numOfStudents0[])
{
	cout << "Type in the first club's name: ";
	cin.getline(nameOfClub1, 25);
	cout << "Type in the first president's name: ";
	cin.getline(president1, 10);
	cout << "Type in the first Club's number of students: ";
	cin.getline(numOfStudents1, 5);

	cout << "Type in the second club's name: ";
	cin.getline(nameOfClub2, 27);
	cout << "Type in the second president's name: ";
	cin.getline(president2, 13);
	cout << "Type in the second Club's number of students: ";
	cin.getline(numOfStudents2, 5);

	cout << "Type in the third club's name: ";
	cin.getline(nameOfClub3, 16);
	cout << "Type in the third president's name: ";
	cin.getline(president3, 12);
	cout << "Type in the third Club's number of students: ";
	cin.getline(numOfStudents3, 5);

	cout << "Type in the fourth club's name: ";
	cin.getline(nameOfClub4, 9);
	cout << "Type in the fourth president's name: ";
	cin.getline(president4, 8);
	cout << "Type in the fourth Club's number of students: ";
	cin.getline(numOfStudents4, 5);

	cout << "Type in the fifth club's name: ";
	cin.getline(nameOfClub5, 13);
	cout << "Type in the fifth president's name: ";
	cin.getline(president5, 9);
	cout << "Type in the fifth Club's number of students: ";
	cin.getline(numOfStudents5, 5);

	cout << "Type in the sixth club's name: ";
	cin.getline(nameOfClub6, 25);
	cout << "Type in the sixth president's name: ";
	cin.getline(president6, 12);
	cout << "Type in the sixth Club's number of students: ";
	cin.getline(numOfStudents6, 5);

	cout << "Type in the seventh club's name: ";
	cin.getline(nameOfClub7, 6);
	cout << "Type in the seventh president's name: ";
	cin.getline(president7, 11);
	cout << "Type in the seventh Club's number of students: ";
	cin.getline(numOfStudents7, 5);

	cout << "Type in the eighth club's name: ";
	cin.getline(nameOfClub8, 5);
	cout << "Type in the eighth president's name: ";
	cin.getline(president8, 14);
	cout << "Type in the eighth Club's number of students: ";
	cin.getline(numOfStudents8, 5);

	cout << "Type in the ninth club's name: ";
	cin.getline(nameOfClub9, 19);
	cout << "Type in the ninth president's name: ";
	cin.getline(president9, 13);
	cout << "Type in the ninth Club's number of students: ";
	cin.getline(numOfStudents9, 5);

	cout << "Type in the tenth club's name: ";
	cin.getline(nameOfClub0, 11);
	cout << "Type in the tenth president's name: ";
	cin.getline(president0, 12);
	cout << "Type in the tenth Club's number of students: ";
	cin.getline(numOfStudents0, 5);
}

void DisplayInfoInArrays(char nameOfClub1[], char nameOfClub2[], char nameOfClub3[], char nameOfClub4[], char nameOfClub5[], char nameOfClub6[], char nameOfClub7[], char nameOfClub8[], char nameOfClub9[], char nameOfClub0[], char president1[], char president2[], char president3[], char president4[], char president5[], char president6[], char president7[], char president8[], char president9[], char president0[], char numOfStudents1[], char numOfStudents2[], char numOfStudents3[], char numOfStudents4[], char numOfStudents5[], char numOfStudents6[], char numOfStudents7[], char numOfStudents8[], char numOfStudents9[], char numOfStudents0[])
{
	cout << nameOfClub1 << " " << president1 << numOfStudents1 << endl
		 << nameOfClub2 << " " << president2 << numOfStudents2 << endl
		 << nameOfClub3 << " " << president3 << numOfStudents3 << endl
		 << nameOfClub4 << " " << president4 << numOfStudents4 << endl
		 << nameOfClub5 << " " << president5 << numOfStudents5 << endl
		 << nameOfClub6 << " " << president6 << numOfStudents6 << endl
		 << nameOfClub7 << " " << president7 << numOfStudents7 << endl
		 << nameOfClub8 << " " << president8 << numOfStudents8 << endl
		 << nameOfClub9 << " " << president9 << numOfStudents9 << endl
		 << nameOfClub0 << " " << president0 << numOfStudents0 << endl;
}
