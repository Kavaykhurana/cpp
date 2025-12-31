#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>
using namespace std;

void prepareAdjList(unordered_map<int, vector<int>> &adjList,
                    vector<pair<int, int>> &edges) {

    for (auto edge : edges) {
        adjList[edge.first].push_back(edge.second);
    }
}

bool isCycleBFS(int n, unordered_map<int, vector<int>> &adjList) {

    vector<int> indegree(n, 0);

    for (auto x : adjList) {
        for (auto nbr : x.second) {
            indegree[nbr]++;
        }
    }

    queue<int> q;
    for (int i = 0; i < n; i++) {
        if (indegree[i] == 0)
            q.push(i);
    }

    int count = 0;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        count++;

        for (auto nbr : adjList[node]) {
            indegree[nbr]--;
            if (indegree[nbr] == 0)
                q.push(nbr);
        }
    }

    return count != n;   // cycle if not all nodes processed
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

    if (isCycleBFS(n, adjList))
        cout << "Cycle Present\n";
    else
        cout << "No Cycle\n";

    return 0;
}
