// This program shows how operation works on array 

#include <iostream>
using namespace std;

int main () {
    const int SIZE = 4;
    int numbers[SIZE] = {10, 20, 30, 40};

    cout << ++numbers[0] << endl; // now numbers[0] become 11
    cout << numbers[0] << endl; // prints 11
    cout << numbers[0]++ << endl; // print 11
    cout << numbers[0] << endl; // print 12

    int i = 2;
    cout << numbers[++i] << endl; // prints 40
    cout << numbers[i++] << endl; // prints 40

    return 0;
}
