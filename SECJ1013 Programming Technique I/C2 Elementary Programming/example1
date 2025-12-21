//This program demonstrate basic C++ input and output
//It uses variables, identifiers, cin, and cout

#include <iostream> //We need this preprocessor directive to use cin and cout
using namespace std; //This namespace tells that we are using the standard namespace, if not in use then need to put std:: in front of cin/cout each usage

int main () {
    //We must define variables before using it
    string firstName;
    int userAge;
    double favouriteNum;
    char lastNameInitial;

    //Always display a prompt before using cin
    cout << "Enter your first name: ";
    cin >> firstName;

    cout << "Enter your age (Enter number only): ";
    cin >> userAge;

    cout << "Enter your favourite number (Can be in decimal): "; //Can be in decimal because declared as double
    cin >> favouriteNum;

    cout << "Enter the first initial of your name: ";
    cin >> lastNameInitial;

    //Display a blank line for spacing
    cout << "\n--- Your Profile Summary ---\n";

    //Display the stored values from the variables
    cout << "Name: \t\t" << firstName << endl;
    cout << "Age: \t\t" << userAge << endl;
    cout << "Favourite #: \t" << favouriteNum << endl;
    cout << "Initial: \t" << lastNameInitial << endl; 

    //Send 0 back to OS to indicate success
    return 0; //means everything is fine! number other than 0 means error is detected, ex; -1
}
