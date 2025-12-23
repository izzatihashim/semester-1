// 2021 Test2
/* This program can help a teacher to run an analysis of their students' marks,
the teacher can insert multiple students name and marks repeatedly until ENTER(length of 0) is pressed as the student name */

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void getInput (int&, int&, int&);
void dispTier (int);
int calcAverage (int, int);
void dispSummary (int);

int main () {
    char name[50] = "abu", lowest_name[50], highest_name[50];
    int score1, score2, score3, student_number, total_mark, average_mark, lowest, highest, sum;

    student_number = 0;
    sum = 0;

    while (strlen(name) != 0) {
    cout << "<<<<<<<<<<<<<< DATA >>>>>>>>>>>>>\n";
    cout << "Name\t: ";

    cin.getline(name, 50);

    if (strlen(name) == 0 || strcmp(name, "0") == 0)
    break;

    student_number += 1;
    getInput (score1, score2, score3);
    total_mark = (score1 * 35 /100) + (score2 * 25 / 100) + (score3 * 40 /100);

    if (student_number == 1) {
        lowest = total_mark;
        highest = total_mark;
        strcpy(lowest_name, name);
        strcpy (highest_name, name);
    }

    else if (total_mark < lowest) {
        lowest = total_mark;
        strcpy(lowest_name, name);
    }

    else if (total_mark > highest) {
        highest = total_mark;
        strcpy (highest_name, name);
    }

    cin.get();

    dispSummary (total_mark);

    sum += total_mark;
    }

    average_mark = calcAverage (student_number, sum);

    cout << "\n<<<<<<< RESULTS ANALYSIS >>>>>>>>" << endl;
    cout << "Lowest mark : " << lowest << " (" << lowest_name << ")" << endl;
    cout << "Highest mark: " << highest << " (" << highest_name << ")" << endl;
    cout << "Average for " << student_number << " students: " << average_mark << endl; 

    return 0;
}

void getInput (int& q1, int& q2, int& q3) {
    int s1, s2, s3;
    cout << "Q1 mark: ";
    cin >> s1;
    q1 = s1;

    cout << "Q2 mark: ";
    cin >> s2;
    q2 = s2;

    cout << "Q3 mark: ";
    cin >> s3;
    q3 = s3;
}

void dispTier (int tier) {
    if (tier >= 75)
    cout << "Tier\t: Tier 1" << endl << endl;

    else if (tier <= 40)
    cout << "Tier\t: Tier 3" << endl << endl;

    else
    cout << "Tier\t: Tier 2" << endl << endl;
}

int calcAverage (int count, int tier) {
    int average = tier / count;

    return average;
}

void dispSummary (int tier) {
    cout << "<<<<<<<<<<<<< SUMMARY >>>>>>>>>>>\n";
    cout << "Total marks: " << tier << endl;

    dispTier (tier);
}
