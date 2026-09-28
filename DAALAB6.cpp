

#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

typedef pair<int, int> pii; // {weight, vertex}

int primMST(int V, vector<vector<pii>>& adj) {
    priority_queue<pii, vector<pii>, greater<pii>> pq; // min-heap
    vector<int> key(V, INT_MAX);      // smallest edge weight connecting vertex to the MST
    vector<int> parent(V, -1);        // MST parent of each vertex
    vector<bool> inMST(V, false);

    key[0] = 0;
    pq.push({0, 0});
    int totalWeight = 0;

    while (!pq.empty()) {
        int u = pq.top().second;
        int w = pq.top().first;
        pq.pop();

        if (inMST[u]) continue;       // skip stale entries
        inMST[u] = true;
        totalWeight += w;

        for (auto& [v, weight] : adj[u]) {
            if (!inMST[v] && weight < key[v]) {
                key[v] = weight;
                parent[v] = u;
                pq.push({weight, v});
            }
        }
    }

    cout << "Edges in MST:\n";
    for (int i = 1; i < V; i++) {
        if (parent[i] != -1)
            cout << parent[i] << " - " << i << "  (weight " << key[i] << ")\n";
    }
    return totalWeight;
}

int main() {
    int V, E;
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    // adj[u] holds pairs {neighbor, weight}
    vector<vector<pii>> adj(V);

    cout << "Enter each edge as: u v weight (0-indexed)\n";
    for (int i = 0; i < E; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w}); // undirected graph
    }

    int total = primMST(V, adj);
    cout << "Total weight of MST: " << total << endl;
    return 0;
}
