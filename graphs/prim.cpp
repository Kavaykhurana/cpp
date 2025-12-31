#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<pair<int,int>>> adj(n);
    for (int i = 0; i < m; i++) {
        int u, v, wt;
        cin >> u >> v >> wt;
        adj[u].push_back({v, wt});
        adj[v].push_back({u, wt});
    }

    vector<int> key(n, INT_MAX);
    vector<bool> mst(n, false);

    priority_queue<pair<int,int>,
        vector<pair<int,int>>,
        greater<pair<int,int>>> pq;

    key[0] = 0;
    pq.push({0, 0});

    int result = 0;

    while (!pq.empty()) {
        int node = pq.top().second;
        int wt = pq.top().first;
        pq.pop();

        if (mst[node]) continue;

        mst[node] = true;
        result += wt;

        for (auto nbr : adj[node]) {
            if (!mst[nbr.first] && nbr.second < key[nbr.first]) {
                key[nbr.first] = nbr.second;
                pq.push({key[nbr.first], nbr.first});
            }
        }
    }

    cout << "Total Weight: " << result;
    return 0;
}
