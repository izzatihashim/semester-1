// This program that lets the user enter 10 values into an array and then display the largest and smallest values stored in the array.

#include <iostream>
using namespace std;

int main () {

    int const SIZE = 10;
    int values[SIZE];
    
    // cout << "Please enter 10 values (Use spacing): "; (Alternative)

    for (int count = 0; count < SIZE; count++) {
        cout << "Value " << count + 1 << ": ";
        cin >> values[count];
    }
        
    int largest = values[0];
    int smallest = values[0];

    for (int count = 1; count < SIZE; count++) {
        if (values[count] > largest)
        largest = values[count];

        if (values[count] < smallest)
        smallest = values[count];
    }

    cout << "Largest value is: " << largest << endl;
    cout << "Smallest value is: " << smallest << endl;

    return 0;
}
