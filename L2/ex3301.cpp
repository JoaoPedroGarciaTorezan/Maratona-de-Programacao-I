#include <bits/stdc++.h>

using namespace std;

int main () {

    int H, Z, L;

    cin >> H >> Z >> L;

    if((H < Z && Z < L) || (H > Z && Z > L))
        cout << "zezinho\n";
    else if((H < L && L < Z) || (H > L && L > Z))
        cout << "luisinho\n";
    else if((L < H && H < Z) || (L > H && H > Z))
        cout << "huguinho\n";

    return 0;
}