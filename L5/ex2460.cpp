#include <bits/stdc++.h>

using namespace std;

int main () {

    int N, M, rev;

    cin >> N;
    vector<int> fila_ini(N);

    for(int i=0; i<N; i++)
        cin >> fila_ini[i];

    cin >> M;

    for(int i=0; i<M; i++) {
        cin >> rev;
        fila_ini.erase(remove(fila_ini.begin(), fila_ini.end(), rev), fila_ini.end());
    }

    bool first = true;
    for(int j: fila_ini) {
        if(!first) cout << " ";
        first = false;
        cout << j;
    }
    cout << "\n";
    
    return 0;
}