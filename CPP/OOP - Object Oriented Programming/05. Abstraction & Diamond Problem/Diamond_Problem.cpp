
#include <iostream>
using namespace std;

class A {
public:
    int x = 10;  // Public member variable

    void show() {
        cout << "show" << endl;  // Display message
    }
};

class B : virtual public A {
    // B inherits A using virtual inheritance
    // Helps prevent duplicate A subobjects in D
};

class C : virtual public A {
    // C also inherits A using virtual inheritance
    // Both B and C share the same A subobject in D
};

class D : public B, public C {
    // Multiple inheritance: D inherits B and C
    // Virtual inheritance prevents the diamond duplication of A
};

int main() {
    D obj;  // Create an object of class D

    cout << obj.x << endl;
    // Access x inherited from A
    // No ambiguity because A is a virtual base class

    obj.show();  // Call the show() function inherited from A

    return 0;
}

/*
### Output

```text
10
show
```

### Important Notes

* **Diamond Problem:** Multiple inheritance can cause ambiguity when a class inherits the same base class through two different paths.
* **Virtual Inheritance:** `virtual public A` ensures that the most-derived object contains only one shared `A` base-class subobject.
* **Member Variable:** `x` is declared outside `show()`, so it can be accessed as `obj.x`.
* **Member Function:** `show()` can be called using `obj.show()`.

```

**Exam-க்கு நினைவில் வைத்துக்கொள்:** `virtual public A` என்பது Diamond Problem-ல் duplicate base-class subobjects ஏற்படுவதைத் தவிர்க்க உதவும்.
```
*/