/*
Abstraction - hide unwanted 
    1. Access Specifiers
    2. Abstract class

    Diamond Problem
*/

// 1. Access Specifiers

#include <iostream>
using namespace std;

class Remote{
    private:
    void TurnOn(){
        cout<<"Turning On"<<endl;
    }

    public:
    void on(){
        TurnOn();
        cout<<"Remote On"<<endl;
    }
};

int main(){
    Remote r;
    r.on();

    return 0;
}



