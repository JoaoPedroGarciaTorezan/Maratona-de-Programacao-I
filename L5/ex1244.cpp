#include <bits/stdc++.h>

using namespace std;

bool ordena_dec_seg(const tuple<string,int>& a, const tuple<string,int>& b){
    return get<1>(a) > get<1>(b);
}

int main () {

    int N;
    string frase;
    vector<tuple<string, int>> vet;

    cin >> N;
    cin.ignore();

    while(N--){

        frase.clear();
        vet.clear();
        getline(cin, frase);

        stringstream ss(frase);
        string x;

        while(ss >> x){

            vet.push_back({x, x.size()});
        }

        stable_sort(vet.begin(), vet.end(), ordena_dec_seg);

        bool first = true;
        for(auto [c, v]: vet){
            if(!first) cout << " ";
            first = false;
            cout << c;
        }

        cout << "\n";

    }
    return 0;
}