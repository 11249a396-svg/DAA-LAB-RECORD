 Aim:

To implement Randomized Quick Sort to sort a list of elements efficiently by selecting a random pivot.

Algorithm (Randomized Quick Sort):
Start the program.
Read the number of elements n.
Input the elements into an array.
🔹 Randomized Partition
Select a random index between low and high.
Swap the random element with the last element (pivot).
Perform normal partition:
Place elements smaller than pivot to the left.
Place elements greater than pivot to the right.
🔹 Quick Sort
Recursively apply quicksort on:
Left subarray (low to pi-1)
Right subarray (pi+1 to high)
Display the sorted array.
Stop the program.

 Program:
#include <stdio.h>
#include <stdlib.h>

// Partition function
int partition(int a[], int low, int high) {
    int pivot = a[high], i = low - 1, j, temp;

    for (j = low; j < high; j++) {
        if (a[j] <= pivot) {
            i++;
            temp = a[i]; a[i] = a[j]; a[j] = temp;
        }
    }

    temp = a[i + 1]; 
    a[i + 1] = a[high]; 
    a[high] = temp;

    return i + 1;
}

// Randomized partition
int random_partition(int a[], int low, int high) {
    int r = low + rand() % (high - low + 1);

    int temp = a[r]; 
    a[r] = a[high]; 
    a[high] = temp;

    return partition(a, low, high);
}

// Quick sort
void quicksort(int a[], int low, int high) {
    if (low < high) {
        int pi = random_partition(a, low, high);

        quicksort(a, low, pi - 1);
        quicksort(a, pi + 1, high);
    }
}

// Main function
int main() {
    int n, i;
    int a[20];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    quicksort(a, 0, n - 1);

    printf("Sorted array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}

Output:
Input:
Enter number of elements: 5
Enter elements:
9 3 7 1 5
Output:
Sorted array:
1 3 5 7 9

Result:
The program for Randomized Quick Sort was successfully executed.
 The algorithm sorts elements using a random pivot selection.
 It reduces the chances of worst-case performance.
 Average time complexity is O(n log n).
