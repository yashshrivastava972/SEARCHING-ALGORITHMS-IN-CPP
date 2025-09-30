// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: SEARCHING ALGORITHMS - SEQUENTIAL (EXPERIMENT: 20B)

// CODE: 

#include <iostream>
using namespace std;

int sequentialSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // Element found, return index
        }
    }
    return -1; // Element not found
}

int main() {
    int n, key;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    int result = sequentialSearch(arr, n, key);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found in the array." << endl;

    return 0;
}

// OUTPUT:

/// Enter number of elements: 5 
// Enter 5 elements: 5 4 3 2 1
// Enter element to search: 4
// Element found at index 1
