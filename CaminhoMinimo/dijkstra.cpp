#include <bits/stdc++.h>
#define INF 0x3f3f3f3f // infinito

using namespace std;

vector<int> dist;      // vetor de distancias
vector<int> pred;      // vetor de predecessores
vector<int> visitado;  // marca se o vertice foi visitado
priority_queue<pair<int, int>> q; // fila: (-distancia, vertice)

// G[a][b] = peso da aresta a->b (INF se nao existe)
void dijkstra(vector<vector<int>>& G, int s) {
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

        for (int b = 0; b < N; b++) {
            int w = G[a][b];
            if (w == INF) continue; // sem aresta

            if (dist[a] + w < dist[b]) {
                dist[b] = dist[a] + w;
                pred[b] = a;
                q.push({-dist[b], b});
            }
        }
    }
}

int main() {
    int N = 5;
    vector<vector<int>> G(N, vector<int>(N, INF));

    // grafo nao direcionado: (u, v, peso)
    auto add = [&](int u, int v, int w) {
        G[u][v] = w;
        G[v][u] = w;
    };
    add(0, 1, 4);
    add(0, 2, 1);
    add(2, 1, 2);
    add(1, 3, 1);
    add(2, 3, 5);
    add(3, 4, 3);

    dijkstra(G, 0);

    for (int i = 0; i < N; i++)
        cout << "dist[" << i << "] = " << dist[i] << ", pred = " << pred[i] << "\n";
}