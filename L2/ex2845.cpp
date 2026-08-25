#include <bits/stdc++.h>

using namespace std;

bool coprimos(int x, int y) {

    int resto = 1;
    
    while(resto) {
        resto = x % y;
        x = y;
        y = resto;
    }

    if(x == 1)
        return true;
    else return false;
}

int main () {

    int N, a, res;
    vector<int> A;
    bool cop=true;

    cin >> N;

    for(int i=0; i<N; i++) {

        cin >> a;
        A.push_back(a);

    }

    auto maior_it = max_element(A.begin(), A.end());
    int maior = *maior_it;
    res = maior + 1;

    while(res < 10000) {
        
        for(int i=1; i<N; i++) {
            if(!coprimos(res,A[i])) {
                cop = false;
                break;
            }
        }
        if(!cop)
            res++;
        else break;
    }

    cout << res << "\n";

    return 0;
}