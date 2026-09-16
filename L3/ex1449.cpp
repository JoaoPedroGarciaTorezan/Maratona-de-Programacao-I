#include <bits/stdc++.h>

using namespace std;

int main () {

    int T, M, N;
    string j, p, mus, res;
    map<string,string> dc;

    cin >> T;

    while(T--) {

        cin >> M >> N;
        cin.ignore();
        res.clear();
        dc.clear();

        for(int i=0; i<M; i++) {

            getline(cin, j);

            getline(cin, p);

            dc.insert(make_pair(j, p)); //insere par chave, valor no dicionário
        }

        for(int i=0; i< N; i++) {

            getline(cin, mus);

            stringstream ss(mus);
            string sub;

            bool first = true;
            while(ss >> sub) {
                
                if(!first) res += " ";
                first = false;

                auto it = dc.find(sub);

                if(it == dc.end())
                    res += sub;
                else res += it->second;
            }

            res += "\n";
            mus.clear();

        }
        cout << res << "\n";

    }

    return 0;
}