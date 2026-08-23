#include <bits/stdc++.h>

using namespace std;

typedef struct {
    int num;
    string s;
} tupla;

long long int k_fatorial(int N, int K) {
    if(N <= 1)
        return 1;

    return N * k_fatorial(N-K, K);
}

int main () {

    int T;
    tupla N;


    cin >> T;

    while(T--) {

        cin >> N.num >> N.s;

        cout << k_fatorial(N.num,N.s.size()) << "\n";

    }

    return 0;
}