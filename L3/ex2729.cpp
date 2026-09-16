#include <bits/stdc++.h>

using namespace std;

int main () {

    int N;
    set<string> lista;
    string item;
    string res;

    cin >> N;
    cin.ignore();

    while(N--) {

        getline(cin, item);
        lista.clear();
        res.clear();

        stringstream ss(item);
        string sub;

        while(ss >> sub){

            lista.insert(sub);

            sub.clear();
        }

        bool first = true;
        for(string s: lista){
            
            if(!first) res += " ";
            first = false;

            res += s;
        }
        cout << res << "\n";

    }

    return 0;
}