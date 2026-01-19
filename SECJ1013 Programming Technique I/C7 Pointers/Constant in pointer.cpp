// This program shows the usage of 3 different types of constant in pointer

#include <iostream>
using namespace std;

int main () {
    int a = 10, b = 20;

    // Example 1: Pointers to constant - pointer can move, value cant change
    const int *p1 = &a;
    // *p1 = 15;   // ❌ Not allowed
    p1 = &b;       // ✅ Allowed, does not change value of a, only pointer change value
    cout << "Pointer to constant: " << *p1 << endl;

    // Example 2: Constant pointer - pointer cant move, value can change
    int *const p2 = &a;
    *p2 = 15;       // ✅ Allowed, change value of a, but pointer still points at the same one
    // p2 = &b;     // ❌ Not allowed
    cout << "Constant pointer: " << *p2 << endl;

    // Example 3: Constant pointer to constant - both pointer & value cant change
    const int *const p3 = &a;
    // *p3 = 30;   // ❌ Not allowed
    // p3 = &b;    // ❌ Not allowed
    cout << "Const pointer to const: " << *p3 << endl;

    return 0;
}
