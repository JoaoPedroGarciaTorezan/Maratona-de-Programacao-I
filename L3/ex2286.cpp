#include <bits/stdc++.h>

using namespace std;

int main () {

    int N, A, B, j=1;
    string p1, p2;

    cin >> N;

    while(N) {

        cin >> p1 >> p2;

        cout << "Teste " << j << "\n";

        for(int i=0; i< N; i++) {
            cin >> A >> B;

            if((A + B) % 2 == 0)
                cout << p1 << "\n";
            else cout << p2 << "\n";
        }

        cout << "\n";

        cin >> N;
        
        j++;

    }

    return 0;
}