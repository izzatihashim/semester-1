// This programs shows how to use manipulator fixed and showpoint together

#include <iostream>
using namespace std;

int main() {
    double x = 15.674;
    double y = 235.73;
    double z = 9525.9874;

    cout << "No fixed and showpoint" << endl; // Does not show trailing zero, only copy from the original value
    cout << x << endl << y << endl << z << endl; // x = 15.674

    cout << "Showpoint only" << endl; // shows trailing zero & decimal point up to 6 s.f.
    cout << showpoint;
    cout << x << endl << y << endl << z << endl; // x = 15.6740

    cout << "Fixed and showpoint" << endl; // shows 6 decimal points
    cout << fixed << showpoint;
    cout << x << endl << y << endl << z << endl; // x = 15.674000


    return 0;
}
