#include <bits/stdc++.h>

using namespace std;

int main () {

    int H1, M1, H2, M2, min1, min2, res;

    cin >> H1 >> M1 >> H2 >> M2;

    while(H1 || M1 || H2 || M2){

        min1 = (H1 * 60) + M1;
        min2 = (H2 * 60) + M2;

        if((H1 > H2) || (H1 == H2 && M1 > M2))
            res = 1440 + (min2 - min1);
        else res = min2 - min1;

        cout << res << "\n";

        cin >> H1 >> M1 >> H2 >> M2;
    }
    return 0;
}