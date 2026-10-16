#include <bits/stdc++.h>
#define INF 0x3f3f3f3f // infinito

using namespace std;

vector<int> dist;      // vetor de distancias
vector<int> pred;      // vetor de predecessores
vector<int> visitado;  // marca se o vertice foi visitado
priority_queue<pair<int, int>> q; // fila: (-distancia, vertice)

// G[a] = lista de pares (vizinho, peso)
void dijkstra(vector<vector<pair<int, int>>>& G, int s) {
    int N = G.size();
    dist.assign(N, INF);
    pred.assign(N, -1);
    visitado.assign(N, 0);
    q = priority_queue<pair<int, int>>(); // limpa a fila

    dist[s] = 0;
    q.push({0, s});

    while (!q.empty()) {
        int a = q.top().second;
        q.pop();

        if (visitado[a]) continue;
        visitado[a] = 1;

        for (auto u : G[a]) {
            int b = u.first;
            int w = u.second;

            if (dist[a] + w < dist[b]) {
                dist[b] = dist[a] + w;
                pred[b] = a;
                q.push({-dist[b], b});
            }
        }
    }
}

int main () {
    int V, E;
    cin >> V >> E;
    vector<vector<pair<int, int>>> adj(V);

    for (int t = 0; t < E; t++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});  // tire esta linha se o grafo for direcionado
    }

    dijkstra(adj, 0);

    cout << "Distancia de cada vertice: ";
    for(int i=0; i<V; i++){
        cout << dist[i] << " - ";
    }
    cout << "\nCaminho minimo: ";
    for(int i=0; i<V; i++)
        cout << pred[i] << " - ";
    cout << "\n";

    return 0;
}