/*
=> Use of Default Arguments in C++
=> Default arguments allow you to specify default values for function parameters.
=> If a function is called without providing values for those parameters, the default values will be used.
=> Default arguments are specified in the function declaration or definition.

=> Use default argument value as a last parameter in the function declaration or definition.

*/
// #include <iostream>
// using namespace std;

// int add(int a, int b = 5) {
//     return a + b;
// }

// int main() {
//     cout << add(10) << endl;     // Uses default value for b
//     cout << add(10, 20) << endl; // Uses provided value for b
//     return 0;
// }

// ------------------ Call by Value and Call by Reference ----------------------

// #include <iostream>
// using namespace std;

// void add( int &num){            // call by reference using (&)

//     num += 10; // num = num + 10  
    
//     cout << "The number after adding 10 is: " << num << endl;
    
// }

// int main() {
//     int num = 6; 
//     add(num); // calling the function

//     cout << "The original number is: " << num << endl; // The original number remains unchanged

//     return 0;
// }

// Arrays in Functions

#include <iostream>
using namespace std;

void ArrayFunction(int arr[]) {
    
    arr[0] = 10; // Modifying the first element of the array
    arr[1] = 20; // Modifying the second element of the array
}

int main() {
    int myArray[5] = {1, 2, 3, 4, 5};

    cout << "Before calling the function: ";
    for (int i = 0; i < 5; i++) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    ArrayFunction(myArray); // Passing the array to the function

    cout << "After calling the function: ";
    for (int i = 0; i < 5; i++) {
        cout << myArray[i] << " "; // The original array is modified
    }
    cout << endl;

    return 0;
}