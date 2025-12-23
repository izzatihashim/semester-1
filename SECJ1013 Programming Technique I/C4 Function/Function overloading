// This program shows an example of function overloading

#include <iostream>
using namespace std;

int sum (int, int);
int sum (int, int, int);
double sum (double, double);
double sum (double, double, double);

int main () {
    int n1 = 4, n2 = 5, n3 = 6;
    double n4 = 2.2, n5 = 3.2, n6 = 4.2;

    cout << sum(n1, n2) << endl;
    cout << sum(n1, n2, n3) << endl;
    cout << sum(n4, n5) << endl;
    cout << sum(n4, n5, n6) << endl;
    return 0;
}

int sum (int num1, int num2) { //is ok to use same variable name bcs theyre local variable
    return num1 + num2;
}

int sum (int num1, int num2, int num3) {
    return num1 + num2 + num3;
}

double sum (double num1, double num2) {
    return num1 + num2;
}

double sum (double num1, double num2, double num3) {
    return num1 + num2 + num3;
}

