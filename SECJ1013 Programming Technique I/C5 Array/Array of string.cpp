// This program displays the number of days in each month

#include <iostream>
using namespace std;

int main()
{
    const int NUM_MONTHS = 12;
    const int STRING_SIZE = 10;

    char months[NUM_MONTHS][STRING_SIZE] = {"January", "February", "March",
                                            "April", "May", "June",
                                            "July", "August", "September",
                                            "October", "November", "December"};

    int days[NUM_MONTHS] = {31, 28, 31, 30,
                            31, 30, 31, 31,
                            30, 31, 30, 31};

    for (int num_months = 0; num_months < NUM_MONTHS; num_months++) {
        cout << months[num_months] << " has " << days[num_months] << " days." << endl;
    }
    return 0;
}
