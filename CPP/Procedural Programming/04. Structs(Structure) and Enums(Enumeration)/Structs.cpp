/*
 * Structs(Structures) in C++

 => use for defining a user-defined data type that groups related variables of different data types into a single unit.
 */

#include <iostream>
#include <string>
using namespace std;

// Nemed Structs                                          | //
struct Student {      // Define a struct named Student    | struct {
    string name;      // struct members                   |     string name;      // struct members                   |
    int age;          // struct members                   |     int age;          // struct members                   |
    double height;    // struct members                   |     double height;    // struct members                   |
//                                                        | 
} ;   // Declare variables of type Student                | } student1, student2; // Declare variables of type Student   

int main() {

    Student student1, student2; // Declare variables of type Student

    // Assign values to the members of student1
    student1.name = "John Doe";
    student1.age = 30;
    student1.height = 5.9;

    // Assign values to the members of student2
    student2.name = "Jane Smith";
    student2.age = 25;
    student2.height = 5.6;

    //  ------- 0r -------
    //student1 = {"John Doe", 30, 5.9}; // Assign values to the members of student1 using an initializer list    

    //  ------- Or -------
    // Student student1 = {"John Doe", 30, 5.9}; // Assign values to the members of student1 using an initializer list at the time of declaration

    //  ------- Or -------
    // get input from user
    // cout << "Enter name: ";
    // cin >> student1.name;
    // cout << "Enter age: ";
    // cin >> student1.age;
    // cout << "Enter height: ";
    // cin >> student1  .height;

    // Output the values of the members of student1
    cout << "Name: " << student1.name << endl;
    cout << "Age: " << student1.age << endl;
    cout << "Height: " << student1.height << endl;

    // Output the values of the members of student2
    cout << "Name: " << student2.name << endl;
    cout << "Age: " << student2.age << endl;
    cout << "Height: " << student2  .height << endl;

    return 0;
}
