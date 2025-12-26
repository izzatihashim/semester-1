// This program is to help a cashier calculate the total price of several items that customers bought

#include <iostream>
using namespace std;

int main () {
    char choice;
    int qty;
    float price, tot_Price = 0;

    do {
        cout << "Enter the item id: ";
        cin >> choice;

        if (choice == 'A') {
        cout << "Enter quantity of the item: ";
        cin >> qty;
        price = qty * 2;
        }

        else if (choice == 'O') {
        cout << "Enter quantity of the item: ";
        cin >> qty;
        price = qty * 2.5;
        }

        else if (choice == 'L') {
        cout << "Enter quantity of the item: ";
        cin >> qty;
        price = qty * 1.8;
        }

        else
        break;

        tot_Price += price;

    } while (choice == 'A' || choice == 'O' || choice == 'L');
    
    cout << "Total price is: " << tot_Price << endl;
    return 0;
}
