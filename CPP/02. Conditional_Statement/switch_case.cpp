#include <iostream>
using namespace std;

int main(){

    int day = 0;
    cout<< "Enter Your Day Number(1-7): ";
    cin >> day;

    if (day<=0 || day>7){
        cout<< "Please enter your number brtween 1-7"<<endl;
        cout<<endl;
        cout<< "Enter Your Day Number(1-7): ";
        cin >> day;
    }

    switch (day)
    {
    case 1:
        /* code */
        cout<< "The Number of Day is Sunday"<<endl;
        break;

    case 2:
        /* code */
        cout<< "The Number of Day is Monday"<<endl;
        break;
    
    case 3:
        /* code */
        cout<< "The Number of Day is Tuesday"<<endl;
        break;

    case 4:
        /* code */
        cout<< "The Number of Day is Wednesday"<<endl;
        break;

    case 5:
        /* code */
        cout<< "The Number of Day is Thursday"<<endl;
        break;

    case 6:
        /* code */
        cout<< "The Number of Day is Friday"<<endl;
        break;

    case 7:
        /* code */
        cout<< "The Number of Day is Saturday"<<endl;
        break; 
           
    default:
        cout<< "Invalid Day"<<endl;
        break;
    }

    return 0;
}    