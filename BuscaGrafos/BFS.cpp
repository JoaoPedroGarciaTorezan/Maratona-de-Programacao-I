#include <bits/stdc++.h>

using namespace std;

const int N = 10;

void BFS(int m[N][N], int s) {

    queue<int> fila;
    int INF = -1;
    int dist[N];
    int i, u;

    for (i = 0; i < N; i++) dist[i] = INF;

    dist[s] = 0;
    fila.push(s);

    while(!fila.empty()){
         
        u = fila.front();
        fila.pop();
        printf("%d ", u);

        for(i=0; i<N; i++) {
            if(dist[i] == INF && m[u][i]){
                dist[i] = dist[u] + 1;
                fila.push(i);
            }
        }
    }

    cout << "\n";
}

int main() {

    int m[N][N] = {
        //0  1  2  3  4  5  6  7  8  9
        { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0 }, // 0
        { 1, 0, 0, 1, 1, 0, 0, 0, 0, 0 }, // 1
        { 1, 0, 0, 0, 0, 1, 1, 0, 0, 0 }, // 2
        { 0, 1, 0, 0, 0, 0, 0, 1, 0, 0 }, // 3
        { 0, 1, 0, 0, 0, 0, 0, 1, 0, 0 }, // 4
        { 0, 0, 1, 0, 0, 0, 0, 0, 1, 0 }, // 5
        { 0, 0, 1, 0, 0, 0, 0, 0, 0, 1 }, // 6
        { 0, 0, 0, 1, 1, 0, 0, 0, 0, 0 }, // 7
        { 0, 0, 0, 0, 0, 1, 0, 0, 0, 0 }, // 8
        { 0, 0, 0, 0, 0, 0, 1, 0, 0, 0 }  // 9
    };

    BFS(m,0);


    return 0;
}