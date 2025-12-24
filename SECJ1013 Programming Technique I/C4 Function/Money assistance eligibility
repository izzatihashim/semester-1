// This program checks the eligibility of a user based on their income and then calculates the total amount of assistance they will get if they're eligible

#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
using namespace std;

void getInput (long double& ic, double& income, int& child, char status[]) {

    cout << "IC number: ";
    cin >> ic;
    cout << "Gross monthly income: ";
    cin >> income;

    if (income <= 5000) {
        strcpy (status, "ELIGIBLE");
        cout << "Number of children: ";
        cin >> child;
    }

    else {
    strcpy (status, "NOT ELIGIBLE");
    }
}

int deterAmountAssist (double& income, int& child) {
    if (child == 0) {
        if (income <= 2500)
        return 1000;
        else
        return 400;
    }

    if (child > 0 && child < 3) {
        if (income <= 2500)
        return 1500;
        else
        return 600;
    }

    if (child >= 3) {
        if (income <= 3000)
        return 2000;
        else
        return 800;
    }
}

int main () {
    char input = 'Y';
    char e_status[50] = "E";
    long double ic_number = 0;
    double monthly_income = 0;
    int children = 0, amount;

    while (input == 'Y') {

    cout << "<< Check eligibility for Malaysian Family Assistance >>" << endl;

    getInput(ic_number, monthly_income, children, e_status);

    if (monthly_income <= 5000) {
    cout << "Status: " << e_status << endl;
    amount = deterAmountAssist (monthly_income, children);
    cout << "Amount of assistance = " << amount << endl;
    }

    else {
    cout << "Status: " << e_status << endl;
    }

    cout << "Press 'Y' to enter other data: ";
    cin >> input;
    input = toupper(input);
    }

    return 0;
}
