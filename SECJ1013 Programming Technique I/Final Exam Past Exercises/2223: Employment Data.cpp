#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

#define STATE 13
#define YEAR 6

// Task 1
struct Employement {
	string name;
	float rate[YEAR];
	float average;
};

void showLine ();
void calcAverage (Employement stt[]);
int findLow (Employement stt[]);
int findHigh (Employement stt[]);
void showOutput (Employement stt[]);

// Task 6
int main () {
	Employement state[STATE];
	ifstream input;
	input.open("input.txt");

	if (!input) {
		cout << "File cannot be opened." << endl;
		return 0;
	}

	for (int i = 0; i < STATE; i++) {
		for (int j = 0; j < YEAR; j++) {
			input >> state[i].rate[j];
			input.ignore();
		}
		
		getline(input, state[i].name);
	}

	calcAverage(state);
	showOutput(state);

	return 0;
}

void showLine() {
	for (int i = 0; i < 56; i++)
		cout << "-";
	cout << endl;
}

// Task 2
void calcAverage (Employement stt[]) {
	for (int i = 0; i < STATE; i++) {
		stt[i].average = 0;

		for (int j = 0; j < YEAR; j++) {
		stt[i].average += stt[i].rate[j];
		}

		stt[i].average /= YEAR;
	}
}

// Task 3
int findLow(Employement stt[]) {
	float lowest = stt[0].average;
	int lowestindex = 0;

	for (int i = 0; i < STATE; i++) {
		if (stt[i].average < lowest) {
			lowest = stt[i].average;
			lowestindex = i;
		}
	}

	return lowestindex;
}

// Task 4
int findHigh (Employement stt[]) {
	float highest = stt[0].average;
	int highestindex = 0;

	for (int i = 0; i < STATE; i++) {
		if (stt[i].average > highest) {
			highest = stt[i].average;
			highestindex = i;
		}
	}

	return highestindex;
}

// Task 5
void showOutput (Employement stt[]) {
	cout << endl << "Unemployment Rate (Percentage) by State (2015 to 2020)" << endl;
	showLine();
	cout << left << setw(20) << "STATE";
	cout << right;
	cout << setw(5) << "2015" << setw(5) << "2016" << setw(5) << "2017" << setw(5) << "2018" << setw(5) << "2019" << setw(5) << "2020";
	cout << " AVERAGE" << endl;
	showLine();

	cout << fixed << setprecision(1);
	for (int i = 0; i < STATE; i++) {
		cout << left << setw(20) << stt[i].name;
		cout << right;
		for (int j = 0; j < YEAR; j++) {
			cout << setw(5) << stt[i].rate[j];
		}
		cout << setw(5) << stt[i].average << endl;
	}

	int lowestindex = findLow(stt);
	int highestindex = findHigh(stt);
	showLine();
	cout << "Lowest Average Unemployement Rate : " << stt[lowestindex].average << " - " << stt[lowestindex].name << endl;
	cout << "Highest Average Unemployement Rate: " << stt[highestindex].average << " - " << stt[highestindex].name << endl;
	showLine();
}
