// This program reads an integer number and then calculate the product of its digits
// It will then identify whether the product of digits for the integer is a multiple of 4, 5, and/ or 7

#include <iostream>
using namespace std;

int main () {

    int num, input, digit, product;
    cout << "Enter an integer number: ";
    cin >> num;

    input = num; // keep original for printing
    product = 1;

    digit = input % 10; // to get the remainder which is the last digit
    cout << digit;
    product = product * digit; 
    input = input / 10; // to remove the last digit and move to the next one 

    while (input > 0)
    {
        digit = input % 10;
        cout << " * " << digit;
        product = product * digit;
        input = input / 10;
    }

    cout << " = " << product << endl;

    bool mult4 = (product % 4 ==0); // in bracket to store the bool as 1/0
    bool mult5 = (product % 5 ==0);
    bool mult7 = (product % 7 ==0);

    if (mult4 && mult5 && mult7) 
    cout << num << " is a multiple of 4, 5 and 7";

    else if (mult4 && mult5)
    cout << num << " is a multiple of 4 and 5";
    

    else if (mult4 && mult7)
    cout << num << " is a multiple of 4 and 7";
    

    else if (mult5 && mult7)
    cout << num << " is a multiple of 5 and 7";
    

    else if (mult4)
    cout << num << " is a multiple of 4";
    

    else if (mult5)
    cout << num << " is a multiple of 5";
    

    else
    cout << num << " is a multiple of 7";

    return 0;

}
