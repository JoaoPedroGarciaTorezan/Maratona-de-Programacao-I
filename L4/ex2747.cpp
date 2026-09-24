#include <bits/stdc++.h>

using namespace std;

int main () {

    string res;
    for(int i=0; i<39; i++){
        cout << "-";
    }
    cout << "\n";
    for(int i=0; i<5; i++){ 

        for(int j=1;j <=39; j++){
            if(j == 1 || j == 39)
                cout << "|";
            else cout << " ";
        }
        cout << "\n";
    }
    for(int i=0; i<39; i++){
        cout << "-";
    }
    cout << "\n";

    return 0;
}