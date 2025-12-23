// Example 1, 2 and 3 shows an example of using static in global and local variable to retain value

// Example 1 - global
#include <iostream>
using namespace std;

int j = 40;

void p() {
    int i=5; // no static, remains 5
    static int j=5; // static, j will have increment
    i++;
    j++;
    cout << "i: " << i << endl;
    cout << "j: " << j << endl; // local j is executed, prioritise local over global
}

int main() {
    p();
    p();
return 0;
}

// Example 2: local 
#include <iostream>
using namespace std;

void showVar();

int main ( ) {
    for (int count = 0; count < 10; count++)
    showVar();
    system("pause");
    
    return 0;
}

void showVar() {
    static int var = 10; //use static, previous value is retained
    cout << var << endl;
    var++;
}

// Example 3 - local
#include <iostream>
using namespace std;

void showVar();

int main ( ) {
    for(int count=0;count<10; count++)
    showVar();
    system("pause");
    
    return 0;
}

void showVar() {
    int var = 10; // no static, value is destroyed
    cout << var << endl;
    var++;
}
