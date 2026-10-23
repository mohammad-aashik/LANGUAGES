#include <iostream>
using namespace std;

int binarySearch(int arr[], int N, int key) {
    int low = 0;
    int high = N - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            return mid;
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return -1;


}

int main() {
    int N, key;
    int arr[1000];

    cout << "Enter array size: ";
    cin >> N;

    if (N <= 0 || N > 1000) {
        cout << "Invalid array size!" << endl;
        return 0;
    }

    cout << "Enter sorted array elements: ";

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    int position = binarySearch(arr, N, key);

    if (position != -1) {
        cout << "Element found at index: " << position << endl;
        cout << "Position: " << position + 1 << endl;
    }
    else {
        cout << "Element not found!" << endl;
    }

    return 0;

    }
