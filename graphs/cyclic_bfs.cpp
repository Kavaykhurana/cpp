#include <iostream>
#include <unordered_map>
#include <queue>
#include <set>
#include <vector>
using namespace std;

void prepareAdjList(unordered_map<int, set<int>> &adjList,
                    vector<pair<int, int>> &edges) {

    for (auto edge : edges) {
        int u = edge.first;
        int v = edge.second;
        adjList[u].insert(v);
        adjList[v].insert(u);
    }
}

bool isCycleBFS(unordered_map<int, set<int>> &adjList, int start,
                unordered_map<int, bool> &visited) {

    queue<pair<int, int>> q;   // (node, parent)
    q.push({start, -1});
    visited[start] = true;

    while (!q.empty()) {
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();

        for (auto neighbour : adjList[node]) {
            if (!visited[neighbour]) {
                visited[neighbour] = true;
                q.push({neighbour, node});
            }
            else if (neighbour != parent) {
                return true;    // ✅ cycle found
            }
        }
    }
    return false;
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
    bool cycle = false;

    // Check for disconnected graph
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            if (isCycleBFS(adjList, i, visited)) {
                cycle = true;
                break;
            }
        }
    }

    if (cycle)
        cout << "Cycle Present\n";
    else
        cout << "No Cycle\n";

    return 0;
}
