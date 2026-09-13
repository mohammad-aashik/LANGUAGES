/*
 * Enums (Enumerations) in C++

 => use for defining a constants with a name and a value. 
 => It is a user-defined data type that consists of a set of named integral constants. 
 => Enums are used to represent a collection of related values in a more readable and maintainable way.
 */

#include <iostream>
using namespace std;

// Define an enum named Day with the days of the week as its members
enum Day {
    MONDAY,         // member with value 0
    TUESDAY,        // member with value 1
    WEDNESDAY,      // member with value 2
    THURSDAY,       // member with value 3
    FRIDAY,         // member with value 4
    SATURDAY,       // member with value 5
    SUNDAY          // member with value 6
};

int main() {

    // Declare variables of type Day
    Day today = WEDNESDAY; // Assign a value to the variable today
    Day tomorrow = THURSDAY; // Assign a value to the variable tomorrow

    // Output the value of today
    cout << "Today is: " << today << endl;  // output gives value of the enum member, which is 2 for WEDNESDAY

    // Output the value of tomorrow
    cout << "Tomorrow is: " << tomorrow << endl;  // output gives value of the enum member, which is 3 for THURSDAY


    if(today == Day::WEDNESDAY) {
        cout << "It's the middle of the week!" << endl;
    }

    else if(today == Day::FRIDAY) {
        cout << "It's almost the weekend!" << endl;
    }

    else if(today == Day::SUNDAY) {
        cout << "It's the end of the week!" << endl;
    }

    else {
        cout << "It's a regular day." << endl;
    }

    // use :: to access the enum members
    return 0;
}
