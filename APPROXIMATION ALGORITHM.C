 Aim:

To implement an approximation algorithm (greedy method) to find a Vertex Cover of a given graph using its adjacency matrix.

Algorithm:
Start the program.
Read the number of vertices n.
Input the adjacency matrix of the graph.
Initialize an array visited[] to mark selected vertices (initially all 0).
For each vertex i from 0 to n-1:
For each vertex j from i+1 to n-1:
If there is an edge between i and j (graph[i][j] == 1) and both vertices are not visited:
Mark both vertices as visited.
Add them to the vertex cover.
Print the selected vertices (vertex cover).
Stop the program.

Program:
#include <stdio.h>

int main() {
    int n, i, j;
    int graph[10][10], visited[10] = {0};

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);

    printf("Vertex Cover:\n");
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (graph[i][j] && !visited[i] && !visited[j]) {
                visited[i] = visited[j] = 1;
                printf("%d %d\n", i, j);
            }
        }
    }
    return 0;
}

Output:
Input:
Enter number of vertices: 4
Enter adjacency matrix:
0 1 1 0
1 0 1 1
1 1 0 1
0 1 1 0

Output:

Vertex Cover:
0 1
2 3

Result:
The greedy approximation algorithm for the Vertex Cover problem was successfully implemented.
The program selects pairs of vertices that cover all edges in the graph.

👉 This approach does not always give the optimal solution but provides a good approximate solution efficiently.
👉 Time complexity is approximately O(n²).
