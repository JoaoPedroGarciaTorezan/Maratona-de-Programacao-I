#include <bits/stdc++.h>

using namespace std;

void BFS(const vector<vector<int>>& adj, int N, int s) {

    queue<int> fila;
    vector<int> dist(N, -1); // -1 = nao visitado

    dist[s] = 0;
    fila.push(s);

    printf("Ordem de visita: ");
    while (!fila.empty()) {

        int u = fila.front();
        fila.pop();
        printf("%d ", u);

        for (int v : adj[u]) {
            if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                fila.push(v);
            }
        }
    }

    printf("\n\nDistancias a partir de %d:\n", s);
    for (int i = 0; i < N; i++) {
        printf("  vertice %d: %d\n", i, dist[i]);
    }
}

int main() {

    int N, M;
    scanf("%d %d", &N, &M);

    vector<vector<int>> adj(N);

    for (int i = 0; i < M; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        adj[u].push_back(v);
        adj[v].push_back(u); // remova esta linha se o grafo for direcionado
    }

    BFS(adj, N, 0);

    return 0;
}