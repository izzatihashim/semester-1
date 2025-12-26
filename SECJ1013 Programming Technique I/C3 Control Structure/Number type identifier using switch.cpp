// This program shows an example of checking the type of the number by using switch

#include <iostream>
using namespace std;

int main() {
    //case1 - example of switch
    bool isEven = 5;  // You can change this to false

    switch(isEven) {
        case 1:   // or case 1:
            cout << "The number is even." << endl;
            break;
        case 0:  // or case 0:
            cout << "The number is odd." << endl;
            break;
        default:
            cout << "Unexpected value!" << endl;
    }

    return 0;
}
