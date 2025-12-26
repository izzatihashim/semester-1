// The 1st example is a program that calculates the area of a circle using math operation in cmath library
// The 2nd example is a program that calculates the square root of a positive number using math operation in cmath library

#include <iostream>
#include <cmath> //for math functions
using namespace std;

int main () {
    //example 1
    double area, radius;
    cout << "This program calculates the area of a circle. \n";
    cout << "What is the radius of the circle? ";
    cin >> radius;
    area = 3.14159 * pow(radius, 2.0); //pow(x,y) = x^y
    cout << "The area is " << area << endl;
    system ("pause");

    // example 2
    int num1, num2, result;
    cout << "Enter a number: ";
    cin >> num1;
    cout << "Enter another number: ";
    cin >> num2;
    if ((num1 < 0) || (num2 < 0)) {
        cout << "negative number/s";
    }
    else {
        result = sqrt(num1 + num2);
        cout << "The square root of " << num1+num2 << " is " << result;
    }

    return 0;
}
