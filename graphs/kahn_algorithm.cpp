#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>
using namespace std;

void prepareAdjList(unordered_map<int, vector<int>> &adjList,
                    vector<pair<int, int>> &edges) {
    for (auto e : edges) {
        adjList[e.first].push_back(e.second);
    }
}

int main() {
    unordered_map<int, vector<int>> adjList;
    vector<pair<int, int>> edges;

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        edges.push_back({u, v});
    }

    prepareAdjList(adjList, edges);

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

    vector<int> topo;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        topo.push_back(node);

        for (auto nbr : adjList[node]) {
            indegree[nbr]--;
            if (indegree[nbr] == 0)
                q.push(nbr);
        }
    }

    if (topo.size() != n) {
        cout << "Cycle Present, Topo Sort Not Possible\n";
        return 0;
    }

    for (int x : topo)
        cout << x << " ";

    return 0;
}
