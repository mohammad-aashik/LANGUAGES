
/*
Abstraction - Hiding implementation details

1. Access Specifiers
2. Abstract Class

Diamond Problem
*/

#include <iostream>
using namespace std;

// Abstract Class:
// A class containing at least one pure virtual function
// is called an Abstract Class.

class Remote {

public:
    virtual void on() = 0;
    // Pure Virtual Function
    // = 0 makes this function pure virtual.
    // We cannot create an object of the Remote class.
};

class SamsungTV : public Remote {

public:
    void on() override {
        // Implementing the pure virtual function
        cout << "Samsung TV is ON" << endl;
    }
};

class LGTV : public Remote {

public:
    void on() override {
        // Implementing the pure virtual function
        cout << "LG TV is ON" << endl;
    }
};

int main() {

    // Remote r;
    // ERROR: Cannot create an object of an Abstract Class.

    SamsungTV s;    // Creating a SamsungTV object
    LGTV l;         // Creating an LGTV object

    s.on();         // Calling SamsungTV's on() function
    l.on();         // Calling LGTV's on() function

    Remote *r; // Abstract class pointer 
    r = &s; // Pointer points to SamsungTV object 
    r->on(); // Calls SamsungTV's on() 
    r = &l; // Pointer points to LGTV object 
    r->on(); // Calls LGTV's on()

    return 0;
}
/*

### Output

```text
Samsung TV is ON
LG TV is ON
Samsung TV is ON
LG TV is ON
```

### Important Notes

1. **Abstraction:** Hiding implementation details and showing essential features.
2. **Abstract Class:** A class that has at least one pure virtual function.
3. **Pure Virtual Function:** A virtual function declared using `= 0`.
4. **Object Creation:** We cannot directly create an object of an abstract class.
5. **Inheritance:** A child class inherits from a parent class.
6. **Override:** A child class provides its own implementation of a virtual function.
7. **Public Inheritance:** `class SamsungTV : public Remote` makes the public members of `Remote` accessible as public members of `SamsungTV`.
*/