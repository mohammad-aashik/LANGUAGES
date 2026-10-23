/*
Function in C++

=> A function is a block of code that performs a specific task.
=> Functions are used to break down a program into smaller and manageable parts.
=> Functions can take input parameters and return output values.
=> The syntax for defining a function is as follows:
=> return_type function_name(parameter_list) {
        // function body
}
Function
        - input , output
        - reusability
Declaration of function
        - return_type function_name(parameter_list);

Definition of function
        - return_type function_name(parameter_list) {
                // function body
        }
Calling of function
        - function_name(argument_list);
*/

#include <iostream>
using namespace std;

void after_ten(int num) {           // void means no return value  // function definition  // num - parameter
    int result = num + 10;            // local variable
    cout << "The number after adding 10 is: " << result << endl;
} 

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    after_ten(number);      // calling the function     // number - argument

    return 0;
}

// ------------------ or ----------------------

/*
#include <iostream>
using namespace std;

void after_ten(int num);           // function declaration

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    after_ten(number);      // calling the function

    return 0;
}

void after_ten(int num) {           // void means no return value 
    int result = num + 10;            // local variable
    cout << "The number after adding 10 is: " << result << endl;
}

*/