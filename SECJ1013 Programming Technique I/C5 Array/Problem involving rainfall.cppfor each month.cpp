// This program lets the user enter the total rainfall for each of 12 months into an array of doubles. The program should then calculate and display the total rainfall for the year, the average monthly rainfall, and the months with the highest and lowest amounts.
// Input Validation: Do not accept negative numbers for monthly rainfall figures.

#include <iostream>
using namespace std;

int main () {
    int count = 0;
    double total = 0;
    const int SIZE = 12;
    double rainfall[SIZE];
    bool valid = true;
    int highestmonth = 1;
    int lowestmonth = 1;
    
    cout << "Please enter the total rainfall for each month." << endl;
    while (valid && count < SIZE) {
        cout << "Month " << count + 1 << ": ";
        cin >> rainfall[count];

        if (rainfall[count] < 0)
           cout << "Invalid value. Please enter a positive value" << endl;

        else
           count++;
    }

    double highest = rainfall[0];
    double lowest = rainfall[0];

    for (int i = 0; i < SIZE; i++) {
        total += rainfall[i];
                    
        if (rainfall[i] > highest) {
            highest = rainfall[i];
            highestmonth = i + 1;
        }

        if (rainfall[i] < lowest) {
            lowest = rainfall[i];
            lowestmonth = i + 1;
        }
    }

    double average = total / count;
    cout << "Total rainfall: " << total << endl;
    cout << "Average monthly fall: " << average << endl;
    cout << "Largest value is: " << highest << " (Month " << highestmonth << ")" << endl;
    cout << "Smallest value is: " << lowest << " (Month " << lowestmonth << ")"<< endl;

    return 0;
}
