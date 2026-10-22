#include <bits/stdc++.h>

using namespace std;

int main () {

    int B, Z, N, M;
    bool pos;
    cin >> B >> Z;

    while(B || Z) {

        cin >> N >> M;
        pos = true;
        vector<int> beto(B), zeca(Z);

        for(int i=0; i<B; i++) cin >> beto[i];
        for(int i=0; i<Z; i++) cin >> zeca[i];

        stable_sort(beto.begin(), beto.end());
        stable_sort(zeca.begin(), zeca.end());

        for(int i=1; i<=N; i++){
            if(beto[B-i] > zeca[0]) pos = false;
        }

        if(pos) cout << "YES\n";
        else cout << "NO\n";
        

        cin >> B >> Z;
    }
    return 0;
}
