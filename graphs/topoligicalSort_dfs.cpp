#include <iostream>
#include <unordered_map>
#include <vector>
#include <stack>
using namespace std;

void prepareAdjList(unordered_map<int, vector<int>> &adjList,
                    vector<pair<int, int>> &edges) {
    for (auto e : edges) {
        adjList[e.first].push_back(e.second);
    }
}

void topoDFS(int node,
             unordered_map<int, vector<int>> &adjList,
             vector<bool> &visited,
             stack<int> &st) {

    visited[node] = true;

    for (auto nbr : adjList[node]) {
        if (!visited[nbr]) {
            topoDFS(nbr, adjList, visited, st);
        }
    }

    st.push(node);  // push after all calls
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

    vector<bool> visited(n, false);
    stack<int> st;

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            topoDFS(i, adjList, visited, st);
        }
    }

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
