#include <iostream>
using namespace std;

// int sum(int n){

//     if(n == 0){
//         return 0;
//     }
//     else{
//         return n + sum(n - 1);
//     }
// }

// int main(){

//     int n;

//     cout << "Enter a number: ";
//     cin >> n;

//     int result = sum(n);

//     cout << "Sum of "
//          << n << " to 0 is: "
//          << result << endl;

//     return 0;
// }

int fact(int n){

    if(n == 0 || n == 1){
        return 1;
    }
    else{
        return n * fact(n - 1);
    }
}

int main(){

    int n; 
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Factorial is not defined for negative numbers."
        << endl;
    }

    else{

        int result = fact(n);

        cout << "factorial of "
        << n << " is: "
        << result << endl;
    }

    return 0;
}
