// This programs shows how to use the shopoint manipulator

#include <iostream>
using namespace std;

int main() {
    // showpoint : shows decimal point & trailing zeros
    float lots = 3.1415926535, little1 = 2.25;
    float little2 = 1.5, whole = 4.00000;

    cout << "Some values with noshowpoint (the default)" << endl;
    cout << "lots: " << lots << endl; // 3.14159
    cout << "little1: " << little1 << endl; // 2.25
    cout << "little2: " << little2 << endl; // 1.5
    cout << "whole: " << whole << endl << endl; // 4 

    cout << "The same values with showpoint" << endl;
    cout << showpoint;
    cout << "lots: " << lots << endl; // 3.14159
    cout << "little1: " << little1 << endl; // 2.25000
    cout << "little2: " << little2 << endl; // 1.50000
    cout << "whole: " << whole << endl; // 4.00000

    return 0;
}
