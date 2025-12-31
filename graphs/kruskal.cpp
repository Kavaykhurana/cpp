#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class DSU {
    vector<int> parent, rank;
public:
    DSU(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; i++)
            parent[i] = i;
    }

    int find(int x) {
        if (parent[x] == x)
            return x;
        return parent[x] = find(parent[x]);
    }

    void unite(int x, int y) {
        x = find(x);
        y = find(y);

        if (x == y) return;

        if (rank[x] < rank[y])
            parent[x] = y;
        else if (rank[y] < rank[x])
            parent[y] = x;
        else {
            parent[y] = x;
            rank[x]++;
        }
    }
};

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> edges; // u v wt
    for (int i = 0; i < m; i++) {
        int u, v, wt;
        cin >> u >> v >> wt;
        edges.push_back({wt, u, v});
    }

    sort(edges.begin(), edges.end());

    DSU dsu(n);
    int mstWeight = 0;

    for (auto e : edges) {
        int wt = e[0];
        int u = e[1];
        int v = e[2];

        if (dsu.find(u) != dsu.find(v)) {
            dsu.unite(u, v);
            mstWeight += wt;
            cout << u << " - " << v << "\n";
        }
    }

    cout << "Total Weight: " << mstWeight;
    return 0;
}
