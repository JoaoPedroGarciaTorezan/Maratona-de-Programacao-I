#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    deque<int> pilha;
    vector<int> descartadas;

    cin >> n;

    while(n){

        descartadas.clear();
        pilha.clear();

        for(int i=0; i<n; i++){

            pilha.push_back(i+1);
        }

        while(pilha.size() >= 2){

            int des = pilha.front();
            pilha.pop_front();
            descartadas.push_back(des);

            int novo_top = pilha.front();
            pilha.push_back(novo_top);
            pilha.pop_front();

        }

        cout << "Discarded cards:";
        bool first = true;
        for(int d: descartadas){
            if(!first) cout << ",";
            first = false;
            
            cout << " " << d;
        }

        cout << "\n";
        cout << "Remaining card: " << pilha.front() << "\n";

        cin >> n;
    }
    return 0;
}