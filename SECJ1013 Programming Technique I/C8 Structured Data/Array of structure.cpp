// This program uses an array of structures

#include <iostream>
#include <iomanip>
using namespace std;

struct PayInfo
{
    int hours;
    double payRate;
};


int main () {
    const int NUM_WORKERS = 3;
    PayInfo workers[NUM_WORKERS];
    int count;

    cout << "Enter the hours worked by " << NUM_WORKERS << " employees and their hourly rates." << endl;

    for (count = 0; count < NUM_WORKERS; count++) {
        cout << "Hours worked by employee #" << (count + 1) << ": ";
        cin >> workers[count].hours;

        cout << "Hourly pay rate for employee #" << (count + 1) << ": ";
        cin >> workers[count].payRate;
        cout << endl;
    }

    cout << "Here is the gross pay for each employee: " << endl;
    cout << fixed << showpoint << setprecision(2);
    for (count = 0; count < NUM_WORKERS; count++) {
        double gross;
        gross = workers[count].hours * workers[count].payRate;
        cout << "Employee #" << (count + 1) << ": $" << gross << endl;
    }

    return 0;
}
