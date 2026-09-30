#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> v(N), c(M);
    for (int &x : v) cin >> x;
    for (int &x : c) cin >> x;

    vector<long long> livre(N, 0);

    for (int j = 0; j < M; j++) {
        int melhor = 0;
        for (int i = 1; i < N; i++) {
            if (livre[i] < livre[melhor])   // "<" estrito: empate fica com o menor índice
                melhor = i;
            }
        livre[melhor] += (long long)v[melhor] * c[j];
    }

    cout << *max_element(livre.begin(), livre.end()) << "\n";
    return 0;
}