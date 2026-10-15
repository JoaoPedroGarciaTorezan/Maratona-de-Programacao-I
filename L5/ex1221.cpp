#include <bits/stdc++.h>

using namespace std;

int main () {

    int N, X;
    bool primo;

    cin >> N;

    while(N--){

        primo = true;
        cin >> X;

        for(int i=2; i<sqrt(X); i++) {
            if(X % i == 0) {
                primo = false;
                break;
            }
        }
                
        
        if(primo) cout << "Prime\n";
        else cout << "Not Prime\n";
        


    }
    return 0;
}