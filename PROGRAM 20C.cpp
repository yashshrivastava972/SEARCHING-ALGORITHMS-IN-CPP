// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: SEARCHING ALGORITHMS - BINARY (EXPERIMENT: 20C)

// CODE: 

#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            return mid; // Element found
        } else if (arr[mid] < key) {
            low = mid + 1; // Search in right half
        } else {
            high = mid - 1; // Search in left half
        }
    }
    return -1; // Element not found
}

int main() {
    int n, key;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements in sorted order: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    int result = binarySearch(arr, n, key);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found in the array." << endl;

    return 0;
}

// OUTPUT:

// Enter number of elements: 6
// Enter 6 elements in sorted order: 10 20 30 40 50 60
// Enter element to search: 10
// Element found at index 0

// Enter number of elements: 2
// Enter 2 elements in sorted order: 10 20 
// Enter element to search: 30
// Element not found in the array.



