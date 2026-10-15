#include <bits/stdc++.h>

using namespace std;

int main () {

    int N, D, X[500][100];
    bool v;

    cin >> N >> D;

    while(N && D){

        bool ida[N];
        memset(ida, true, sizeof(ida));
        v = false;

        for(int i=0; i<D; i++) {

            for(int j=0; j<N; j++)
                cin >> X[i][j];
        }

        for(int j=0; j<N; j++) {
            for(int i=0; i<D; i++) {
                if(!X[i][j]) ida[j] = false;
            }
        }

        for(bool k: ida)
            if(k == true) v = true;
        
        
        if(v)
            cout << "yes\n";
        else cout << "no\n";
            

        cin >> N >> D;
    }
    return 0;
}