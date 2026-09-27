#include <stdio.h>

#define MAX 100

struct Edge {
    int u, v, weight;
};

int parent[MAX];

// Find the parent of a vertex
int find(int i) {
    while (parent[i] != i)
        i = parent[i];

    return i;
}

// Union two sets
void unionSet(int u, int v) {
    int rootU = find(u);
    int rootV = find(v);

    parent[rootV] = rootU;
}

// Sort edges in increasing order of weight
void sortEdges(struct Edge edges[], int e) {
    for (int i = 0; i < e - 1; i++) {
        for (int j = 0; j < e - i - 1; j++) {

            if (edges[j].weight > edges[j + 1].weight) {

                struct Edge temp = edges[j];
                edges[j] = edges[j + 1];
                edges[j + 1] = temp;
            }
        }
    }
}

int main() {

    int n, e;
    struct Edge edges[MAX];

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter number of edges: ");
    scanf("%d", &e);

    printf("Enter edges (u v weight):\n");

    for (int i = 0; i < e; i++) {
        scanf("%d %d %d",
              &edges[i].u,
              &edges[i].v,
              &edges[i].weight);
    }

    // Initially, every vertex is its own parent
    for (int i = 0; i < n; i++) {
        parent[i] = i;
    }

    // Sort edges by weight
    sortEdges(edges, e);

    printf("\nEdges selected for MST:\n");

    int count = 0;
    int totalWeight = 0;

    // Kruskal's algorithm
    for (int i = 0; i < e && count < n - 1; i++) {

        int u = edges[i].u;
        int v = edges[i].v;

        // If they belong to different sets,
        // adding this edge will not create a cycle
        if (find(u) != find(v)) {

            printf("%d -- %d = %d\n",
                   u, v, edges[i].weight);

            totalWeight += edges[i].weight;

            unionSet(u, v);

            count++;
        }
    }

    // Check if MST was successfully formed
    if (count != n - 1) {

        printf("\nMST cannot be formed.\n");
        printf("The graph is disconnected.\n");

    }
    else {

        printf("\nTotal weight of MST = %d\n", totalWeight);
    }

    return 0;
}
