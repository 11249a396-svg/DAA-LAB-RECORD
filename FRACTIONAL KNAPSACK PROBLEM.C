 Aim:

To implement the Fractional Knapsack Problem using a greedy approach to maximize profit based on given weights and values of items.

Algorithm (Fractional Knapsack – Greedy Method):
Start the program.
Read the number of items n.
Input the weights of the items.
Input the profits (prices) of the items.
Read the capacity of the knapsack.
Calculate unit profit for each item:
unit profit=
weight
profit
Sort the items in descending order of unit profit.
Initialize total profit pri = 0.
For each item:
If the item weight is less than or equal to capacity:
Add full item to knapsack.
Reduce capacity.
Add full profit.
Else:
Take fractional part of the item.
Add corresponding profit.
Set capacity to 0 and stop.
Display the maximum profit.
Stop the program.

Program:
#include<stdio.h>

int main()
{
    int w[10], p[10], n, i, j, cap, temp1;
    float up[10], temp, pri = 0.0;

    printf("Enter the no of items");
    scanf("%d", &n);

    printf("Enter the weight of each items");
    for(i = 0; i < n; i++) {
        scanf("%d", &w[i]);
    }

    printf("Enter the price of each packets in a packed items");
    for(i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }

    printf("Enter the capacity of bin");
    scanf("%d", &cap);

    for(i = 0; i < n; i++) {
        up[i] = (1.0 * p[i]) / w[i];
    }

    // Sorting based on unit profit
    for(i = 0; i < n; i++) {
        for(j = i; j < n; j++) {
            if(up[i] < up[j]) {
                temp = up[i];
                up[i] = up[j];
                up[j] = temp;

                temp1 = w[i];
                w[i] = w[j];
                w[j] = temp1;
            }
        }
    }

    // Knapsack filling
    for(i = 0; i < n; i++) {
        if(w[i] <= cap) {
            cap = cap - w[i];
            pri = w[i] * up[i] + pri;
        }
        else {
            pri = ((1.0 * cap) / w[i]) * p[i] + pri;
            cap = 0;
            break;
        }
    }

    printf("Maximum profit: %f", pri);
    return 0;
}

Output:
Input:
Enter the no of items: 3
Enter the weight of each items: 10 20 30
Enter the price of each packets in a packed items: 60 100 120
Enter the capacity of bin: 50
Output:
Maximum profit: 240.000000

Result:
The program for solving the Fractional Knapsack Problem using a greedy approach was successfully executed.
The algorithm selects items based on highest unit profit.
It allows fractional selection to maximize total profit.
Time complexity is approximately O(n²) due to sorting
