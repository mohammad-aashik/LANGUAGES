#include <iostream>
using namespace std;

int main(){
    int age = 0;
    cout<< "Enter Your Age: ";
    cin>> age;

    if(age >= 18)
    {
        cout<< "Your are a Adult"<<endl;
    }

    else
    {
        cout<< "Your are a not Adult"<<endl;
    }

    return 0;
}