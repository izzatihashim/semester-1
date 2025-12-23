// The 1st example is a program that will identify the type of character that user input
// The 2nd example is a program that will convert input name in lowercase to uppercase

#include <iostream>
#include <cctype> //for character classification and conversion
using namespace std;

int main () {
    //example 1
    char input;
    cout << "Enter any character ";
    cin.get(input); //use cin.get() when want to read characters including the whitespace
    //cin >> input; - use this when want to read individual words or numerical values, skipping leading whitespace
    
    if (isalpha(input)) {
        //cout.put(input);
        cout << "It is an alphabet. " << endl;
    }
    if (isdigit(input)) {
        cout << "It is a digit." << endl;
    }
    if (islower(input)) {
    cout << "It is a lowercase letter." << endl;
    }
    if (isupper(input)) {
        cout << "It is an uppercase letter." << endl;
    }
           
    //example 2
    char name[51];
    cout << "Enter a name ";
    cin >> name;
    
    for (int j=0; name[j] != '\0'; j++) //int i=0 means start at 1st char & i++ means move to next char
    //input[i] != '\0' means keep looping if the input is not the null terminator (end of string) 
    name[j] = toupper(name[j]); //i: position number of the letter, ex: i=0 is the first letter
    cout << "The name in upper case is: " << name;

    return 0;
}
