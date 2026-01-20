// This programs shows the usage of nested structure

#include <iostream>
#include <iomanip>
using namespace std;

// Inner structure
struct Address {
    string city;
    string state;
};

// Outer structure
struct Student
{
    int id;
    string name;
    Address address; // The nested structure
};

int main () {
    Student s;
    cout << "Enter student ID: ";
    cin >> s.id;

    cin.ignore();
    cout << "Enter student name: ";
    getline(cin, s.name);

    cout << "Enter city: ";
    getline(cin, s.address.city);

    cout << "Enter state: ";
    getline(cin, s.address.state);

    cout << "\n--- Student Info ---\n";
    cout << "ID: " << s.id << endl;
    cout << "Name: " << s.name << endl;
    cout << "City: " << s.address.city << endl;
    cout << "State: " << s.address.state << endl;

    return 0;
}
