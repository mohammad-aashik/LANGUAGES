#include <iostream>
#include <string>

using namespace std;

class student{
    public:     // access specifier
        int index_no;
        string name;
        void display(); // function declaration

};

void student::display(){
    cout<<"Name: "<<name<<endl;
}


int main(){

    student s1;         // Object 01
    s1.index_no = 6006;
    s1.name = "Aashik";

    student s2;         // Object 02
    s2.index_no = 6024;
    s2.name = "Ahamed";
    cout << "------------- Student Detailes -------------"<<endl;
    cout<<endl;

    cout << "Student 01 Name : " << s1.name <<endl;
    cout << "Student 01 Index: " << s1.index_no <<endl;
    cout<<endl;
    cout << "Student 02 Name : " << s2.name <<endl;
    cout << "Student 02 Index: " << s2.index_no <<endl;
    return 0;
}