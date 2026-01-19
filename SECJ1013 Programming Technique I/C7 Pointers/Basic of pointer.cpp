// This program shows the basic usage of pointer

#include <iostream>
using namespace std;

int main () {
    // Example 1
    int x = 25;
    int *ptr = &x;

    cout << "The value of x is " << x << endl;
    cout << "The address of x is " << ptr << endl;
    cout << "The value of x using pointer is " << *ptr << endl; // Dereferences a pointer

    // Example 2
    int a = 5;
    int b = 9;
    int *ptr = &a;
    *ptr = b; // a becomes 9

    return 0;
}
