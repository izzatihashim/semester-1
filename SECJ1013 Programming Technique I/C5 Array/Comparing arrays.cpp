// This program shows how to compare two arrays

#include <iostream>
using namespace std;

int main () {
    const int SIZE = 5;
    int firstArray[SIZE] = {1, 2, 3, 4, 5};
    int secondArray[SIZE] = {1, 2, 3, 4, 5};
    bool arraysEqual = true; //Flag variable
    int count = 0; // Loop counter variable

    while (arraysEqual && count < SIZE) {
        if (firstArray[count] != secondArray[count])
            arraysEqual = false;
        count++;
    }

    if (arraysEqual) 
        cout << "The arrays are equal.\n";
    else
        cout << "The arrays are not equal.\n";

    return 0;
}
