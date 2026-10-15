#include <bits/stdc++.h>

using namespace std;

int main () {

    int N, B;

    cin >> N >> B;

    while(N || B){

        set<int> setB;
        vector<int> b(B), dar(N + 1, false);
        bool da = true;

        for(int i=0; i<B; i++) {
            cin >> b[i];
        }
        
        for(int i=0; i<B; i++){
            for(int j=0; j<B; j++) {
                int dif = fabs(b[i] - b[j]);
                dar[dif] = true;
            }
        }

        for(bool c: dar) 
            if(!c) da = false;

        if(da) cout << "Y\n";
        else cout << "N\n";

        cin >> N >> B;

    }
    return 0;
}