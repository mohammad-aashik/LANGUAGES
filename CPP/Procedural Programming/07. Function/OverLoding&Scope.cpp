#include <iostream>
using namespace std;

int c = 10; // Global variable

int sum(int a, int b) { // Function to add two integers

    int c = 5; // Local variable
    
    return a + b;

}

int sum(int a, int b, int c) { // Function to add three integers
    return a + b + c;
}

double sum(double a, double b) { // Function to add two doubles
    return a + b;
}

int main() {
    
    cout << "Sum of 5 and 10 is: " << sum(5, 10) << endl; // Calling sum function
    cout << "Sum of 5, 10 and 15 is: " << sum(5, 10, 15) << endl; // Calling sum function
    cout << "Sum of 5.5 and 10.5 is: " << sum(5.5, 10.5) << endl; // Calling sum function

    return 0;
}