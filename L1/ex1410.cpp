#include <bits/stdc++.h>

using namespace std;

int main () {

    int A, D, *ult_A, *ult_D;
    int *B,*C;

    cin >> A >> D;

    while(A && D) {

        B = new int[A];

        C = new int[D];

        for (int i=0; i<A; i++) 
            cin >> B[i];

        ult_A = min_element(B, B + A);

        for (int i=0; i<D; i++) 
            cin >> C[i];

        sort(C, C + D);

        if(*ult_A < C[1])
            cout << "Y\n";
        else cout << "N\n";

        cin >> A >> D;
       
    }

    return 0;
}