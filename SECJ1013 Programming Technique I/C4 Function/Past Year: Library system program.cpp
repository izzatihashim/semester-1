// 2023-2024 Midterm Practical
/* This program can help a user obtain information about library and calculate late fees that need to be paid for overdue book return,
this program will terminates once the user choose the exit option */

#include <iostream>
using namespace std;

double calculateLateFees (int);
void displayMenu ();
void displayLibraryInfo ();
void getUserInput (int &);

int main () {
    int choice, days;
    double late_fees;
    days = 0;

    do {
    cout << "************ Library Book Checkout System ************\n";
    displayMenu ();
    cout << "Enter you choice (1-3): ";
    cin >> choice;

    if (choice == 1) {
    getUserInput (days);
    late_fees = calculateLateFees (days);

    cout << "Late fees: RM" << late_fees << endl;
    }

    else if (choice == 2) {
        displayLibraryInfo ();
    }

    else if (choice < 1 || choice > 3) {
        cout << "Invalid choice. Please enter a number between 1 and 3.\n";
    }

    } while (choice != 3);

    cout << "Exiting the program. Thank you!\n";
    return 0;
}

void displayMenu () {
    cout << "1. Calculate Late Fees\n";
    cout << "2. Display Library Information\n";
    cout << "3. Quit\n";
}

void getUserInput (int & a) {
    cout << "Enter the number of days the book is overdue: ";
    cin >> a;
}

double calculateLateFees (int b) {
    double fees;
    if (b <= 7)
    return fees = b * 0.50;

    else if (b > 7 && b <= 14)
    return fees = 7 * 0.50 + ((b - 7) * 1.00);

    else
    return fees = 7 * 0.50 + 7 * 1.00 + (b - 14) * 2.00;
}

void displayLibraryInfo () {
    cout << "************ Library Information ************\n";
    cout << "Library Name: UTM Library\n";
    cout << "Address: Skudai, Johor\n";
    cout << "Contact: (123) 456 7890\n";
}
