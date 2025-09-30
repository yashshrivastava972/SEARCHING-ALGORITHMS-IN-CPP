# Aim: To Study & Implement Searching Algorithms.

# Tool: VS CODE.

# Theory: 

1. Linear Search

Definition:
Linear search, also called sequential search, is a simple method of searching for a specific element in a list or array by checking each element one by one from the beginning until the desired element is found or the end of the list is reached.

Characteristics:

Works on both sorted and unsorted arrays.

Best Case: Element is at the first position → O(1)

Worst Case: Element is at the last position or not present → O(n)

Average Case: O(n/2)

Space Complexity: O(1)

Applications:
Used in small datasets, simple lists, or when the dataset is unsorted.

2. Sequential Search

Definition:
Sequential search is essentially the same as linear search, emphasizing the step-by-step traversal of elements in a sequence. Each element is compared with the search key until a match is found.

Characteristics:

Can be applied to both sorted and unsorted arrays.

Time Complexity:

Best Case: O(1)

Worst Case: O(n)

Space Complexity: O(1)

Applications:
Useful for small arrays, unsorted lists, or when simplicity is preferred over performance.

3. Binary Search

Definition:
Binary search is an efficient search algorithm that works only on sorted arrays. It divides the search space in half repeatedly, comparing the middle element with the search key, until the element is found or the subarray becomes empty.

Characteristics:

Requires sorted data.

Time Complexity:

Best Case: O(1) → element is at the middle

Worst Case: O(log n) → element is found after multiple divisions

Space Complexity:

Iterative: O(1)

Recursive: O(log n)

Much faster than linear/sequential search for large datasets.

Applications:
Used in databases, dictionaries, and applications where fast search is needed on large sorted datasets.

# Algorithms :

## Algorithm for Linear Search
1. Start

Begin the program execution.

2. Input

Read the number of elements n in the array.

Read the n elements and store them in arr[].

Read the element key to be searched.

3. Search Operation

Loop through the array from index 0 to n-1.

For each element arr[i]:

If arr[i] == key, element found: return index i.

If the loop ends without finding the element, element not found: return -1.

4. Output

If the returned index is not -1, display:
"Element found at index <index>"

Otherwise, display:
"Element not found in the array."

5. End

Terminate the program.

## Algorithm for Sequential Search
1. Start

Begin program execution.

2. Input

Read the number of elements n in the array.

Read the n elements and store them in the array arr[].

Read the element key to be searched.

3. Search Operation

Loop through the array from index 0 to n-1.

For each element arr[i]:

Compare arr[i] with key.

If arr[i] == key, element found: return index i.

If the loop ends without finding the element, element not found: return -1.

4. Output

If returned index is not -1, display:
"Element found at index <index>"

Otherwise, display:
"Element not found in the array."

5. End

Terminate the program.

## Algorithm for Binary Search
1. Start

Begin program execution.

2. Input

Read the number of elements n in the array.

Read n elements in sorted order and store them in arr[].

Read the element key to be searched.

3. Initialize Pointers

Set low = 0 (start of array).

Set high = n - 1 (end of array).

4. Search Operation

While low <= high:
a. Calculate middle index: mid = low + (high - low) / 2
b. Compare arr[mid] with key:

If arr[mid] == key, element found → return mid

If arr[mid] < key, search in right half → set low = mid + 1

If arr[mid] > key, search in left half → set high = mid - 1

If low > high, element not found → return -1

5. Output

If returned index is not -1, display:
"Element found at index <index>"

Otherwise, display:
"Element not found in the array."

6. End

Terminate the program.

# Conclusion:

Linear Search:

Linear search checks each element in the array one by one until the desired element is found or the array ends.

Simple to implement and works on both sorted and unsorted arrays.

Suitable for small datasets due to its O(n) time complexity.

Sequential Search:

Sequential search is essentially the same as linear search, emphasizing step-by-step traversal.

Works for unsorted arrays as well.

Best used for small datasets or when simplicity is preferred over efficiency.

Binary Search:

Binary search is an efficient searching algorithm that works only on sorted arrays.

