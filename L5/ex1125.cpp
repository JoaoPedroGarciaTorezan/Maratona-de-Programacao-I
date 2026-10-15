#include <bits/stdc++.h>

using namespace std;

struct piloto{
    int num;
    int pos;
    int pont;
};

bool ordena(const piloto &a,const piloto &b) {
    return a.pos < b.pos;
}

int main () {

    int G, P, S, K;
    cin >> G >> P;

    while(G || P) {
       
        vector<piloto> vet;
        for(int i=1; i<=P; i++){
            int pos;
            cin >> pos;
            piloto p;
            p.num = i;
            p.pos = pos;
            p.pont = 0;
            vet.push_back(p);
        }

        for(piloto p: vet)
            cout << p.num << " ";
        cout << "\n";

        cin >> S;

        cout << "S == " << S << '\n';

        sort(vet.begin(), vet.end(), ordena);

        

        int max_pont, max_pil;
        for(int i=0; i<S; i++){
            cin >> K;
            for(int j=0; j<K; j++){
                cin >> vet[j].pont;
                if(!j){
                    max_pont = vet[j].pont;
                    max_pil = vet[j].num;
                }
                else if(max_pont < vet[j].pont) {
                    max_pont = vet[j].pont;
                    max_pil = vet[j].num;
                }

            }

            cout << max_pil << "\n";

            
        }

        

        cin >> G >> P;


    }
    return 0;
}