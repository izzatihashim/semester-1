// This programs shows few different ways to use structure as function argument

#include <iostream>
using namespace std;

struct Student {
    int id;
    double gpa;
};

// Example 1: Pass by VALUE (slow, copy is made)
void showByValue (Student s) {
    cout << "Pass by value: ID = " << s.id << ", GPA = " << s.gpa << endl;
}

// Example 2: Pass by REFERENCE (can change data, faster than by value)
void changeByReference (Student &s) {
    s.gpa = 4.00;
}

// Example 3: Pass by CONST REFERENCE (fast + read-only)
void showByConstRef (const Student &s) {
    cout << "Pass by const reference: ID = " << s.id << ", GPA = " << s.gpa << endl;
}

int main () {
    Student st = {102, 3.25};

    showByValue(st);
    showByConstRef(st);
    changeByReference(st);

    cout << "After change: GPA = " << st.gpa << endl;
}
