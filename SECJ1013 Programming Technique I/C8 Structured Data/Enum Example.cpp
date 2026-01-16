#include <iostream>
using namespace std;

enum Day { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY};

int main () {

    // Define variable of Day type
    Day workday;

    // workday = 4; WRONG! Cannot do this, can but another way
    // Assign an numerator to variable workDay
    workday = FRIDAY;

    cout << "Today is " << workday << endl; // Will display workday as 4 since it is a constant

    if (workday == FRIDAY) {
        cout << "Today is Friday" << endl; // Manual write
    }

    // Displaying enumerators
    cout << MONDAY << " " << WEDNESDAY << " " << FRIDAY << endl;

    workday = static_cast<Day>(3);

    // Assign enumerator to int variable
    int x = THURSDAY;
    cout << "Value of x: " << x << endl;

    // Comparing enumerators
    if (FRIDAY > MONDAY) {
        cout << "Friday is greater " << "than Monday" << endl;
    }

    Day day1, day2; // Define two Day variables.
    day1 = TUESDAY; // Assign TUESDAY to day1.
    // day2 = day1 + 1; ERROR! Will not work! we cannot assign value to day 
    day2 = static_cast<Day>(day1 + 1);
    // day1++ CANNOT use increment/decrement

    enum Car { PORSCHE, FERRARI, JAGUAR } sportsCar;

    sportsCar = {PORSCHE};

    return 0;
}
