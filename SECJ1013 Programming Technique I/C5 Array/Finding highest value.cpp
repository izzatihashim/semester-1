// This program is to find the highest value in an array, which can also be applied to find the lowest value

#include <iostream>
using namespace std;

int main () {
    const int SIZE = 4;
    int numbers[SIZE] = {1, 2, 3, 4};
    int highest = numbers[0];
    for (int count = 0; count < SIZE; count++) {
        if (numbers[count] > highest) {
            highest = numbers[count];
        }
    }

    cout << "The highest value is " << highest << endl;

    return 0;
}
