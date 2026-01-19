// This program shows how to use cin for reading input

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int SIZE = 20;
    // cin: To read a single word but not after whitespace
    // Example 1: Use cin for char array
    char firstName1[SIZE];
    cout << "Enter your first name: ";
    cin >> firstName1;
    cout << "Your first name is: " << firstName1 << endl;

    // Example 2: Use cin for char array with setw()
    cout << "Enter your first name again: ";
    cin >> setw(5) >> firstName1; // Read until 4 character + \n only
    cout << "Your first name is: " << firstName1 << endl;

    // Example 3: Use cin for string
    string firstName2;
    cout << "Enter your first name again: ";
    cin >> firstName2;
    cout << "Your first name is: " << firstName2 << endl;

    return 0;
}
