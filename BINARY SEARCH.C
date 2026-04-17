 Aim:

To implement Binary Search on a sorted array and measure its execution time, where the array is sorted using Quick Sort.

 Algorithm:
🔹 Step 1: Generate Data
Start the program.
Initialize array size n = 10000.
Fill the array with random values.
🔹 Step 2: Quick Sort
Choose the last element as pivot.
Partition the array:
Place smaller elements to the left of pivot.
Place larger elements to the right.
Recursively apply Quick Sort on left and right subarrays.
🔹 Step 3: Binary Search
Input the search key.
Set low = 0, high = n-1.
Repeat until low <= high:
Find mid = (low + high) / 2.
If arr[mid] == key, return index.
If key is smaller, search left half.
Else search right half.
If not found, return -1.
🔹 Step 4: Time Measurement
Record start time using clock().
Perform binary search.
Record end time.
Calculate total time taken.

 Program:
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Swap function
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

// Quick Sort
void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

// Binary Search
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

// Main
int main() {
    int n = 10000;
    int arr[n], key;

    for (int i = 0; i < n; i++)
        arr[i] = rand() % 100000;

    quicksort(arr, 0, n - 1);

    printf("Enter key to search: ");
    scanf("%d", &key);

    clock_t start = clock();

    int result = binarySearch(arr, n, key);

    clock_t end = clock();

    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;

    if (result != -1)
        printf("Key found at index: %d\n", result);
    else
        printf("Key not found\n");

    printf("Time taken for Binary Search: %lf sec\n", time_taken);

    return 0;
}

Output:
Input:
Enter key to search: 500
Output (example):
Key found at index: 4321
Time taken for Binary Search: 0.000001 sec

Result:

The program to perform Binary Search on a sorted array using Quick Sort was successfully executed.

Quick Sort efficiently sorts the array before searching.
Binary Search reduces search time significantly.
Time complexity:
Quick Sort: O(n log n) (average)
Binary Search: O(log n
