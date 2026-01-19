// This programs shows how to use fixed manipulator

#include <iostream>
using namespace std;

int main() {
    // fixed : fixed to 6 decimal points
    // Example 1
    float small = 3.1415926535897932384626;
    float large = 6.0234567e17;
    float whole = 2.000000000;

    cout << "Some values in general format" << endl;
    cout << "small: " << small << endl; // 3.14159
    cout << "large: " << large << endl; // 6.02346e+17
    cout << "whole: " << whole << endl << endl; // 2

    cout << fixed;
    cout << "The same values in fixed format" << endl;
    cout << "small: " << small << endl; // 3.141593
    cout << "large: " << large << endl; // 602345661202956288.000000
    cout << "whole: " << whole << endl << endl; // 2.000000

    // Example 2
    double x = 15.674;
    double y = 235.73;
    double z = 9525.9874;
    cout << fixed;
    cout << x << endl << y << endl << z << endl;

    return 0;
}
