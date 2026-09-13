/*
 * References in C++
 *
 * => A reference is an alias for an existing variable.
 * => Once a reference is initialized with a variable, both the reference and the variable refer to the same memory location.
 */

#include <iostream>
using namespace std;

int main(){

    int x = 10;        

    int &ref = x;       // Declare a reference variable ref that refers to the variable x
    int copyx = x;      // Declare a copy of the variable x

    //int x = 20;        // Change the value of x

    cout << "Value of x: " << x << endl;         // output: Value of x: 20
    cout << "Value of ref: " << ref << endl;     // output: Value of ref: 20
    cout << "Value of copyx: " << copyx << endl; // output: Value of copyx: 10

    // Explanation:
    // When we change the value of x to 20, the reference variable ref also reflects the change because it refers to the same memory location as x. 
    //However, the copyx variable remains unchanged because it is a separate copy of the value of x at the time of its initialization.
    
    cout << "Address of x: " << &x << endl;        // output: Address of x: 0xc7883ff830
    cout << "Address of ref: " << &ref << endl;    // output: Address of ref: 0xc7883ff830

    // & is give the address of the variable, 
    // and since ref is a reference to x, 
    //  both &x and &ref will give the same address.
    return 0;
}