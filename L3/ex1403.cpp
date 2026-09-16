#include <bits/stdc++.h>

using namespace std;

int main () {

    int N, M;
    multiset<int> rank;
    map<int,int> cont;
    vector<int> ordem;
    set<int> s;

    cin >> N >> M;

    while(N && M) {

        rank.clear();
        cont.clear();
        ordem.clear();
        s.clear();

        for(int i=0; i<N; i++) {

            for(int j=0; j<M; j++) {
                int e;
                cin >> e;
                rank.insert(e);
            }
        }

        for(int e: rank) {

            auto it = cont.find(e);
            if(it == cont.end()){
                int c = rank.count(e);
                cont.insert(make_pair(e,c));
            }
        }

        for(auto [c,v] : cont){
            ordem.push_back(v);
        }
        sort(ordem.begin(),ordem.end());

        int maior = *max_element(ordem.begin(), ordem.end());
        auto it1 = find(ordem.begin(), ordem.end(), maior);
        while(it1 != ordem.end()) {
            ordem.erase(it1);
            it1 = find(ordem.begin(), ordem.end(), maior);
        }

        //função de comparação para sort do vector
        int secundo = *max_element(ordem.begin(), ordem.end());
        auto it2 = find(ordem.begin(), ordem.end(), secundo);
        for(auto [c,v] : cont){
            if(v == *it2)
                s.insert(c);
        }

        for(int x: s)
            cout << x << " ";
        cout << "\n";

        cin >> N >> M;

    }
    return 0;
}