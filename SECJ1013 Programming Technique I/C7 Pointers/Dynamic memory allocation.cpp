/* This program totals and average the sales figures for any number of days.
The figures are stored in dynamically allocated array */

#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    double *sales, total = 0.0, average;
    int numDays, count;

    cout << "How many days of sales figures do you wish to process? ";
    cin >> numDays;

    // Dynamically allocate an array large enough to hold the days or else it would terminate
    sales = new double[numDays];

    cout << "Enter the sales figures for each day below." << endl;
    for (count = 0; count < numDays; count++) {
        cout << "Day " << (count + 1) << ": ";
        cin >> sales[count];

        total += sales[count];
    }

    average = total / numDays;

    cout << fixed << showpoint << setprecision(2);
    cout << "\nTotal Sales: $" << total << endl;
    cout << "Average Sales: $" << average << endl;

    delete [] sales; // Only for array, for others: delete sales; (no [])
    sales = 0; // Makes sales point to null

    return 0;
}
