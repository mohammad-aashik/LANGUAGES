#include <iostream>
using namespace std;

int main(){
    int *arr=new int[5]{4,2,1,3,5};

    cout<<arr[6]<<endl; // output: garbage value

    int* temp = new int[10]; // creating a new array of size 10
    for(int i=0;i<5; i++){
        temp[i] = arr[i]; // copying the values of the old array to the new array
        cout<<temp[i]<<endl;
    }
    cout<<endl;

    delete[] arr; // deleting the old array

    arr =  temp; // pointing the old array to the new array

    arr[5] = 6; // adding a new value to the new array
    arr[6] = 7; // adding a new value to the new array
    arr[7] = 8; // adding a new value to the new array

    for(int i=0; i<10; i++){
        cout<<arr[i]<<endl; // output: 4 2 1 3 5 6 7 8 garbage garbage
    }   
    delete[] arr; // deleting the new array

// 2D array - normal array declaration
    int arr2D[2][3];

    // arr2D[0][0] = 1;
    // arr2D[0][1] = 2;
    // arr2D[0][2] = 3;
    // arr2D[1][0] = 4;
    // arr2D[1][1] = 5;
    // arr2D[1][2] = 6;

    // ------------ or -------------

    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cin>>arr2D[i][j]; // taking input from the user for the 2D array
        }
        cout<<endl;
    }

    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cout<<arr2D[i][j]<<" "; // output: 1 2 3 4 5 6
        }
        cout<<endl;
    }

// 2D array - dynamic array declaration
    int **arr2D_dynamic = new int*[2]; // creating a 2D dynamic array of size 2
    for(int i=0; i<2; i++){
        arr2D_dynamic[i] = new int[3]; // creating a 1D dynamic array of size 3 for each row
    }

    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cin>>arr2D_dynamic[i][j]; // taking input from the user for the 2D dynamic array
        }
        cout<<endl;
    }

    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cout<<arr2D_dynamic[i][j]<<" "; // output: 1 2 3 4 5 6
        }
        cout<<endl;
    }

    // Deleting the dynamic 2D array
    for(int i=0; i<2; i++){
        delete[] arr2D_dynamic[i]; // deleting the 1D dynamic array for each row
    }
    delete[] arr2D_dynamic; // deleting the 2D dynamic array

    return 0;
}