#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void dfs1(int node, vector<vector<int>> &adj,
          vector<bool> &visited, stack<int> &st) {

    visited[node] = true;
    for (int nbr : adj[node]) {
        if (!visited[nbr])
            dfs1(nbr, adj, visited, st);
    }
    st.push(node);
}

void dfs2(int node, vector<vector<int>> &transpose,
          vector<bool> &visited) {

    visited[node] = true;
    cout << node << " ";

    for (int nbr : transpose[node]) {
        if (!visited[nbr])
            dfs2(nbr, transpose, visited);
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n), transpose(n);

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        transpose[v].push_back(u); // reverse edge
    }

    // Step 1: DFS and stack
    vector<bool> visited(n, false);
    stack<int> st;

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            dfs1(i, adj, visited, st);
        }
    }

    // Step 2: DFS on transpose
    fill(visited.begin(), visited.end(), false);
    cout << "Strongly Connected Components:\n";

    while (!st.empty()) {
        int node = st.top();
        st.pop();

        if (!visited[node]) {
            dfs2(node, transpose, visited);
            cout << "\n";
        }
    }

    return 0;
}
