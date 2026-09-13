// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     // string name;
//     // cout << "Enter your name: ";
//     // cin >> name;
//     // cout << "Hello, " << name << "!" << endl;

//     // int num1, num2;
//     // cout << "Enter two numbers using spaces: ";
//     // cin >> num1 >> num2;
//     // cout << "The sum is: " << num1 + num2 << endl;

//     int n=0;
//     for(int i=0; i<=50; i+=5) {
//         cout << i << " ";
//     }
//     return 0;
// }

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n1, n2,n3;
    cout << " Enter your 3 Numbers (Using space):";
    cin >> n1 >> n2 >> n3;
    cout<<endl;
    cout<< "Your Numbers are : " << n1 <<n2 <<n3<< endl;
    cout<<endl;
    
    cout<<  n1+n2+n3<<endl;
    
    return 0;
}