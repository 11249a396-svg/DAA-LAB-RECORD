Aim:
To implement the Tower of Hanoi problem using recursion and display the sequence of moves required to transfer disks from source to destination.

Algorithm (Tower of Hanoi):
Start the program.
Read the number of disks n.
Define a recursive function tower(n, from, to, aux):
If n == 1:
Move disk from source (from) to destination (to).
Return.
Else:
Move n-1 disks from from to aux using to as helper.
Move the nth disk from from to to.
Move n-1 disks from aux to to using from as helper.
Call the function with:
Source = 'A', Destination = 'C', Auxiliary = 'B'.
Display all moves.
Stop the program.

Program:
#include <stdio.h>
void tower(int n, char from, char to, char aux) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", from, to);
        return;
    }
    tower(n-1, from, aux, to);
    printf("Move disk %d from %c to %c\n", n, from, to);
    tower(n-1, aux, to, from);
}

int main() {
    int n;
    printf("Enter number of disks: ");
    scanf("%d", &n);

    tower(n, 'A', 'C', 'B');

    return 0;
}


Result:
The program for solving the Tower of Hanoi problem using recursion was successfully executed.
It correctly displays the sequence of moves required to transfer all disks.
The minimum number of moves required is:
2
n
−1
Time complexity is O(2ⁿ).
