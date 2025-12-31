#include <iostream>
#include <unordered_map>
#include <queue>
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

void bfs(unordered_map<int, set<int>> &adjList,
         unordered_map<int, bool> &visited,
         vector<int> &ans,
         int node) {

    queue<int> q;
    q.push(node);
    visited[node] = true;

    while (!q.empty()) {
        int frontNode = q.front();
        q.pop();

        ans.push_back(frontNode);

        for (auto neighbour : adjList[frontNode]) {
            if (!visited[neighbour]) {
                q.push(neighbour);
                visited[neighbour] = true;
            }
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

    // BFS for disconnected graph
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            bfs(adjList, visited, ans, i);
        }
    }

    cout << "BFS Traversal: ";
    for (int x : ans) {
        cout << x << " ";
    }

}
