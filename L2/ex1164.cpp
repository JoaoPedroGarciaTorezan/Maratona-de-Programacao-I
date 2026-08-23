#include <bits/stdc++.h>

using namespace std;

int main () {

    int N, X, perf;

    cin >> N;

    while(N--) {

        perf=0;

        cin >> X;

        for(int i=X-1; i > 0; i--) {
        
            if(X % i == 0)
                perf += i;
        }

        if(perf == X)
            cout << X << " eh perfeito\n";
        else 
            cout << X << " nao eh perfeito\n";

            
    }
    return 0;
}