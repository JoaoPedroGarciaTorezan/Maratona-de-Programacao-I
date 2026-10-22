#include <bits/stdc++.h>

using namespace std;



int main () {

    int T, n, x;

    cin >> T;

    while(T--){

        cin >> n;
        int menor = 100;
        int maior = -1;
        for(int i=0; i<n; i++){
            cin >> x;
            menor = min(menor, x);
            maior = max(maior, x);
        }

        cout << 2*(maior - menor) << "\n";

    }
    return 0;
}