#include <iostream>
#include <string>
using namespace std;


class Student{
    public:
    string name;
    int index;

    public:
    Student(string name, int index){
        this -> name = name;
        this -> index = index;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Reg No: "<<index<<endl;
    }
};

int main(){
    Student s1("Aashik",6006);
    s1.display();
    cout<<s1.name<<endl;    // if name is in private we cann't access at external function 

    return 0;
}

/*
Encapsulation
    -data/attributes & function/metod -> Singke entity -> class
    -restrict access of object - attributes
*/

