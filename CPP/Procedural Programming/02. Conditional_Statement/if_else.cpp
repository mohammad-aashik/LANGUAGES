#include <iostream>
using namespace std;

int main(){

    int age = 0;
    cout<< "Enter Your Age: ";
    cin>> age;

    // if(age < 18)
    // {
    //     cout<< "Your are a Child"<<endl;
    // }

    // else if(age > 65){
    //     cout<< "Your are a Senior Citizen"<<endl;
    // }
    // else
    // {
    //     cout<< "Your are a Adult"<<endl;
    // }

    //              ---------------------- OR ----------------------

    (age>=18) ? cout<< "Your are a Adult" : cout<< "Your are a Child";

    return 0;
}

//              ---------------------- OR ----------------------