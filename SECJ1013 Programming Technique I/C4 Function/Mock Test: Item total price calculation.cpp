// This program will help a cashier calculates the total price for items bought by the customers

#include <iostream>
using namespace std;

int item_code = 101, item_count;
double amount, total_amount = 0;

double price (int &);
double input (int &);

int main() {
    
    while (item_code != 0)
    {
        amount = input (item_code);

        double harga = amount * item_count;

        total_amount += harga;
    }

    return 0;
}

double price(int &b) {
    switch (b) {
        case 101: return 9.90;
        case 201: return 6.90;
        case 305: return 7.99;
        case 404: return 5.99;
        default: return 0.00;
    }
}

double input (int &a) {
    cout << "Enter item's code (0 to stop) => ";
    cin >> a;

    if (a == 101 || a == 201 || a == 305 || a == 404) {
        double harga = price (item_code);
        cout << "Enter item's count => ";
        cin >> item_count;
        return harga;
    }

    else if (a == 0) {
        cout << "Total amount to pay: " << total_amount << endl;
        return 0.00;
    }

    else {
        cout << "Invalid code. Please try again!" << endl;
        return 0.00;
    }
}
