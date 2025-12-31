#include <iostream>
#include <unordered_map>
#include <set>
#include <vector>
using namespace std;

void prepareAdjList(unordered_map<int, set<int>> &adjList,
        vector<pair<int, int>> &edges) {

    for (int i = 0; i < edges.size(); i++) {
        int u = edges[i].first;
        int v = edges[i].second;

        adjList[u].insert(v);
        adjList[v].insert(u);
    }
}

void dfs(unordered_map<int, set<int>> &adjList,
        unordered_map<int, bool> &visited,
        vector<int> &ans,
        int node) {

    visited[node] = true;
    ans.push_back(node);

    for (auto neighbour : adjList[node]) {
        if (!visited[neighbour]) {
        dfs(adjList, visited, ans, neighbour);
        }
    }
}

int main() {
    unordered_map<int, set<int>> adjList;
    vector<pair<int, int>> edges;

    int n, m;
    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter number of edges: ";
    cin >> m;

    cout << "Enter edges (u v):\n";
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        edges.push_back({u, v});
    }

    prepareAdjList(adjList, edges);

    unordered_map<int, bool> visited;
    vector<int> ans;

    // DFS for disconnected graph
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
        dfs(adjList, visited, ans, i);
        }
    }

    cout << "DFS Traversal: ";
    for (int x : ans) {
        cout << x << " ";
    }
}
