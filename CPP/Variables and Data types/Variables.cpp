/*
#include <iostream>
using namespace std;

int main() {
    // Variable declaration
    int age = 25; // Integer variable
    double height = 5.9; // Double variable
    char grade = 'A'; // Character variable
    bool isStudent = true; // Boolean variable
    const string name = "AASHIK"; // Constant variable

    // Output the values of the variables
    cout << "Age: " << age << endl;  // endl is used to insert a new line after the output 
    cout << "Height: " << height << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is Student: " << isStudent << endl;
    cout << "Name: " << name << endl;

    return 0;
} 
*/

#include <iostream>
using namespace std;

int main() {

    int age;
    cout << "Enter your age: ";
    cin >> age;         // cin is used to take input from the user and >> - extraction operator
    cout << "Your age is: " << age << endl;
}

/*
Rules for creating an identifier in C++:

- Only alphabets , digits and underscore are allowed.
- Case sensitive.
- Cannot start with a digit.
- Cannot use C++ keywords as identifiers.
- Cannot use keywords as identifiers.
- Cannot use space in identifiers. 
*/

/* 
Data types in C++:
- int - Integer data type
- float - Floating point data type
- double - Double precision floating point data type
- char - Character data type
- bool - Boolean data type
- void - Void data type
*/