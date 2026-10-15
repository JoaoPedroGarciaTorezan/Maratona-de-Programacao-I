#include <bits/stdc++.h>

using namespace std;

int V;
string esp;

void pathR(vector<vector<int>>& G, vector<int>& lbl, int v){
    int w;
    lbl[v]++;


    for(w = 0; w < V; w++){
        if(G[v][w] == 1) {
            esp += "  ";
            cout << esp;
            if(lbl[w] == -1){
                printf("%d-%d pathR(G,%d)\n", v, w, w);
                pathR(G,lbl, w);
            }
            else printf("%d-%d\n", v, w);
            esp.pop_back();
            esp.pop_back();
        }

    }
 
}

int main () {

    int N, E, e1, e2, i=1;
    

    while(cin >> N){

        while(N--){

            cin >> V >> E;
            vector<int> lbl(V, -1);

            vector<vector<int>> grafo(V, vector<int> (V, 0));

            for(int i=0; i<E; i++) {

                cin >> e1 >> e2;
                grafo[e1][e2] = 1;

            }

            cout << "Caso " << i << ":\n";

            for(int i = 0; i < V; i++){
                if(lbl[i] == -1){
                    bool temAresta = false;
                    for(int j = 0; j < V; j++) if(grafo[i][j]) temAresta = true;

                pathR(grafo, lbl, i);
                if(temAresta) cout << "\n";
                }
            }

            i++;

        }

        i=1;
        
    }


    return 0;
}