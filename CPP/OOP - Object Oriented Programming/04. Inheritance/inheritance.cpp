#include <iostream>
#include <string>
using namespace std;

class Father {
    public:         // if you use protected only access from inheritance class
    int age = 50;
    string name = "Father";

    void displayFather(){
        cout<<name<<" age is "<<age<<endl; 
    }
};

class Mother : public Father{   // single Inheritance 
    public:
    int age = 45;
    string name = "mother";

    void displayMother(){
        cout<<name<<" age is "<<age<<endl;
    }
};

class Child : public Father{       //  Inherit the parents         // if use here private or blank only access from chaild class 
    public:

    void displayChild(){
        cout<<Father::name<<endl;
        // cout<<Mother::name<<endl;
        cout<<"This is Son"<<endl;
    }
};

class GrandChild1 : public Child {
    public:
    void displayGrandChild1(){
        displayFather();
        displayChild();
    }
};

class GrandChild2 : public Child {
    public:
    void displayGrandChild2(){
        displayFather();
        displayChild();
    }
};
int main(){

    // Parent p;
    // p.displayParent();

    // Child s1;
    // s1.displayFather();

    GrandChild1 ch1;
    ch1.displayGrandChild1();

    return 0;
}
/*
inheritance
    - method, attributes can inherite by other class
    - type of inheritance 
        1. single
        2. multiple
        3. multilevel
        4. hierarchical - 1 parent have 2 child 
        5. hybrid  

*/