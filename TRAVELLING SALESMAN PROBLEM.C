 Aim:
To implement the Travelling Salesman Problem (TSP) using recursion (backtracking) to find the minimum tour cost for visiting all cities exactly once and returning to the starting city.

Algorithm (TSP using Recursion / Backtracking):
Start the program.
Read the number of cities n.
Input the cost matrix representing distances between cities.
Initialize all cities as unvisited.
Define a recursive function tsp(city):
Mark the current city as visited.
Initialize min_cost = ∞.
For each city i:
If city i is not visited and there is a path:
Calculate cost = cost[city][i] + tsp(i)
Update min_cost with minimum value.
Unmark the current city (backtracking).
If all cities are visited:
Return cost to reach starting city.
Call the function starting from city 0.
Display the minimum tour cost.
Stop the program.

 Program:
#include <stdio.h>
#include <limits.h>

int n, cost[10][10], visited[10];

int min(int a, int b) {
    return (a < b) ? a : b;
}

int tsp(int city) {
    int i, min_cost = INT_MAX, temp;
    visited[city] = 1;

    for (i = 0; i < n; i++) {
        if (!visited[i] && cost[city][i] != 0) {
            temp = cost[city][i] + tsp(i);
            min_cost = min(min_cost, temp);
        }
    }

    visited[city] = 0;

    if (min_cost == INT_MAX)
        return cost[city][0];  // return to starting city

    return min_cost;
}

int main() {
    int i, j;

    printf("Enter number of cities: ");
    scanf("%d", &n);

    printf("Enter cost matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &cost[i][j]);

    printf("Minimum tour cost: %d\n", tsp(0));

    return 0;
}



Result:
The program for solving the Travelling Salesman Problem using recursion was successfully executed.
It computes the minimum cost tour that visits all cities exactly once and returns to the starting city.
The algorithm uses backtracking to explore all possible paths.
Time complexity is O(n!), making it suitable only for small inputs.
