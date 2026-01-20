// This program shows how to access structure members with a pointer

#include <iostream>
using namespace std;

struct Student
{
    int id;
};

int main () {
    Student s;
    s.id = 12345;

    Student *sptr = &s;
    
    // Method 1: Use dereference + dot (must use parentheses)
    cout << "Using (*sptr).id: " << (*sptr).id << endl;

    // Method 2: Use arrow operator (simpler)
    cout << "Using sptr->id: " <<sptr->id << endl;

    return 0;
}
