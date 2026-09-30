#include <bits/stdc++.h>

using namespace std;

void DFS(const vector<vector<int>>& adj, int N, int s) {

    vector<int> visitados(N, 0);
    vector<int> anterior(N, -1);

    stack<pair<int,int>> pilha; // (vertice, pai)
    pilha.push({s, -1});

    printf("Ordem DFS: ");
    while (!pilha.empty()) {

        auto [u, pai] = pilha.top();
        pilha.pop();

        if (visitados[u]) continue;

        visitados[u] = 1;
        anterior[u] = pai;
        printf("%d ", u);

        // percorre de tras para frente para visitar o menor indice primeiro
        for (auto it = adj[u].rbegin(); it != adj[u].rend(); ++it) {
            if (!visitados[*it]) {
                pilha.push({*it, u});
            }
        }
    }

    printf("\nAnterior: ");
    for (int i = 0; i < N; i++) printf("%d ", anterior[i]);
    printf("\n");
}

int main() {

    int N, M;
    scanf("%d %d", &N, &M);

    vector<vector<int>> adj(N);

    for (int i = 0; i < M; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        adj[u].push_back(v);
        adj[v].push_back(u); // remova se o grafo for direcionado
    }

    // garante ordem crescente de vizinhos, independente da ordem das arestas
    for (int i = 0; i < N; i++) sort(adj[i].begin(), adj[i].end());

    DFS(adj, N, 0);

    return 0;
}