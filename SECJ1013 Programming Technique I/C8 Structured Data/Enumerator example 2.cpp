// This program shows another example of enumarated data type

#include <iostream>
using namespace std;

// Enum declaration
enum OrderStatus {
    PENDING,
    PROCESSING,
    SHIPPED,
    DELIVERED,
    CANCELLED
};

int main() {
    OrderStatus status = PENDING;

    if (status == PENDING) {
        cout << "Order is pending." << endl;
    }

    status = PROCESSING;
    cout << "Order is being processed." << endl;

    status = SHIPPED;
    cout << "Order has been shipped." << endl;

    switch (status) {
    case PENDING:
        cout << "Pending order" << endl;
        break;
    case PROCESSING:
        cout << "Processing order" << endl;
        break;
    case SHIPPED:
        cout << "Order shipped" << endl;
        break;
    case DELIVERED:
        cout << "Order delivered" << endl;
        break;
    case CANCELLED:
        cout << "Order cancelled" << endl;
        break;
    }

    return 0;
}
