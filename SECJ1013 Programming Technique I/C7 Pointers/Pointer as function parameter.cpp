// This program shows how to use pointer as function parameter

#include <iostream>
using namespace std;

void increaseByTen(int *); // requirement 1: * in fucntion parameter
void getNumber(int *);

int main () {
    int num;
    getNumber(&num); // requirement 3: & as function argument
    cout << "Before the function call: " << num << endl;
    increaseByTen(&num); 
    cout << "After the function call: " << num << endl;

    return 0;
}

void increaseByTen(int *ptr) { // requirement 1: * in function parameter
    *ptr = *ptr + 10; // requirement 2: * in body to dereference
}

void getNumber(int *ptr) {
    cout << "Enter a number: ";
    cin >> *ptr;
}
