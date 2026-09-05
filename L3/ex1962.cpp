#include <bits/stdc++.h>
#define A 2015

using namespace std;

int main () {

    int N;
    long long T, R;

    cin >> N;

    while(N--) {

        cin >> T;

        R = A - T;
        if(R <= 0){
            R *= -1;
            cout << R + 1 << " A.C.\n";
        }
        else{
            cout << R << " D.C.\n";
        }
    }

    return 0;
}