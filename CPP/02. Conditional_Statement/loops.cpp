#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //             -------------- WHILE LOOP --------------

    //int n = 10;     // bounary - coint
    //int i = 1;      // iterator - initialize

    // while (n>=i)
    // {
    //     /* code */
    //     cout<< i <<endl;
    //     i++;        //update
    // }
    


    //             -------------- DO WHILE LOOP --------------

    // do {
    //     /* code */
    //     cout<< i <<endl;
    //     i++;
    // } while (n>=i);


    //              -------------- FOR LOOP --------------


    // for(int i =0; i<= n; i++){
    //     cout<<i<<endl;
    // }


    //              -------------- NESTED LOOPS --------------

    // int n = 6;

    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= i; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // cout<<endl;


    // for(int i = 1; i <= n; i++){
    //     for(int j = n; j >= i; j--){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // cout<<endl;

    // for(int i = 1; i <= n; i++){
    //     for(int j = n-1; j >= i; j--){
    //          cout<<" ";
    //     }
    //     for(int k = 1; k <= i; k++){
    //         cout<<" *";
    //     }
        
    //     cout<<endl;
    // }


    int n1 = 5, n2 = 8;

    cout<< max(n1, n2) <<endl;
    cout<< min(n1, n2) <<endl;
    cout<< sqrt(n1) <<endl;
    cout<< round(3.5) <<endl;
    cout<< ceil(3.5) <<endl;       // ceil - round up
    cout<< floor(3.5) <<endl;       // floor - round down

    cout<< pow(2, 3) <<endl;       // pow - power
    cout<< abs(-5) <<endl;         // abs - absolute value

    cout<< log(2) <<endl;         // log - natural logarithm
    cout<< log10(100) <<endl;     // log10 - logarithm base 10
    cout<< exp(2) <<endl;         // exp - exponential function
    cout<< sin(30) <<endl;         // sin - sine function
    cout<< cos(30) <<endl;         // cos - cosine function
    cout<< tan(30) <<endl;         // tan - tangent function
    cout<< asin(0.5) <<endl;       // asin - arcsine function
    cout<< acos(0.5) <<endl;       // acos - arccosine function
return 0;
}

/*
while loop - Entry Control Loop
do while loop - Exit control Loop
*/

