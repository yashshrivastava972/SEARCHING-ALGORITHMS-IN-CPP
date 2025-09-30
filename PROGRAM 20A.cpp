// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: SEARCHING ALGORITHMS - LINEAR (EXPERIMENT: 20A)

// CODE: 

#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // Element found, return index
        }
    }
    return -1; // Element not found
}

int main() {
    int n, key;
    
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter element to search: ";
    cin >> key;
    
    int result = linearSearch(arr, n, key);
    
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found in the array." << endl;
    
    return 0;
}

// OUTPUT:

// Enter the number of elements: 5
// Enter 5 elements: 1 2 3 4 5 
// Enter element to search: 2
// Element found at index 1
