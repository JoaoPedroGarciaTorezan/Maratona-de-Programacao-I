#include <bits/stdc++.h>

using namespace std;

int main () {

    int A, C, lazer, anterior;
    int X;
    multiset<int> alt;

    cin >> A >> C;

    while(A || C){

        lazer =0;
        anterior = A;


        for(int i=0; i<C; i++){

            cin >> X;
            if(X < anterior) {
                lazer += anterior - X;
            }
            anterior = X;

        }

        cout << lazer << "\n";

        cin >> A >> C;

    }
    return 0;
}