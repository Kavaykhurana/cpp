#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void prepareAdjList(unordered_map<int, vector<int>> &adjList,
                    vector<pair<int, int>> &edges) {

    for (auto edge : edges) {
        adjList[edge.first].push_back(edge.second);
    }
}

bool isCycleDFS(int node,
                unordered_map<int, vector<int>> &adjList,
                vector<bool> &visited,
                vector<bool> &dfsVisited) {

    visited[node] = true;
    dfsVisited[node] = true;

    for (auto neighbour : adjList[node]) {
        if (!visited[neighbour]) {
            if (isCycleDFS(neighbour, adjList, visited, dfsVisited))
                return true;
        }
        else if (dfsVisited[neighbour]) {
            return true;   // ✅ back-edge found
        }
    }

    dfsVisited[node] = false;  // backtrack
    return false;
}

int main() {
    unordered_map<int, vector<int>> adjList;
    vector<pair<int, int>> edges;

    int n, m;
    cout << "Enter number of nodes: ";
    cin >> n;
    cout << "Enter number of edges: ";
    cin >> m;

    cout << "Enter directed edges (u v):\n";
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        edges.push_back({u, v});
    }

    prepareAdjList(adjList, edges);

    vector<bool> visited(n, false);
    vector<bool> dfsVisited(n, false);

    bool cycle = false;
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            if (isCycleDFS(i, adjList, visited, dfsVisited)) {
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
