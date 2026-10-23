/*
Dynamic Memory Allocation in C++

=> Dynamic memory allocation allows you to allocate memory at runtime.
=> The new and delete operators are used for dynamic memory allocation in C++.
*/

#include <iostream>
using namespace std;

int main(){

        // int age = 22;      // compile-time memory allocation for an integer variable

        // // runtime memory allocation for an integer variable using new operator
        // int* ptr = new int; // Dynamically allocate memory for an integer and store the address in ptr
        // *ptr = age;         // Assign the value of age to the dynamically allocated memory

        // cout << "Value of age: " << age << endl;        // output: Value of age: 22
        // cout << "Value pointed to by ptr: " << *ptr << endl; // output: Value pointed to by ptr: 22

        // delete ptr;         // Deallocate the dynamically allocated memory
        // ptr = nullptr;      // Set the pointer to nullptr to avoid dangling pointer


        // int arr [5];    // compile-time memory allocation for an array of 5 integers

        // cout << "Enter 5 integers(using ','): ";
        // for (int i = 0; i < 5; i++){
        //     cin >> arr[i]; // input values for the array
        // }
        // cout << "Values in the array: ";
        // for (int i = 0; i < 5; i++){
        //     cout << arr[i] << " ";
        // }
        // cout << endl;

    // runtime memory allocation for  dynamic input array using new operator
    int num;
    cout << "Enter the number of Students: ";
    cin >> num;

    int* students = new int[num]; // Dynamically allocate memory for an array of 'num' integers
    cout << "Enter the Marks of " << num << " Students: ";
    for (int i = 0; i < num; i++){
        cin >> students[i]; // input values for the dynamically allocated array
    }
    for (int i = 0; i < num; i++){
        cout << "Marks of Student " << i + 1 << ": " << students[i] << endl; // output values of the dynamically allocated array
    }   

    delete[] students;  // Deallocate the dynamically allocated memory
    students = nullptr; // Set the pointer to nullptr to avoid dangling pointer

    return 0;
}