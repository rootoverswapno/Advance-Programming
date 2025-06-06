#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
vector<int> dijkstra(vector<vector<pair<int, int>>>& graph, int src) {
    int n = graph.size();
    vector<int> dist(n, INT_MAX);
    vector<int> vis(n, 0);
    set<pair<int, int>> st;
    dist[src] = 0;
    st.insert({0, src});

    while (!st.empty()) {
        auto node = *st.begin();
        st.erase(st.begin());

        int v = node.second;
        int v_dist = node.first;

        if (vis[v]) continue;
        vis[v] = 1;

        for (auto child : graph[v]) {
            int child_v = child.first;
            int wt = child.second;

            if (v_dist + wt < dist[child_v]) {
                dist[child_v] = v_dist + wt;
                st.insert({dist[child_v], child_v});
            }
        }
    }
    return dist;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<pair<int, int>>> graph(n);
    for (int i = 0; i < m; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        u--; v--;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }

    cout << "Enter Source : ";
    int source;
    cin >> source;
    source--; 

    vector<int> res = dijkstra(graph, source);

    cout << "Shortest distances from node " << source + 1 << ":\n";
    for (int i = 0; i < res.size(); ++i) {
        if (res[i] == INT_MAX)
            cout << "Node " << i + 1 << ": Unreachable\n";
        else
            cout << "Node " << i + 1 << ": " << res[i] << "\n";
    }

    return 0;
}
