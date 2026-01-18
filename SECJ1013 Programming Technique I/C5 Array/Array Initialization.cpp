// This program shows the difference between default initialiation of global and local array

#include <iostream>
using namespace std;

const int SIZE = 3;
int global[SIZE];

int main () {
    int local[SIZE];

    cout << "global" << endl;
    cout << global[0] << endl; // 0
    cout << global[1] << endl; // 0
    cout << global[2] << endl; // 0
  
    cout << "local" << endl;
    cout << local[0] << endl; // 0
    cout << local[1] << endl; // -1071878064
    cout << local[2] << endl; // 32759

    return 0;
}
