// This program shows an example of using pass by reference parameter

#include <iostream>
using namespace std;

void test(int, int&); // int: pass by value, int &: pass by reference

int main() {
    int num;
    num = 5;

    test(24, num);
    cout << num << endl;

    test(num, num);
    cout << num << endl;

    test(num * num, num);
    cout << num << endl;

    test(num + num, num);
    cout << num << endl;

    system("pause");

    return 0;
}

void test(int first, int& second) {
    int third;

    third = first + second * second + 2; // remember order of operators
    first = second - first;
    second = 2 * second; // value of second will change as it is pass by reference

    cout << first << " " << second << " "<< third << endl;
}
