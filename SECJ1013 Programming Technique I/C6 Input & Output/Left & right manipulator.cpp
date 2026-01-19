// This program consists of 2 examples on how to use left and right manipulator

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Example 1
    cout << "*" << -17 << "*" << endl;
    cout << "*" << setw(6) << -17 << "*" << endl;
    cout << left;
    cout << "*" << setw(6) << -17 << "*" << endl << endl;

    cout << "*" << "Hi there!" << "*" << endl;
    cout << "*" << setw(20) << "Hi there!" << "*" << endl;
    cout << right;
    cout << "*" << setw(20) << "Hi there!" << "*" << endl;\

    // Example 2
    int x = 15;
    int y = 7634;
    cout << left;
    cout << setw(5) << x << setw(7) << y << setw(8) << "Warm" << endl;

    cout << right;
    cout << setw(5) << x << setw(7) << y << setw(8) << "Warm" << endl;

    return 0;
}
