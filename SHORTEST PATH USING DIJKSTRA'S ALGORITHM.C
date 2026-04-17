Aim:
To implement Dijkstra’s Algorithm to find the shortest path from a given source vertex to all other vertices in a weighted graph.

Algorithm (Dijkstra’s Algorithm):
Start the program.
Read the number of vertices n.
Input the cost (adjacency) matrix of the graph.
Read the source vertex src.
Initialize:
dist[i] = cost[src][i] for all vertices
visited[i] = 0 for all vertices
Mark the source vertex as visited:
visited[src] = 1
Repeat for n-1 times:
Find the unvisited vertex u with minimum distance.
Mark u as visited.
Update distances of adjacent vertices:
If dist[u] + cost[u][j] < dist[j], then update
dist[j] = dist[u] + cost[u][j]
Display the shortest distance from source to all vertices.
Stop the program.

Program:
#include <stdio.h>
#include <limits.h>

int main() {
    int n, i, j, src;
    int cost[10][10], dist[10], visited[10] = {0};

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &cost[i][j]);

    printf("Enter source vertex: ");
    scanf("%d", &src);

    for (i = 0; i < n; i++)
        dist[i] = cost[src][i];

    visited[src] = 1;

    for (i = 1; i < n; i++) {
        int min = INT_MAX, u;

        for (j = 0; j < n; j++) {
            if (!visited[j] && dist[j] < min) {
                min = dist[j];
                u = j;
            }
        }

        visited[u] = 1;

        for (j = 0; j < n; j++) {
            if (!visited[j] && dist[u] + cost[u][j] < dist[j])
                dist[j] = dist[u] + cost[u][j];
        }
    }

    printf("Shortest distances:\n");
    for (i = 0; i < n; i++)
        printf("%d -> %d = %d\n", src, i, dist[i]);

    return 0;
}

Output:
Input:
Enter number of vertices: 4
Enter adjacency matrix:
0 2 4 999
2 0 1 7
4 1 0 3
999 7 3 0
Enter source vertex: 0
Output:
Shortest distances:
0 -> 0 = 0
0 -> 1 = 2
0 -> 2 = 3
0 -> 3 = 6

Result:
The program to find the shortest path using Dijkstra’s Algorithm was successfully executed.
The algorithm correctly computes the minimum distance from the source vertex to all other vertices.
It works efficiently for graphs with non-negative edge weights.
Time complexity is approximately O(n²).
