// This simple program will make a triangle with a size that depends on the number inserted by the user

#include <iostream>
using namespace std;

int main () {
    int length;
    
    cout << "Enter the length => ";
    cin >> length;

    for (int i = 0; i < length; i++) {

        for (int j = 0; j < i; j++) {
        cout << "*";
        }

        cout << "*" << endl;
    }

    return 0;
}
