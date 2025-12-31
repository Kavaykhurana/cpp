#include <iostream>
#include <vector>
#include <climits>
using namespace std;

struct Edge {
    int u, v, wt;
};

int main() {
    int n, m;
    cin >> n >> m;

    vector<Edge> edges;
    for (int i = 0; i < m; i++) {
        int u, v, wt;
        cin >> u >> v >> wt;
        edges.push_back({u, v, wt});
    }

    int src;
    cin >> src;

    vector<int> dist(n, INT_MAX);
    dist[src] = 0;

    // Step 1: Relax edges V-1 times
    for (int i = 1; i <= n - 1; i++) {
        for (auto e : edges) {
            if (dist[e.u] != INT_MAX &&
                dist[e.u] + e.wt < dist[e.v]) {
                dist[e.v] = dist[e.u] + e.wt;
            }
        }
    }

    // Step 2: Detect negative cycle
    for (auto e : edges) {
        if (dist[e.u] != INT_MAX &&
            dist[e.u] + e.wt < dist[e.v]) {
            cout << "Negative Weight Cycle Detected\n";
            return 0;
        }
    }

    // Output distances
    for (int i = 0; i < n; i++) {
        if (dist[i] == INT_MAX)
            cout << "INF ";
        else
            cout << dist[i] << " ";
    }

    return 0;
}
