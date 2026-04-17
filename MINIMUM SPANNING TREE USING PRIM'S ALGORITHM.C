 Aim:

To implement Prim’s Algorithm to find the Minimum Spanning Tree (MST) of a weighted graph using an adjacency matrix.

Algorithm (Prim’s Algorithm):
Start the program.
Read the number of vertices n.
Input the cost (adjacency) matrix of the graph.
Initialize an array visited[] to 0 (not visited).
Mark the first vertex as visited:
visited[0] = 1
Repeat for n-1 edges:
Set min = ∞.
For each vertex u:
If u is visited:
For each vertex v:
If v is not visited and cost[u][v] < min:
Update min = cost[u][v]
Store vertex v
Add the selected edge to MST.
Mark the selected vertex as visited.
Display the edges (or cost) of MST.
Stop the program.

Program:
#include <stdio.h>
#include <limits.h>

int main() {
    int n, i, j, min, u, v;
    int cost[10][10], visited[10] = {0};

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &cost[i][j]);

    visited[0] = 1;
    printf("Edges in MST:\n");

    for (i = 0; i < n - 1; i++) {
        min = INT_MAX;

        for (u = 0; u < n; u++) {
            if (visited[u]) {
                for (v = 0; v < n; v++) {
                    if (!visited[v] && cost[u][v] < min) {
                        min = cost[u][v];
                        j = v;
                    }
                }
            }
        }

        printf("Edge cost: %d\n", min);
        visited[j] = 1;
    }
    return 0;
}

Output:
Input:
Enter number of vertices: 4
Enter adjacency matrix:
0 2 3 6
2 0 1 4
3 1 0 5
6 4 5 0
Output:
Edges in MST:
Edge cost: 2
Edge cost: 1
Edge cost: 4

Result:
The program to find the Minimum Spanning Tree using Prim’s Algorithm was successfully executed.
 The algorithm selects edges with minimum cost to form a spanning tree.
It ensures all vertices are connected with minimum total weight.
Time complexity is approximately O(n²).
