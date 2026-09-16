#include <bits/stdc++.h>

using namespace std;

int main () {

    int R1, X1, Y1, R2, X2, Y2;
    double d;

    while(cin >> R1 >> X1 >> Y1 >> R2 >> X2 >> Y2){

        d = sqrt((X2 - X1) * (X2 - X1) + (Y2 - Y1)*(Y2 - Y1));

        if(d <= R1 - R2)
            cout << "RICO\n";
        else cout << "MORTO\n";

    }
    return 0;
}