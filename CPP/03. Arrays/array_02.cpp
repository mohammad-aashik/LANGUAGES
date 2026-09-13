#include <iostream>
using namespace std;

int main(){

    int arr[5] = {1, 2, 3, 4, 5};     // 1D array declaration and initialization

    int arr2D[2][3] = {             // 2D array or matrix declaration and initialization
        {1, 2, 3},
        {4, 5, 6} 
    };     


    int arr3D[2][2][3] = {             // 3D array declaration and initialization
        { 
            {1, 2, 3},
            {4, 5, 6} 
        }, 
        { 
            {7, 8, 9},
            {10, 11, 12} 
        } 
    };    

    arr[0] = 10;     // Assigning a new value to the first element of the 1D array 'arr'

    cout << "1D Array: " << endl;
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";     // Output the value of each element in the 1D array 'arr'
    }
    cout << endl;

    /*out put: 10 2 3 4 5*/


    cout << "2D Array: " << endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cout << arr2D[i][j] << " ";     // Output the value of each element in the 2D array 'arr2D'
        }
        cout << endl;
    }

    /*out put:
    1 2 3
    4 5 6*/

    cout << "3D Array: " << endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 3; k++){
                cout << arr3D[i][j][k] << " ";     // Output the value of each element in the 3D array 'arr3D'
            }
            cout << endl;
        }
        cout << endl;
    }

    /*out put:
    1   2   3
    4   5   6
    7   8   9
    10 11  12*/


    cout << "Size of 1D Array: " << sizeof(arr) << " bytes" << endl;     // Output the size of the 1D array 'arr' in bytes
    cout << "Size of 2D Array: " << sizeof(arr2D) << " bytes" << endl;     // Output the size of the 2D array 'arr2D' in bytes
    cout << "Size of 3D Array: " << sizeof(arr3D) << " bytes" << endl;     // Output the size of the 3D array 'arr3D' in bytes

    cout << "Size of 1D Array Element: " << sizeof(arr[0]) << " bytes" << endl;     // Output the size of an element in the 1D array 'arr' in bytes
    cout << "Size of 2D Array Element: " << sizeof(arr2D[0][0]) << " bytes" << endl;     // Output the size of an element in the 2D array 'arr2D' in bytes
    cout << "Size of 3D Array Element: " << sizeof(arr3D[0][0][0]) << " bytes" << endl;     // Output the size of an element in the 3D array 'arr3D' in bytes

    cout << "Size of row in 2D Array: " << sizeof(arr2D[0]) << " bytes" << endl;     // Output the size of a row in the 2D array 'arr2D' in bytes
    cout << "Size of row in 3D Array: " << sizeof(arr3D[0]) << " bytes" << endl;     // Output the size of a row in the 3D array 'arr3D' in bytes[]
    // 1D Array:
    // Size of 1D Array: 20 bytes


    //---------------- ROW AND COLUMN CALCULATION ----------------
    // 1. ROW CALCULATION

    int row = sizeof(arr2D) / sizeof(arr2D[0]);     // Calculate the number of rows in the 2D array 'arr2D'

    // sizeof(arr2D) gives the total size of the 2D array in bytes
    //sizeof(arr2D[0]) gives the size of one row in bytes. 
    //Dividing these two values gives the number of rows in the 2D array.

    cout << "Number of Rows in 2D Array: " << row << endl;     // Output the number of rows in the 2D array 'arr2D'


    // 2. COLUMN CALCULATION
    int col = sizeof(arr2D[0]) / sizeof(arr2D[0][0]);     // Calculate the number of columns in the 2D array 'arr2D'    

    // sizeof(arr2D[0]) gives the size of one row in bytes
    // sizeof(arr2D[0][0]) gives the size of one element in bytes
    // Dividing these two values gives the number of columns in the 2D array.

    cout << "Number of Columns in 2D Array: " << col << endl;     // Output the number of columns in the 2D array 'arr2D'
    
    return 0;
}