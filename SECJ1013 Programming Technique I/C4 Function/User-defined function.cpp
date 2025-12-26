// This program demostrates the usage of user-defined function

#include <iostream>
using namespace std;

int calculateSum (int n1, int n2) {
    int sum;
    sum = n1 + n2; // can use sum as the same variable name in this function bcs it will be destroyed after done
    return sum; // return n1 + n2; (no need to create another variable)
}

int calculateDiff (int n1, int n2) {
    return n1 - n2;
}

int main () {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    int sum = calculateSum (num1, num2);
    int diff = calculateDiff (num1, num2);

    cout << "Sum: " << sum << endl;
    cout << "Diff: " << diff << endl;
}
