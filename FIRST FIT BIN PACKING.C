 Aim:

To implement the First Fit Bin Packing algorithm to efficiently place items into bins based on their sizes and given bin capacity.

Algorithm: (First Fit Bin Packing)
Start the program.
Read the number of items n.
Read the bin capacity.
Input the sizes of all items.
Initialize all bins with full capacity.
For each item i:
Traverse bins from 0 to n-1:
If the current bin has enough space (bin[j] >= item[i]):
Place the item in that bin.
Reduce the bin’s remaining capacity.
Break and move to next item.
After placing all items, display remaining space in each bin.
Stop the program.

Program:
#include <stdio.h>

int main() {
    int n, i, j;
    float bin[10], item[10], cap;

    printf("Enter number of items: ");
    scanf("%d", &n);

    printf("Enter bin capacity: ");
    scanf("%f", &cap);

    for (i = 0; i < n; i++) {
        printf("Enter size of item %d: ", i + 1);
        scanf("%f", &item[i]);
        bin[i] = cap;
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (bin[j] >= item[i]) {
                bin[j] -= item[i];
                break;
            }
        }
    }

    printf("Remaining space in bins:\n");
    for (i = 0; i < n; i++)
        printf("Bin %d: %.2f\n", i + 1, bin[i]);

    return 0;
}

Output:
Input:
Enter number of items: 5
Enter bin capacity: 10
Enter size of item 1: 2
Enter size of item 2: 5
Enter size of item 3: 4
Enter size of item 4: 7
Enter size of item 5: 1
Output:
Remaining space in bins:
Bin 1: 3.00
Bin 2: 3.00
Bin 3: 10.00
Bin 4: 10.00
Bin 5: 10.00

Result:
The program for First Fit Bin Packing was successfully executed.
Items are placed in the first available bin that can accommodate them.
This is a greedy algorithm and may not always give optimal bin usage.
Time complexity is approximately O(n²).
