#include <bits/stdc++.h>

using namespace std;

int main () {

    int N, X;
    bool primo;

    cin >> N;

    while (N--) {

        cin >> X;
        primo = true;

        for(int i=1; i<=X; i++){
            
            if(X % i == 0 && (i !=1 && i != X))
                primo = false;
        }

        if(primo)
            cout << X << " eh primo\n";
        else cout << X << " nao eh primo\n";
    }
    return 0;
}