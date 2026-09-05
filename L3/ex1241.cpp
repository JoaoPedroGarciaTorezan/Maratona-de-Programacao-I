#include <bits/stdc++.h>

using namespace std;

int main () {

    int N;
    bool enc;
    string A, B;

    cin >> N;

    while(N--) {

        enc=true;
        cin >> A >> B;

        if(A.size() >= B.size()) {

            reverse(A.begin(), A.end());
            reverse(B.begin(), B.end());
            
            int i = B.size();
            int j=0;
            while(i--) {
                if(A[j] !=B[j])
                    enc=false;
                j++;
            }
        }
        else enc = false;

        if(enc)
            cout << "encaixa\n";
        else cout << "nao encaixa\n";

        A.clear();
        B.clear();

    }
 
    return 0;
}