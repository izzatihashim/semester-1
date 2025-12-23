// 2021 Test 2 Practical
/* This program can help ticket counter calculates the price for 3 different movie types that several customers want to rent,
after the user has inserted all the rental name with their respective number of bookings for each movie types,
the program will then show the analysis of all bookings */

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int calcAverage (int, int, int); //task1
float calcPrice (float); //task2
void getInput(int&, int&, int&); //task3
void dispRentalSummary (float, int, int, int); //task4

int main () {
    char choice = 'y', name[50];
    int type1 = 0, type2 = 0, type3 = 0, total1 = 0, total2 = 0, total3 = 0;
    float total_rate, sum = 0, final_rate;

    while (choice != 'N') {
        cout << endl << "<<<<<<<<<<<<<< DATA >>>>>>>>>>>>>" << endl;
        cout << "Renter Name : ";
        cin.get();
        cin.getline(name, 50);

        getInput(type1, type2, type3);
        total_rate = (type1 * 2) + (type2 * 5) + (type3 * 3.5);
        sum = sum + total_rate;
        total1 += type1;
        total2 += type2;
        total3 += type3;

        final_rate = calcPrice (total_rate);
        cout << endl << "<<<<<<<<<<<<< SUMMARY >>>>>>>>>>>>>" << endl;
        cout << "Total Rate (RM): " << total_rate << endl;
        cout << "Final Price (RM): " << final_rate << endl << endl;

        cout << "Press [N] to stop...";
        cin >> choice;
        choice = toupper(choice);
    }

    dispRentalSummary (sum, total1, total2, total3);
    return 0;
}

void getInput(int& A, int& B, int& C) {
    cout << "Movie Type 1: ";
    cin >> A;
    cout << "Movie Type 2: ";
    cin >> B;
    cout << "Movie Type 3: ";
    cin >> C;
}

float calcPrice (float price) {
    if (price < 35.00)
    return price - (price * 0.10);

    else if (price >= 35.00 && price <= 60.00)
    return price - (price * 0.15);

    else
    return price - (price * 0.25);
}

void dispRentalSummary (float total, int A, int B, int C) {
    int average = calcAverage (A, B, C);
    int highest;
    cout << endl << "<<<<<<<<<< RENTAL SUMMARY >>>>>>>>>>" << endl;
    cout << "Overall Total Rate (RM)\t\t\t: " << total << endl;
    cout << "Average for 3 types of rented movies\t: " << average << endl;

    if (A > B && A > C) {
    highest = A;
    cout << "Highest type of movie rented\t\t: Movie Type 1 (" << highest << ")" << endl;
    }

    else if (B > A && B > C) {
    highest = B;
    cout << "Highest type of movie rented\t\t: Movie Type 2 (" << highest << ")" << endl;
    }

    else {
    highest = C;
    cout << "Highest type of movie rented\t\t: Movie Type 3 (" << highest << ")" << endl;
    }



}

int calcAverage (int a, int b, int c) {
    return (a + b + c) / 3;
}
