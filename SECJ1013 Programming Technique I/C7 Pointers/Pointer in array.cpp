// This program shows how to use pointer in array

#include <iostream>
using namespace std;

int main () {
    // Example 1
    int vals[] = {4,7,11};
    int *valptr = vals; // use * to get value *valptr = &vals[0] (first element)

    // Equivalent for getting address
    cout << vals << endl;
    cout << &vals[0] << endl;
    cout << valptr << endl << endl; // get the address

    // Equivalent for getting value
    cout << vals[1] << endl;
    cout << valptr[1] << endl;
    cout << *(vals + 1) << endl;
    cout << *(valptr + 1) << endl << endl;

    valptr++; // move pointer to next
    cout << *valptr << endl; // 7
    cout << *(valptr + 1) << endl; // move pointer to next temporarily; if without bracket, will add value (output = 8)
    cout << *valptr << endl << endl; // back to 7 again

    valptr += 1; // move pointer to next
    cout << *valptr << endl; // 11
    cout << valptr - vals << endl; // difference between 2 pointers (how far apart they are): &valptr[2] - &val[0] = 2 - 0 = 2

    // Example 2
    // Array name can be used as pointer and vice versa
    short numbers[] = {10, 20, 30, 40, 50};

    cout << "The first element of the array is ";
    cout << *numbers << endl;
    cout << "The third element of the array is ";
    cout << *(numbers + 2) << endl;
 
    return 0;
}
