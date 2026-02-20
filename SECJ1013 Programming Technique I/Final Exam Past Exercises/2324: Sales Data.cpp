// Declare directive, library, etc. - 1.5 marks
#include <iostream>
#include <fstream>
#include <iomanip>

#define NUMOFBRAND 10
#define NUMOFYEAR 4
using namespace std;

// Task 1: 4 marks
struct Sales
{
	string brand;
	double percentage[NUMOFYEAR];
	double average;
};

// Task 2: 7.5 marks
void calculateAverage(Sales name[])
{
	for (int i = 0; i < NUMOFBRAND; i++)
	{
		double total = 0;

		for (int j = 0; j < NUMOFYEAR; j++)
		{
			total += name[i].percentage[j];
		}

		name[i].average = total / NUMOFYEAR;
	}
}

// Task 3: 9 marks
int findLowest(Sales name[])
{
	double lowest = name[0].average;
	int lowbrand = 0;

	for (int i = 0; i < NUMOFBRAND; i++)
	{
		if (name[i].average < lowest)
		{
			lowest = name[i].average;
			lowbrand = i;
		}
	}

	return lowbrand;
}

// Task 4: 9 marks
int findHighest(Sales name[])
{
	double highest = name[0].average;
	int highbrand = 0;

	for (int i = 0; i < NUMOFBRAND; i++)
	{
		if (name[i].average > highest)
		{
			highest = name[i].average;
			highbrand = i;
		}
	}

	return highbrand;
}

void displayLine()
{
	for (int i = 0; i < 60; i++)
	{
		cout << "-";
	}
	cout << endl;
}

// Task 5: 19 marks
void displayOutput(Sales name[])
{
	cout << "Percentage of Sales by Brand (2016 to 2019)" << endl;
	displayLine();
	cout << left << setw(18) << "BRAND"  << setw(8) << "2016" << setw(8) << "2017" << setw(8) << "2018" << setw(8) << "2019" << setw(8) << "AVERAGE" << endl;
	displayLine();
	
	for (int i = 0; i < NUMOFBRAND; i++) {
		cout << left << setprecision(1) << setw(18) << name[i].brand;

		for (int j = 0; j < NUMOFYEAR; j++) {
			cout << setw(8) << name[i].percentage[j];
		}

		cout << setprecision(2) << name[i].average << endl;
	}

	int lowbrand = findLowest(name);
	int highbrand = findHighest(name);

	displayLine();

	cout << "Lowest Average of Sales Percentage: " << name[lowbrand].average << " - " << name[lowbrand].brand << endl;
	cout << "Highest Average of Sales Percentage: " << name[highbrand].average << " - " << name[highbrand].brand << endl;
	
	displayLine();
}

// Task 6: 16.5 marks
int main()
{
	Sales Car[NUMOFBRAND];
	fstream infile;
	infile.open("InputQ2.txt", ios::in);
	if (!infile) {
		cout << "File cannot be opened." << endl;
		return 0;
	}
	
	for (int i = 0; i < NUMOFBRAND; i++) {
		getline(infile, Car[i].brand);

		for (int j = 0; j < NUMOFYEAR; j++) {
			infile >> Car[i].percentage[j];
		}

		infile.ignore();
	}

	infile.close();

	calculateAverage(Car);
	displayOutput(Car);

	return 0;
}
