#include <bits/stdc++.h>

using namespace std;

int main () {

    int N, dias;
    float C;

    cin >> N;

    while(N--) {

        dias=0;
        cin >> C;
        while(C > 1){

            dias++;
            C /= 2;
        }

        cout << dias << " dias\n";

    }
    return 0;
}