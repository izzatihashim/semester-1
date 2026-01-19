/* This program shows how to return a pointer.
Pointer cannot be returned to a local variable in the function.
Pointer can only be returned to a dynamically allocated memory or passed into the function.*/ 

#include <iostream>
using namespace std;

// Function that creates an array and returns a pointer to it
int *createArray(int size) {
    // int arr[10]; - LOCAL, dont use this (will be destroyed when function ends)
    int *arr = new int[size]; // dynamically allocate array, valid after function return
    for (int i = 0; i < size; i++) {
        arr[i] = i * 2; // store some values
    }
    return arr; // return pointer
}

int main() {
    int size = 5;
    int *myArray = createArray(size); // receive pointer from function

    cout << "Array values: ";
    for (int i = 0; i < size; i++) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    delete [] myArray; // free the memory to avoid memory leaks
    return 0;
}
