 Aim:
To generate all permutations of a given set of elements using recursion.

Algorithm (Permutation using Recursion):
Start the program.
Read the number of elements n.
Input the elements into an array.
Define a recursive function perm(arr, start, stop):
If start == stop:
Print the current arrangement (one permutation).
Else:
For each index i from start to stop-1:
Swap arr[start] and arr[i].
Call perm(arr, start+1, stop).
Swap back (backtracking).
Call the function with start = 0.
Print all permutations.
Stop the program.

 Program:
#include <stdio.h>

void perm(int arr[], int start, int stop)
{
    int i, temp;

    if (start == stop)
    {
        for (i = 0; i < stop; i++)
            printf("%d\t", arr[i]);
        printf("\n");
    }
    else
    {
        for (i = start; i < stop; i++)
        {
            // Swap
            temp = arr[i];
            arr[i] = arr[start];
            arr[start] = temp;

            // Recursive call
            perm(arr, start + 1, stop);

            // Backtrack (swap again)
            temp = arr[i];
            arr[i] = arr[start];
            arr[start] = temp;
        }
    }
}

int main()
{
    int n, i, a[10];

    printf("Enter total number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Permutations are:\n");
    perm(a, 0, n);

    return 0;
}

Output:
Input:
Enter total number of elements: 3
Enter elements:
1 2 3
Output:
Permutations are:
1	2	3
1	3	2
2	1	3
2	3	1
3	2	1
3	1	2

Result:
The program to generate all permutations of given elements using recursion was successfully executed.
 It generates all possible arrangements using backtracking.
 Total permutations generated = n!
 Time complexity is O(n!).
