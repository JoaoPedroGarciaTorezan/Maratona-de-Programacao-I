#include <bits/stdc++.h>

using namespace std;

const int N=10;

void DFS(int m[N][N], int s) {

    int visitados[N]; // marca od nos visitados. Inicializar com 0
    int anterior[N]; // marca o no anterior na busca. Inicializar com -1
    stack<int> pilha;
    for (int k = 0; k < N; k++) anterior[k] = -1;

    int i, u;

    pilha.push(s);

    while(!pilha.empty()){

        u = pilha.top();
        pilha.pop();
        if(!visitados[u]){

            visitados[u] = 1;
            printf("%d ", u);
        }

        for(i=0; i < N; i++){

            if(m[u][i] && !visitados[i]){
                pilha.push(i);
                anterior[i] = u;
            }
        }

    }

    cout << "\n";
    
}

int main () {

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

    DFS(m,0);



    return 0;
}