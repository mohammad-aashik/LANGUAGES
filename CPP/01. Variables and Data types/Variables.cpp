
#include <iostream>
#include <string>                // we use string on our code always in cloud the string header file
using namespace std;

/*
int main() {
    // Variable declaration
    */
    int age = 25;                   // Integer variable         // Declaration and Initialization 
    double height = 5.9;            // Double variable
    char grade = 'A';               // Character variable
    bool isStudent = true;          // Boolean variable
    const string name = "AASHIK";   // Constant variable
    float gpa = 3.72; 
/*
    // Output the values of the variables
    cout << "Age: " << age << endl;         // endl is used to insert a new line after the output 
    cout << "Height: " << height << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is Student: " << isStudent << endl;
    cout << "Name: " << name << endl;

    return 0;
} 
*/


int main() {

    /*
    int age;                    // Declaration
    cout << "Enter your age: ";
    cin >> age;                 // cin is used to take input from the user and >> - extraction operator
    cout << "Your age is: " << age << endl;

    char letter = 95;       // ascii format also work

    cout << "Letter: " << letter << endl;

    cout << "Size of Age " <<sizeof(age) << " Bytes"<< endl;
    cout << "Size of Height " <<sizeof(height) << " Bytes"<< endl;
    cout << "Size of GPA " <<sizeof(gpa) << " Bytes"<< endl;
    cout << "Size of Bool " <<sizeof(isStudent) << " Bytes"<< endl;
    cout << "Size of Grade " <<sizeof(grade) << " Bytes"<< endl;
*/


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
- string - string data type
*/


/*
Logical Operators

&& - Logical AND
|| - Logical OR
! - Logical NOT 

*/

//          ------- STRING -------
/*
string first_name = "Mohammad";
string last_name = "Aashik";

cout<< first_name+" "+last_name << endl; // string concatination
cout<< first_name.append(last_name) << endl;

cout<< first_name.length() << endl; // 14
cout<< first_name.size() << endl;
cout<< first_name[10] << endl; //
cout<< first_name[13] << endl;             // cout<< first_name.at(13) << endl;
cout<< first_name[4] << endl;
cout<< first_name.at(13) << endl;

cout<< first_name << endl;      // MohammadAashik
first_name[13] = 'f';
cout<< first_name << endl;      // MohammadAashif
*/

string name;
cout<< "Enter your Name : ";        // M.S.M. Aashik
cin>> name;                                             // M.S.M.       ==> reson is cin cosider two word as a 2 input
getline(cin, name);                                     // M.S.M. Aashik
cout<< "Your Name is : "<<name;


return 0;

}