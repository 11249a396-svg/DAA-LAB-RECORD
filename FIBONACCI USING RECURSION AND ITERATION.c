 Aim:
To compute the Nth Fibonacci number using both recursive and iterative methods in C.

Algorithm:
🔹 Recursive Method
Start the program.
Read the value of n.
Define function fib_rec(n):
If n <= 1, return n.
Else return fib_rec(n-1) + fib_rec(n-2).
Call the function and display the result.
🔹 Iterative Method
Initialize a = 0, b = 1.
If n == 0, return 0.
Loop from 2 to n:
Compute c = a + b.
Update a = b, b = c.
Return b as the result.

Program:
#include <stdio.h>

int fib_rec(int n) {
    if (n <= 1)
        return n;
    return fib_rec(n-1) + fib_rec(n-2);
}

int fib_iter(int n) {
    int a = 0, b = 1, c, i;
    if (n == 0) return 0;
    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Recursive Fibonacci: %d\n", fib_rec(n));
    printf("Iterative Fibonacci: %d\n", fib_iter(n));

    return 0;
}


Result:

The program to compute the Nth Fibonacci number using both recursion and iteration was successfully executed.
Both methods produce the same result.
Recursive method is simple but less efficient (O(2ⁿ)).
Iterative method is efficient with time complexity O(n).
