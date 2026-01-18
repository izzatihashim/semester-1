// This program shows on how to use array as argument

#include <iostream>
using namespace std;

void funcOne(int [], int);
int findSum(int, int); // Not int[], int[] because we are only passing a value, not the whole array

int list[50];
int num;
int value;

int main () {
    funcOne(list, 50);
    
    cout << findSum(50, list[2]) << endl;
    cout << findSum(list[9], list[29]) << endl;
}

void funcOne(int num[], int size) {
    cout << "Function called." << endl;
}

int findSum(int num1, int num2) {
    return num1 + num2;
}
