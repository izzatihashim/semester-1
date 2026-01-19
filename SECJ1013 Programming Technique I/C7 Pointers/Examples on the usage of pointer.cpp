// This program shows multiple example on the usage of pointer 

#include <iostream>
using namespace std;

int main () {
    // question 1
    double a = 15.6, b = 10.2, *ptr_1 = &b, *ptr_2 = &a;

    cout << ptr_1 << endl; 
    cout << *ptr_1 << endl; // 10.2
    *ptr_1 = *ptr_2 + a;
    cout << ptr_1 << endl; 
    cout << *ptr_1 << endl; // 31.2
    cout << ptr_2 << endl;

    // question 2
    int c = 10, d = 2, *ptr_3 = &d;

    cout << *ptr_3 << endl; // 2
    *ptr_3 -= c;
    cout << *ptr_3 << endl; // -8

    // question 3
    int e[5] = {2, 4, 6, 8, 3};
    int *ptr_4 = NULL, *ptr_5 = NULL, *ptr_6 = NULL;

    ptr_6 = &e[0];
    ptr_4 = ptr_5 = ptr_6 + 2;

    cout << *ptr_4 << endl; // 6
    cout << *ptr_5 << endl; // 6
    cout << *ptr_6 << endl; // 2

    return 0;
}
