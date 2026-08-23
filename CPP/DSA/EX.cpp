#include <iostream>
using namespace std;


int main() {

    int a = 5;                                                    // Declare an integer variable 'a' and initialize it with the value 10
    cout << "The value of a is: " << a << endl;                   // Output the value of 'a' to the console

    int* p = &a;                                                  // Declare a pointer 'p' and initialize it with the address of 'a'
    cout << "The address of a is: " << p << endl;                 // Output the address of 'a' to the console
    cout << "The value pointed to by p is: " << *p << endl;       // Output the value pointed to by 'p' to the console

    cout << "Size of p is: " << sizeof(p) << " bytes" << endl;    // Output the size of the pointer 'p' in bytes

    cout << "Size of a is: " << sizeof(a) << " bytes" << endl;    // Output the size of the variable 'a' in bytes

    // print value of the memory cells where the pointer is pointing to
    cout << "Value of the memory cell where p is pointing: " << *p << endl;  // Output the value of the memory cell where 'p' is pointing to

    // print the address of the memory cells where the pointer is pointing to
    cout << "Address of the memory cell where p is pointing: " << p << endl;  // Output the address of the memory cell where 'p' is pointing to

    // change the value of the memory cell where the pointer is pointing to
    *p = 6;                                                      // Change the value of the memory cell where 'p' is pointing to
    cout << "The value of a after changing the value of the memory cell where p is pointing: " << a << endl;  // Output the new value of 'a' after changing the value of the memory cell where 'p' is pointing to   

    // print the address of the pointer variable itself
    cout << "Address of the pointer variable p is: " << &p << endl;   

    return 0;
}