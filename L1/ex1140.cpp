#include <bits/stdc++.h>

using namespace std;

int main () {

    char l;
    bool resp;
    string f;

    getline(cin, f);

    while(f != "*") {

        transform(f.begin(), f.end(), f.begin(), ::tolower);

        resp = true;

        l = f[0];
        
        for(int i = 0; i < f.length(); i++) {

            if (f[i] == ' ') {
                if(f[i+1] != l){
                    resp = false;
                    break;
                }
            }
        }

        if(resp == true)
            cout << "Y\n";
        else  cout << "N\n";
        getline(cin, f);
    }

    return 0;
}