Aim:
To implement Linear Search using recursion in C and measure the execution time required to search an element in an array.

Algorithm:
Start the program.
Declare an array of size n (e.g., 10,000 elements).
Initialize the array with random values.
Generate or input the search key.
Define a recursive function ls(array, begin, stop, key):
If begin == stop, display "Element not found" and stop.
If array[begin] == key, display "Element found at position" and stop.
Otherwise, call the function again with begin + 1.
Record the start time using clock().
Call the recursive linear search function.
Record the end time using clock().
Calculate total time taken:
Time=
CLOCKS_PER_SEC
end−start
Display the result and execution time.
Stop the program.

PROGRAM:
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void ls(int a1[], int begin, int stop, int search)
{
    if(begin == stop)
        printf("Element not found\n");
    else if(a1[begin] == search)
        printf("Element found @ position %d\n", begin + 1);
    else
        ls(a1, begin + 1, stop, search);
}

int main()
{
    int a[10000], n = 10000, key, i;
    clock_t start, end;

    for(i = 0; i < n; i++)
        a[i] = rand() % 1000;

    key = rand() % 1000;

    start = clock();
    ls(a, 0, n, key);
    end = clock();

    printf("Total time taken: %lf\n",
           (double)(end - start) / CLOCKS_PER_SEC);

    return 0;
}



RESULT:
The recursive linear search program was successfully executed.
The program checks each element of the array one by one using recursion.

If the element is present, it displays:
“Element found at position ___”
If the element is not present, it displays:
“Element not found”

The execution time for the search operation was calculated using clock() and displayed.
