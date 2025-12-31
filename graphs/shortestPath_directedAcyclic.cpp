#include <iostream>
#include <unordered_map>
#include <vector>
#include <stack>
#include <climits>
using namespace std;

void topoDFS(int node,
             unordered_map<int, vector<pair<int, int>>> &adj,
             vector<bool> &visited,
             stack<int> &st) {

    visited[node] = true;

    for (auto nbr : adj[node]) {
        if (!visited[nbr.first])
            topoDFS(nbr.first, adj, visited, st);
    }

    st.push(node);
}

int main() {
    int n, m;
    cin >> n >> m;

    unordered_map<int, vector<pair<int, int>>> adj;

    // edges: u v wt
    for (int i = 0; i < m; i++) {
        int u, v, wt;
        cin >> u >> v >> wt;
        adj[u].push_back({v, wt});
    }

    // Step 1: Topological sort
    vector<bool> visited(n, false);
    stack<int> st;

    for (int i = 0; i < n; i++) {
        if (!visited[i])
            topoDFS(i, adj, visited, st);
    }

    // Step 2: Distance array
    vector<int> dist(n, INT_MAX);
    int src;
    cin >> src;
    dist[src] = 0;

    // Step 3: Relax edges in topo order
    while (!st.empty()) {
        int node = st.top();
        st.pop();

        if (dist[node] != INT_MAX) {
            for (auto nbr : adj[node]) {
                int v = nbr.first;
                int wt = nbr.second;

                if (dist[node] + wt < dist[v]) {
                    dist[v] = dist[node] + wt;
                }
            }
        }
    }

    // Output
    for (int i = 0; i < n; i++) {
        if (dist[i] == INT_MAX)
            cout << "INF ";
        else
            cout << dist[i] << " ";
    }

    return 0;
}
