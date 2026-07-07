#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<vector<pair<int, long long> > > adj(n + 1);

    for (int i = 0; i < m; i++) {
        int u, v;
        long long w;
        cin >> u >> v >> w;
        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }

    const long long INF = 1e18;
    vector<long long> dist(n + 1, INF);
    vector<int> par(n + 1, -1);

    priority_queue<pair<long long, int>,
                   vector<pair<long long, int> >,
                   greater<pair<long long, int> > > pq;

    dist[1] = 0;
    pq.push(make_pair(0, 1));

    while (!pq.empty()) {
        pair<long long, int> cur = pq.top();
        pq.pop();

        long long d = cur.first;
        int u = cur.second;

        if (d != dist[u])
            continue;

        for (int i = 0; i < adj[u].size(); i++) {
            int v = adj[u][i].first;
            long long w = adj[u][i].second;

            if (dist[v] > dist[u] + w) {
                dist[v] = dist[u] + w;
                par[v] = u;
                pq.push(make_pair(dist[v], v));
            }
        }
    }

    if (dist[n] == INF) {
        cout << -1;
        return 0;
    }

    vector<int> path;
    int cur = n;

    while (cur != -1) {
        path.push_back(cur);
        cur = par[cur];
    }

    reverse(path.begin(), path.end());

    for (int i = 0; i < path.size(); i++)
        cout << path[i] << " ";

    return 0;
}