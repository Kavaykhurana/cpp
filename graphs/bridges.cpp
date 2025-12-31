#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, int parent,
         vector<int> &tin, vector<int> &low,
         vector<bool> &vis,
         vector<vector<int>> &adj,
         int &timer) {

    vis[node] = true;
    tin[node] = low[node] = timer++;
    
    for (int nbr : adj[node]) {
        if (nbr == parent) continue;

        if (!vis[nbr]) {
            dfs(nbr, node, tin, low, vis, adj, timer);
            low[node] = min(low[node], low[nbr]);

            if (low[nbr] > tin[node]) {
                cout << node << " - " << nbr << " is a bridge\n";
            }
        }
        else {
            low[node] = min(low[node], tin[nbr]);
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> tin(n, -1), low(n, -1);
    vector<bool> vis(n, false);
    int timer = 0;

    // For disconnected graph
    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            dfs(i, -1, tin, low, vis, adj, timer);
        }
    }

    return 0;
}
