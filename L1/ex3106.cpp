#include <bits/stdc++.h>

using namespace std;

//Combinação de S, 3

int main() {

    int N, *S, R;

    cin >> N;

    S = new int[N];

    for (int i=0; i<N; i++) {
        cin >> S[i];
        S[i] /= (int) 3;
    }

    R = accumulate(S, S + N, 0);

    R *= 3;

    cout << R << "\n";

    delete[] S;

    return 0;
}