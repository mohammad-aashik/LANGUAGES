#include <iostream>
#include <string>
using namespace std;


class Car{
    public:
        string Brand;
        int Engine;

        Car(string b, int e){
            Brand = b;
            Engine = e;
            cout<<"Constructors for car"<<endl;
        }

        ~Car(){
            cout<<"Destructors"<<endl;
        }

};

int main(){

    Car swift("BMW",1200);      // object 
    

    cout<<swift.Brand<<endl;




    return 0;
}

/*
Constructors
    - spl function
    - called when object created
    - name is sma as class 
    - no return type

Destructors
    - spl function
    - called object out of scope
    - ~Car
*/