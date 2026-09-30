#include <bits/stdc++.h>

using namespace std;

struct pessoa {
    string nome;
    string cor;
    string tamanho;
};

bool ordena(const pessoa& a, const pessoa& b) {
    if(a.cor != b.cor)
        return a.cor < b.cor;

    if(a.tamanho != b.tamanho)
        return a.tamanho > b.tamanho;

    return a.nome < b.nome;

}


int main () {

    int N;
    pessoa p;
    string res, nome, cor, tamanho;
    vector<pessoa> list_pes;
    bool primeiro = true;

    cin >> N;
    cin.ignore();

    while(N){

        list_pes.clear();

        for(int i=0; i<N; i++) {

            getline(cin, nome);
            cin >> cor >> tamanho;
            cin.ignore();

            list_pes.push_back({nome, cor, tamanho});
            
        }

        sort(list_pes.begin(), list_pes.end(), ordena);

        if (!primeiro)
            cout << "\n";
        primeiro = false;

        for(int i=0; i<N; i++) {
            
            res += list_pes[i].cor + " " + list_pes[i].tamanho + " " + list_pes[i].nome;

            cout << res << "\n";

            res.clear();
        }

        cin >> N;
        cin.ignore();


        
    }
    return 0;
}