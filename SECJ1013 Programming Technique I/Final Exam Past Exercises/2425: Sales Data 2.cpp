#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

const int MAX_BRANCH_COUNT = 10; 

// Question 1
struct Data {
    string name;
    int q1, q2, q3, q4;
};

int main()
{
    // Question 2
    Data branch[MAX_BRANCH_COUNT];
    ifstream input, input1, input2, input3, input4;

    // Extra: Get the file size
    input.open("branches.txt");
    int branchCount = 0;
    string temp;
    while (getline(input, temp)) { // Only read if input is present
        branchCount++;
    }

    if (branchCount > MAX_BRANCH_COUNT)
    branchCount = MAX_BRANCH_COUNT;

    input.close();

    input.open("branches.txt");
    input1.open("first.txt");
    input2.open("second.txt");
    input3.open("third.txt");
    input4.open("fourth.txt");

    if (!input || !input1 || !input2 || !input3 || !input4) {
        cout << "Error opening file(s)." << endl;
        return 0;
    }

    for (int i = 0; i < branchCount; i++) {
        getline(input, branch[i].name);
        input1 >> branch[i].q1;
        input2 >> branch[i].q2;
        input3 >> branch[i].q3;
        input4 >> branch[i].q4;
    }

    // Question 3
    int annualsales[branchCount];
    for (int i = 0; i < branchCount; i++) {
        annualsales[i] = branch[i].q1 + branch[i].q2 + branch[i].q3 + branch[i].q4;
    }

    int totalannualsales = 0;
    for (int i = 0; i < branchCount; i++) {
        totalannualsales += annualsales[i];
    }

    int highest = annualsales[0];
    int highestindex = 0;
    for (int i = 1; i < branchCount; i++) {
        if (annualsales[i] > highest) {
            highest = annualsales[i];
            highestindex = i;
        }
    }

    // Question 4
    cout << left << setw(20) << "BRANCH";
    cout << setw(10) << "QUARTER 1" << setw(10) << "QUARTER 2" << setw(10) << "QUARTER 3" << setw(10) << "QUARTER 4";
    cout << "ANNUAL SALE" << endl;

    for (int i = 0; i < branchCount; i++) {
        cout << setw(20) << branch[i].name;
        cout << setw(10) << branch[i].q1;
        cout << setw(10) << branch[i].q2;
        cout << setw(10) << branch[i].q3;
        cout << setw(10) << branch[i].q4;
        cout << annualsales[i] << endl;
    }

    cout << "OVERALL REPORT\n" << "==============\n";
    cout << "GRAND TOTAL SALES = " << totalannualsales << endl;
    cout << "HIGHEST BRANCH SALE = " << highest << endl;
    cout << "BRANCH NAME: " << branch[highestindex].name << endl;

    input.close();
    input1.close();
    input2.close();
    input3.close();
    input4.close();

    cout << endl << endl;
    system("pause");
    return 0;
}
