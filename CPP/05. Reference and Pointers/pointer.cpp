/*
Pointer in C++

=> pointers are variables that store the memory address of another variable.
=> A pointer is declared using the * operator.
*/

#include <iostream>
using namespace std;

int main(){

    int x = 10;        // Declare an integer variable x and initialize it with the value 10
    int *ptr = &x;     // Declare a pointer variable ptr that stores the address of the variable x

    cout << "Value of x: " << x << endl;         // output: Value of x: 10
    cout << "Value of ptr: " << ptr << endl;     // output: Value of ptr: 0xc7883ff830 (address of x)
    cout << "Value pointed to by ptr: " << *ptr << endl; // output: Value pointed to by ptr: 10 // dereferencing the pointer to get the value of x

    *ptr = 20;         // Change the value of x using the pointer

    cout << "Value of x after change through pointer: " << x << endl; // output: Value of x after change through pointer: 20
    cout << "Value pointed to by ptr after change: " << *ptr << endl; // output: Value pointed to by ptr after change: 20

    return 0;
}