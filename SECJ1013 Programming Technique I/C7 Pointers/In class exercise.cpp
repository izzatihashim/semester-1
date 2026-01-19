#include <iostream>
using namespace std;

int main() {
    int num = 50;
    // TODO 1: Print the value of num
    cout << "Value of num: " << num << endl;
    // TODO 2: Print the address of num
    cout << "Address of num: " << &num << endl;
    // TODO 3: Declare a pointer ptr and store the address of num
    int *ptr = &num;
    // TODO 4: Print the value stored in ptr (address)
    cout << "Value stored in ptr: " << ptr << endl;
    // TODO 5: Print the value pointed to by ptr (dereference it)
    cout << "Value pointed by ptr: " << *ptr << endl;
    // TODO 6: Change num to 100 using ptr
    *ptr = *ptr + 50; // or *ptr = 100;
    // TODO 7: Print num
    cout << "Updated value of num: " << num << endl;
    
    // Part C
    int arr[4] = {10, 20, 30, 40};
    int *p = arr; // means it is pointing to the first element

    // TODO 8: Print first element using *p
    cout << "First element:" << *p << endl;
    // TODO 9: Print third element using pointer arithmetic
    cout << "Third element" << *(p + 2) << endl;
    // TODO 10: Print fourth element using pointer as array
    cout << "Fourth element: " << p[3] << endl; // or use arr[3]
    
    // TODO 11: Use a loop and pointer arithmetic to print all array values
    // RESTRICTION: Do NOT use arr[i]
    cout << "Array values: ";
    for (int cnt = 0; cnt < 4; cnt++) {
        cout <<  *(p + 1) << " ";
    }
    cout << endl;

    // Part D
    int a = 5, b = 5;
    int *p1 = &a;
    int *p2 = &b;

    // TODO 12: Compare pointer addresses
    if (p1 == p2)
    cout << "Pointers point to the same address" << endl;
    else
    cout << "Pointers point to different address" << endl;

    // TODO 13: Compare values pointed to
    if (*p1 == *p2) 
    cout << "Values are the same" << endl;
    else
    cout << "Values are not the same" << endl;

 
    return 0;
}
