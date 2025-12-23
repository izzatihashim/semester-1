// These are 4 examples of C++ code demonstrating usage of standard library functions to replace common tasks
// 1st example is to calculate square root of a number input
// 2nd example is to check if a character is uppercase or lowercase
// 3rd example is to convert a string to uppercase
// 4th example is to find length of string

#include <iostream>
#include <cmath>
#include <cctype>
#include <cstring>
using namespace std;

int main() {
    //1. Calculate square root
    double num1, num2;
    cout << "Enter a number: ";
    cin >> num1;

    num2 = sqrt(num1);
    cout << "Square root of " << num1 << " is " << num2 << endl;

    // 2. Check if a character is uppercase or lowercase
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (isupper(ch))
    cout << "Uppercase letter" << endl;
    else if (islower(ch))
    cout << "Lowercase letter" << endl;
    else
    cout << "Not a letter" << endl;

    // 3. Convert a string to uppercase
    char word[50];
    cout << "Enter a lowercase word: ";
    cin >> word;

    for (int i=0; word[i] != '\0'; i++)
    word[i] = toupper(word[i]);
    cout << "Uppercase word: " << word << endl;

    // 4. Find length of string
    //int length = 0;
   
    char length[10];
    cout << "Enter another word: ";
    cin >> length;
    cout << "String length = " << strlen(length) << endl;
    return 0; 
} 
