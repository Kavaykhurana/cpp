#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <queue>
#include <list>
using namespace std;

void prepareAdjList(unordered_map<int, list<int>> &adjList,
                    vector<pair<int, int>> &edges) {

    for (auto e : edges) {
        adjList[e.first].push_back(e.second);
        adjList[e.second].push_back(e.first);
    }
}

vector<int> shortestPath(int n,
                          vector<pair<int, int>> &edges,
                          int src, int dest) {

    unordered_map<int, list<int>> adjList;
    prepareAdjList(adjList, edges);

    unordered_map<int, bool> visited;
    unordered_map<int, int> parent;

    queue<int> q;
    q.push(src);
    visited[src] = true;
    parent[src] = -1;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (auto nbr : adjList[node]) {
            if (!visited[nbr]) {
                visited[nbr] = true;
                parent[nbr] = node;
                q.push(nbr);
            }
        }
    }

    // reconstruct path
    vector<int> path;
    int curr = dest;

    while (curr != -1) {
        path.push_back(curr);
        curr = parent[curr];
    }

    reverse(path.begin(), path.end());
    return path;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> edges;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        edges.push_back({u, v});
    }

    int src, dest;
    cin >> src >> dest;

    vector<int> path = shortestPath(n, edges, src, dest);

    cout << "Shortest Path: ";
    for (int x : path)
        cout << x << " ";

    cout << "\nDistance: " << path.size() - 1;

    return 0;
}
