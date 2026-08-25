#include <bits/stdc++.h>

using namespace std;

int main() {

    int X1, Y1, X2, Y2, N, X, Y, met, teste=1;

    cin >> X1 >> Y1 >> X2 >> Y2;

    while(X1 || Y1 || X2 || Y1) {

        met=0;
        cin >> N;

        while(N--) {

            cin >> X >> Y;

            if((X1 <= X && X <= X2) && (Y2 <= Y && Y <= Y1))
                met++;
        }

        printf("Teste %d\n", teste);
        cout << met << "\n";

        teste++;

        cin >> X1 >> Y1 >> X2 >> Y2;
    }


    return 0;
}
