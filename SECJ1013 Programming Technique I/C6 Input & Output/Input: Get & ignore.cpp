// The first example shows how to use cin.get() to read a single character
// The second example shows how to use cin.ignore to skip unneded character

#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    // cin.get(): to read a single character but also after whitespace
    char ch;
    cout << "Strike any key to continue: ";
    cin.get(ch);
    cout << "Success" << ch;

    // cin.ignore(): to skip over unneeded character
    int id;
    char code;
    cout << "Enter an integer id: ";
    cin >> id; // Here cin only read until the last int, doesnt read "\n" at the end of the int

    cin.ignore(); // If didnt use cin.ignore(), the "\n" will be read by cin.get(), hence skipping the cin.get() line
    cout << "Enter a code: ";
    cin.get(code);
    cout << "Output\n" << id << "\t" << code;

    return 0;
}
