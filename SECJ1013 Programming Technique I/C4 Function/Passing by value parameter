// This function shows the usage of passing by value parameter

#include <iostream>
using namespace std;

void f(int n) {
    cout << "Inside f(int), the value of the parameter is " << n << endl;
    n += 37;
    cout << "Inside f(int), the modified parameter is now " << n << endl;
}

int main() {
    int m = 612;
    
    cout << "The integer m = " << m << endl;
    cout << "Calling f(m)..." << endl;
    f(m); // if m = f(m), baru m tu jadi 649/same as the m in f(m) function
    cout << "The integer m = " << m << endl;
    
    return 0;
}
