// This program has two overloaded functions that return the average of an array

#include <iostream>
using namespace std;

int average(int [], int);
double average(double [], int); //Can only overload function u=if both return type and 1 paramater is diff
int number;

int main () {
    int arrayofInt[] = {1,2,3,4,5,6};
    double arrayofDouble[] = {6.0,4.4,1.9,2.9,3.4,3.5};

    cout << average(arrayofInt, 6) << endl;
    cout << average(arrayofDouble, 6) << endl;

    return 0;
}

int average(int array[], int size) {
    int total = 0;

    for (int i = 0; i < size; i++) {
        total += array[i];
    }

    return total / size;
}

double average(double array[], int size) {
    double total = 0;

    for (int i = 0; i < size; i++) {
        total += array[i];
    }
    return total/size;
}
