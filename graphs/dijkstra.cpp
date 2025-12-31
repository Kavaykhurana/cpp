#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<pair<int, int>>> adj(n);

    // u v wt
    for (int i = 0; i < m; i++) {
        int u, v, wt;
        cin >> u >> v >> wt;
        adj[u].push_back({v, wt});
        adj[v].push_back({u, wt}); // remove for directed graph
    }

    int src;
    cin >> src;

    vector<int> dist(n, INT_MAX);
    dist[src] = 0;

    priority_queue<pair<int,int>,
        vector<pair<int,int>>,
        greater<pair<int,int>>> pq;

    pq.push({0, src});

    while (!pq.empty()) {
        int currDist = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        // Skip outdated entries
        if (currDist > dist[node]) continue;

        for (auto nbr : adj[node]) {
            int v = nbr.first;
            int wt = nbr.second;

            if (dist[node] + wt < dist[v]) {
                dist[v] = dist[node] + wt;
                pq.push({dist[v], v});
            }
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
