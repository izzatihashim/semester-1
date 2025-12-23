// The 1st example is an example of using the string copy function
// The 2nd & 3rd example is the examples of using the string compare function

#include <iostream>
#include <cstring>
using namespace std;

int main () {
    //example 1
    char reply;
    char garment [] = "overcoat";
    cout << "Is it raining outside? Answer y/n\n";
    cin >> reply;
    
    if (reply == 'y') {
    strcpy (garment, "raincoat");
    cout << "before you go out today take your " << garment << endl;
    }
    else {
        cout << "have a nice sunny day!" << endl;
    }

    //example 2
    char aString[10] = "Hello";
    char anotherString[10] = "Goodbye";
    if (strcmp(aString, anotherString)) { 
        cout << "Strings are NOT same." << endl;
    }
    else {
        cout << "String are same." << endl;
    }

    //example 3
    char A[10] = "Love";
    char B[5] = "Love";
    if (strcmp(A, B)) { //returns 0 if strings are same; 0: false > go to else block 
        cout << "String are NOT same." << endl;
    }
    else {
        cout << "Strings are same." << endl;
    }

    return 0;
}
