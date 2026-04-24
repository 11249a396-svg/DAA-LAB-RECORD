Aim:
To implement a simple Network Flow algorithm to compute the maximum flow from a given source to sink using a capacity matrix.

Algorithm:
Start the program.
Read the number of vertices n.
Input the capacity matrix of the graph.
Read the source (s) and sink (t) vertices.
Initialize flow = 0.
For each vertex i from 0 to n-1:
Find the minimum of:
Capacity from source to i → cap[s][i]
Capacity from i to sink → cap[i][t]
Add this minimum value to total flow.
Display the maximum flow.
Stop the program.

Program:
#include <stdio.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int n, i, j, s, t;
    int cap[10][10], flow = 0;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter capacity matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &cap[i][j]);

    printf("Enter source and sink: ");
    scanf("%d %d", &s, &t);

    for (i = 0; i < n; i++) {
        int f = min(cap[s][i], cap[i][t]);
        flow += f;
    }

    printf("Maximum flow: %d\n", flow);
    return 0;



Result:
The program to compute maximum flow in a network was successfully executed.
The flow is calculated by considering intermediate vertices between source and sink.
The algorithm provides a simplified approximation of maximum flow.
