// This program shows how to modifies an array of string using function

#include <iostream>
using namespace std;

void changeName(char [][25], int);

int main () {
    const int NAMES = 5, SIZE = 25;
    char students[NAMES][SIZE] = {"Nazirah", "Liya", "Farah", "Najla", "Rain"};

    cout << "CURRENT NAMES" << endl;
    for (int i = 0; i < NAMES; i++) {
        cout << students[i] << endl;
    }

    cout << endl;
    changeName(students, NAMES);
    cout << endl;

    cout << "UPDATED NAMES" << endl;
    for (int j = 0; j < NAMES; j++) {
        cout << students[j] << endl;
    } 

    return 0;
}

void changeName(char pupils[][25], int names) {
    for (int count = 0; count < names; count++) {
        cout << "Enter a new name for friend " << count + 1 << ": ";
        cin >> pupils[count];
    }
}
