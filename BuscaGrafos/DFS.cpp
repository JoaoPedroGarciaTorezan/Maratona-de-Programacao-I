#include <bits/stdc++.h>

using namespace std;


void DFS(int *m[], int s, int N) {

    stack<int> pilha;
    int visitados[N]; // marca od nos visitados. Inicializar com 0
    int anterior[N]; // marca o no anterior na busca. Inicializar com -1
    stack<int> pilha;

    int i, u;

    pilha.push(s);

    while(!pilha.empty()){

        u = pilha.top();
        pilha.pop();
        if(!visitados[u]){

            visitados[u] = 1;
            printf("%d", u);
        }

        for(i=0; i < N; i++){

            if(m[u][i] && !visitados[i]){
                pilha.push(i);
                anterior[i] = u;
            }
        }

    }
    
}

int main () {

    int N=10; //qtd de vertices
    int m[N][N]; //matriz de adj



    return 0;
}