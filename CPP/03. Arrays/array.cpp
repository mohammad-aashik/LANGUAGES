#include <iostream>
#include <string>
using namespace std;

int main(){

    /*
    Arrays - to store multiple values of same data type in a single variable.
    */

    // data type arrayName [size] = {value1, value2, value3, ..., valueN};

    string names [5] = {"Alice", "Bob", "Charlie", "David", "Eve"};     //Declaretion and initialization
    int ages [5];       // Declaretion
    int marks [] = {90, 85, 95, 80, 75};     // Initialization without size
    int scores [5] = { };     // Initialization with empty values
    int heights [5] = {150, 160, 170};     // Initialization with some values
    int weights [5] = {0};     // Initialization with zero values
    // int grades [];   // error


    cout << "Address of names: " << &names <<endl;               // Output the address of the first element of the array 'names'   output: 0x8c7c7ff700

    //               ---------  or ---------
    
    cout << "Name of First element: " << names[0] <<endl;            // Output the first element of the array 'names'   output: Alice 
    cout << "Address of First element: " << &names[0] <<endl;          // Output the address of the first element of the array 'names'   output: 0x8c7c7ff700

    //02nd element
    cout << "Name of Second element: " << names[1] <<endl;            // Output the second element of the array 'names'   output: Bob
    cout << "Address of Second element: " << &names[1] <<endl;          // Output the address of the second element of the array 'names'   output: 0xfccb3ff7d0


    for (int i = 0; i < 5; i++){

        cout << "Element " << i << ": " << names[i] << " | ";     // Output the value of each element in the array 'names'
    }
    cout << endl;

    //               ---------  or ---------

    for(string i : names){                  // Range-based for loop to iterate through the array 'names'
        cout << "Name: " << i << " | ";     // Output the value of each element in the array 'names'
    }
    cout << endl;

    return 0;
}