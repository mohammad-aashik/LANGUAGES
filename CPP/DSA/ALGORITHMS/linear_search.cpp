
#include <iostream>
using namespace std;

// Linear Search Function
int linearSearch(int arr[], int N, int key) {
    for (int i = 0; i < N; i++) {
        if (arr[i] == key) {
            return i;
        }
    }

    return -1;
}

int main() {
    int N, key;

    cout << "Enter array size: ";
    cin >> N;

    if (N <= 0 || N > 1000) {
        cout << "Invalid array size!" << endl;
        return 0;
    }

    int arr[1000];

    cout << "Enter " << N << " elements: ";

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    // Call Linear Search function
    int position = linearSearch(arr, N, key);

    if (position != -1) {
        cout << "Element found at index: " << position << endl;
        cout << "Position: " << position + 1 << endl;
    } else {
        cout << "Element not found!" << endl;
    }

    return 0;
}
