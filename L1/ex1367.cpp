#include <bits/stdc++.h>

using namespace std;


int main () {

    int N, T, S, P;
    char I;
    string J;

    cin >> N;

    while(N) {

        map<char,int> inc;
        S=0; P=0;

        for (int i=0; i<N; i++) {
            cin >> I >> T >> J;
            if(J=="correct" && inc[I] == 0) {
                S++;
                P += T;
            }
            else if(J=="correct" && inc[I] > 0) {
                P += T + 20*inc[I];
                S++;
            }
            else{
                inc[I]++;
            }
        }
        cout << S << " " << P << "\n";

        cin >> N;

    }


    return 0;
}