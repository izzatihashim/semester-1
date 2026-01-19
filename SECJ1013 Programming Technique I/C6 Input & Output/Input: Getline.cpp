// This program shows how to use getline to read input by not skipping whitespace character

#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    const int SIZE = 20;
    // getline: To read an entire line of input
    // Example 1: Use getline() and store as object of string
    string fullName1;
    cout << "Enter your full name: ";
    getline(cin, fullName1);
    cout << "Your name is: " << fullName1 << endl;

    // Example 2: Use cin.getline() and store in character array
    char fullName2[SIZE];
    cout << "Enter your full name again: ";
    cin.getline(fullName2, SIZE);
    cout << "Your name is: " << fullName2 << endl;

    return 0;
}
