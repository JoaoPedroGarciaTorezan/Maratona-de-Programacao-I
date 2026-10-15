#include <bits/stdc++.h>

using namespace std;

vector<char> res;

void pathR(vector<vector<int>>& G, vector<int>& lbl, vector<char> letras, int v){
    int w;
    lbl[v]++;

    res.push_back(letras[v]);
    for(w = 0; w < G.size(); w++){
        if(G[v][w] == 1 || G[v][w] == 1) {
            if(lbl[w] == -1){
                pathR(G,lbl, letras, w);
            }
        }

    }
 
}

int main () {

    int N, V, E, componentes, n=1;
    char e1, e2;

    cin >> N;

    while(N--) {

        cin >> V >> E;
        componentes=0;
        vector<vector<int>> grafo(V, vector<int> (V, 0));
        vector<int> anterior (V, -1);
        vector<char> letras;
        res.clear();

        for(int i=0; i<V; i++) letras.push_back((char)('a' + i));

        for(int i=0; i<E; i++){

            cin >> e1 >> e2;
            auto it1 = find(letras.begin(), letras.end(), e1);
            auto it2 = find(letras.begin(), letras.end(), e2);

            int pos1 = distance(letras.begin(), it1);
            int pos2 = distance(letras.begin(), it2);
            grafo[pos1][pos2] = 1;
            grafo[pos2][pos1] = 1;

        }

        cout << "Case #" << n << ":\n";

        for(int i=0; i<V; i++){
            if(anterior[i] == -1){
                componentes++;
                pathR(grafo, anterior, letras, i);
                sort(res.begin(), res.end());
                for(char a: res) cout << a << ",";
                res.clear();
                cout << "\n";
            }
        }

        cout << componentes << " connected components\n";

        cout << "\n";

        n++;
    }
    return 0;
}