/*

1. Compile-time Polymorphism
Compile செய்யும்போதே எந்த function செயல்பட வேண்டும் என்பது தீர்மானிக்கப்படும்.
Function Overloading, Operator Overloading

*/

#include <iostream>
using namespace std;

class Calculator {
public:

    void add(int a, int b) {
        // Adds two integers
        cout << a + b << endl;
    }

    void add(int a, int b, int c) {
        // Adds three integers
        cout << a + b + c << endl;
    }

    void add(double a, double b) {
        // Adds two decimal numbers
        cout << a + b << endl;
    }
};

int main() {

    Calculator obj;  // Create an object

    obj.add(10, 20);       // Calls the first add()
    obj.add(10, 20, 30);   // Calls the second add()
    obj.add(2.5, 3.5);     // Calls the third add()

    return 0;
}