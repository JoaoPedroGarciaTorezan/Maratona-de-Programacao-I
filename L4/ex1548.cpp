#include <bits/stdc++.h>

using namespace std;

int main () {

    int N, M, alunos[1000], n_trocas;
    priority_queue<int> fila_p;
    queue<int> fila;

    cin >> N;

    while(N--){

        cin >> M;
        n_trocas = 0;

        for(int i=0; i<M; i++){

            cin >> alunos[i];
            fila_p.push(alunos[i]);
            fila.push(alunos[i]);
            
        }

        for(int i=0; i<M; i++){
            if(fila.front() == fila_p.top())
                n_trocas++;
            fila.pop();
            fila_p.pop();
        }

        cout << n_trocas << "\n";

    }
    return 0;
}