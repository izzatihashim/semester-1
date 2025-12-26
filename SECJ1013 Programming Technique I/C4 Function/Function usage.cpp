// Example 1, 2, 3, 4 and 5 shows the basic usage of using function

// Example1
#include <iostream>
using namespace std;

void testDefaultParam(int , int = 5, double=3.2);

int main () {
    testDefaultParam(6); // a is 19
    testDefaultParam(3,4);
    testDefaultParam(3,4.5);
    testDefaultParam(3,4, 5.5);
    testDefaultParam(3.4);
}

void testDefaultParam(int a, int b, double z) {
    int u;
    a = a + static_cast<int>(2 * b + z);
    u = a + b * z;
    cout << "a = " << a << endl;
    cout << "U = " << u << endl;
}

// Example 2
// This programs has two functions: main and displayMessage
#include <iostream>
using namespace std;

//*****************************************
// Definition of function displayMessage  *
// This function displays a greeting.     *
//*****************************************

void displayMessage ()
{
    cout << "Hello from the function displayMessage.\n";
}

//*****************************************
// Function main                          *
//*****************************************

int main ()
{
    cout << "Hello from main.\n";
    displayMessage ();
    cout << "Back in function main again.\n";
    
    return 0;
}

// Example 3
#include <iostream>
using namespace std;

int function();
int main(){
    function();
    cout << "Bye from main.\n";
    system ("pause");
    return 0;
}

int function(){
    cout << "Bye! from function before exit\n";
    return(0);
    cout << "Bye! from function before exit\n";
}

// Example 4
#include <iostream>
#include <cmath>
using namespace std;

float distance(float x, float y)
{
    float dist;
    dist = sqrt (x * x + y * y);
    return dist;
}

int main ()
{
    float x,y, dist;
    cout << "Testing function distance(x,y)" << endl;
    cout << "Enter values for x and y: ";
    cin >> x >> y;
    dist = distance (x,y);
    cout << "Distance of (" << x << ',' << y << ") from origin is " << dist << endl << "Tested" << endl;

    return 0;
}

// Example 5
#include <iostream>
using namespace std;

int calculateSum (int, int); // just put the data type
int calculateDiff (int, int);

int main () {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    int sum = calculateSum (num1, num2);
    int diff = calculateDiff (num1, num2);

    cout << "Sum: " << sum << endl;
    cout << "Diff: " << diff << endl;
}

int calculateSum (int n1, int n2) {
    return n1 + n2;
}

int calculateDiff (int n1, int n2) {
    return n1 - n2;
}
