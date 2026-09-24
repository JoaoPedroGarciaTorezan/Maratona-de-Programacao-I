#include <bits/stdc++.h>

using namespace std;

int main () {

    int N; 
    string frase, res;

    cin >> N;
    cin.ignore();

    while(N--){

        res.clear();
        frase.clear();

        getline(cin, frase);

        stringstream ss(frase);
        string sub;

        while(ss >> sub){

            res += sub[0];
        }

        cout << res << "\n";

    }
    return 0;
}