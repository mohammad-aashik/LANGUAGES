
/*
2. Runtime Polymorphism

Program runs when the appropriate overridden function
is selected at runtime.

Function Overriding with Virtual Functions
*/

#include <iostream>
using namespace std;

class Animal {
public:

    virtual void sound() {
        // Virtual function in the parent class.
        // virtual enables runtime polymorphism when called
        // through a base-class pointer or reference.
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:

    void sound() override {
        // Overrides the parent's sound() function.
        // override is optional, but helps the compiler
        // detect incorrect overriding.
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:

    void sound() override {
        // Overrides the parent's sound() function.
        cout << "Cat meows" << endl;
    }
};

int main() {

    Dog d;
    Cat c;

    Animal *ptr;  // Parent class pointer

    ptr = &d;     // Pointer refers to the Dog object
    ptr->sound(); // Calls Dog's sound() because sound() is virtual

    ptr = &c;     // Pointer refers to the Cat object
    ptr->sound(); // Calls Cat's sound() because sound() is virtual

    return 0;
}

/*
### Output

```text
Dog barks
Cat meows
```
*/