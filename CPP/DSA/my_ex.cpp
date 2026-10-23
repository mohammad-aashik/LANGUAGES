#include <iostream>
using namespace std;

int main(){
    int arr[5]={4,2,1,3,5};

    arr[0]=12;
    cout<<arr[0]<<endl; // output: 12

    cout<<*arr<<endl;   // output: 12

    cout<<*(arr+1)<<endl; // output: 2

    cout<<*(arr+2)<<endl; // output: 1

    arr[4] = 100;
    cout<<arr[4]<<endl;

    // arr[10000]=300;
    cout<<arr[10]<<endl;

    int* p = new int[5]; // pointer to the first element of the array
    *p = 25;
    p[1] = 30;
    p[2] = 35;
    p[3] = 40;
    p[4] = 45;

    cout<<*p<<endl; // output: 25
    cout<<p[1]<<endl; // output: 30
    cout<<p[2]<<endl; // output: 35
    cout<<p[3]<<endl; // output: 40
    cout<<p[4]<<endl; // output: 45
    delete[] p; // free the memory allocated for the array
    p = nullptr; // set the pointer to nullptr to avoid dangling pointer

    cout<<p[1]<<endl; // output: garbage value
    cout<<p[2]<<endl; // output: garbage value
    return 0;
}