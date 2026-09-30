#include <bits/stdc++.h>

using namespace std;

int main(){
    string msg, crib;
    cin >> msg >> crib;
    int n = msg.size(), m = crib.size();
    int cont=0;
    for(int i=0; i+m<=n; i++){
        bool ok = true;
        for(int j=0; j<m; j++){
            if(msg[i+j]==crib[j]){
                ok = false;
                break;
            }
        }
        if(ok){
            cont++;
        }
    }
    cout << cont << "\n";

    return 0;
}