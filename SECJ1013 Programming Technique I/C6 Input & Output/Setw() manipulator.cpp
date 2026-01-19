// This program shows how to use setw() manipulator

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // setw : right-justified
    cout << "*" << -17 << "*" << endl;
    cout << "*" << setw(6) << -17 << "*" << endl << endl; // first 3 cols left blank

    cout << "*" << "Hi there!" << "*" << endl;
    cout << "*" << setw(20) << "Hi there!" << "*" << endl;
    cout << "*" << setw(3) << "Hi there!" << "*" << endl; // if no. of cols less than required, auto expands to required no.

    return 0;
}
