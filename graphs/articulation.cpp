#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, int parent,
         vector<int> &tin, vector<int> &low,
         vector<bool> &vis,
         vector<bool> &isAP,
         vector<vector<int>> &adj,
         int &timer) {

    vis[node] = true;
    tin[node] = low[node] = timer++;
    int children = 0;

    for (int nbr : adj[node]) {
        if (nbr == parent) continue;

        if (!vis[nbr]) {
            children++;
            dfs(nbr, node, tin, low, vis, isAP, adj, timer);

            low[node] = min(low[node], low[nbr]);

            // Case 2: non-root
            if (parent != -1 && low[nbr] >= tin[node]) {
                isAP[node] = true;
            }
        }
        else {
            low[node] = min(low[node], tin[nbr]);
        }
    }

    // Case 1: root
    if (parent == -1 && children > 1) {
        isAP[node] = true;
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
    vector<bool> isAP(n, false);

    int timer = 0;

    // For disconnected graphs
    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            dfs(i, -1, tin, low, vis, isAP, adj, timer);
        }
    }

    cout << "Articulation Points:\n";
    for (int i = 0; i < n; i++) {
        if (isAP[i]) cout << i << " ";
    }

    return 0;
}
