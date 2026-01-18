// Example 1 shows the difference between default initialiation of global and local array
// Example 2 shows the value of uninitialized value in array

#include <iostream>
using namespace std;

const int SIZE = 3;
int global[SIZE];

int main () {
    // Example 1
    int local[SIZE];

    cout << "global" << endl;
    cout << global[0] << endl; // 0
    cout << global[1] << endl; // 0
    cout << global[2] << endl; // 0

    cout << endl;
    cout << "local" << endl;
    cout << local[0] << endl; // 0
    cout << local[1] << endl; // -1071878064
    cout << local[2] << endl; // 32759

    // Example 2
    int initial[3] = {100, 200};
    cout << endl;
    cout << "initialized" << endl;
    cout << initial[0] << endl; // 100
    cout << initial[1] << endl; // 200
    cout << initial[2] << endl; // uninitialized value set to 0

    return 0;
}
