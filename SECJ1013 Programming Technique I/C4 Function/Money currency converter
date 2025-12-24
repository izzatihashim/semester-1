// This program converts money in MYR currency to other currencies

#include <iostream>
#include <cctype>
using namespace std;

int main () {
    float money;
    int conversion_rate;
    char currency;

    cout << "Enter the amount of money in MYR => ";
    cin >> money;
    cout << "Choose the currency you want to convert to (U-US Dollar, S- Singapore Dollar, C- Chinese Yuan) => ";
    cin >> currency;

    currency = toupper(currency);

    if (currency == 'U') {
        money *= 0.23;
        cout << "Your conversion money is USD " << money << endl;
    }
    else if (currency == 'S') {
       money *= 0.30;
       cout << "Your conversion money is SGD " << money << endl;
    }
    else {
        money *= 1.63;
        cout << "Your conversion money is CNY " << money << endl;
    }

    return 0;
}
