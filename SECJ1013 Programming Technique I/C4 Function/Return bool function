// This program shows an example of returning a bool value

#include <iostream>
using namespace std;

void try1(int p);
int try3(int r);

int main() {
    int a=2;
    cout << a <<endl; // first a
    try1(a); // second a, inside function
    cout << a << endl; // first a again, since a tak = try1(a)

    int b=3;
    cout << b <<endl; // just b
    
    int c=4;
    try3(c); //4*4 = 16, but not equal to c yet
    cout << c <<endl; // c=4/first a, since c tak = try3(C)
    c=try3(c); // c is now equal to function
    cout << c << endl; // function c
    cout << try3(5) <<endl; // value that undergo function
    
    return 0;}
    
    void try1(int p) {
        p++;
        cout << p <<endl;
    }
    
    int try3(int r) {
        return r*r;
    }
