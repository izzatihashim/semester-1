// This program is to help a cashier calculate the total price of several items that customers bought by using the switch method

#include <iostream>
using namespace std;

int main () {
    char choice;
    int qty;
    float price, tot_Price = 0;

    choice = 'A';
    while (choice == 'A' || choice == 'O' || choice == 'L') {

        cout << "Enter the item id: ";
        cin >> choice;

        switch (choice) {
            case 'A': cout << "Enter quantity of the item: ";
            cin >> qty;
            price = qty * 2;
            tot_Price += price;
            continue;

            case 'O': cout << "Enter quantity of the item: ";
            cin >> qty;
            price = qty * 2.5;
            tot_Price += price;
            continue;

            case 'L': cout << "Enter quantity of the item: ";
            cin >> qty;
            price = qty * 1.8;
            tot_Price += price;
            continue;

            default: break;
        }
    }
    
    cout << "Total price is: " << tot_Price << endl;
    return 0;
}
