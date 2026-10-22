#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    string linha;

    getline(cin, linha);
    T = stoi(linha);

    for (int caso = 0; caso < T; caso++) {
        if (caso > 0) cout << "\n";   

        
        do {
            if (!getline(cin, linha)) return 0;
            
        } while (linha.empty());
        int n = stoi(linha);

        vector<string> nomes(n + 1);
        for (int i = 1; i <= n; i++) {
            getline(cin, nomes[i]);
            
        }

        vector<vector<int>> votos;
        while (getline(cin, linha)) {
            
            if (linha.empty()) break;   

            stringstream iss(linha);
            vector<int> voto;
            int x;
            while (iss >> x) voto.push_back(x);

            if (!voto.empty()) votos.push_back(voto);
        }
        int tot_votos = votos.size();

        vector<bool> eliminado(n + 1, false);
        vector<int> contagem(n + 1);

        while (true) {
            
            fill(contagem.begin(), contagem.end(), 0);
            for (auto& voto : votos) {
                for (int x : voto) {
                    if (!eliminado[x]) {
                        contagem[x]++;
                        break;
                    }
                }
            }

            
            int vencedor = -1;
            for (int i = 1; i <= n; i++) {
                if (!eliminado[i] && contagem[i] * 2 > tot_votos) {
                    vencedor = i;
                    break;
                }
            }
            if (vencedor != -1) {
                cout << nomes[vencedor] << "\n";
                break;
            }

            
            int menor = INT_MAX, maior = -1;
            for (int i = 1; i <= n; i++) {
                if (eliminado[i]) continue;
                menor = min(menor, contagem[i]);
                maior = max(maior, contagem[i]);
            }

            
            if (menor == maior) {
                for (int i = 1; i <= n; i++)
                    if (!eliminado[i]) cout << nomes[i] << "\n";
                break;
            }

            
            for (int i = 1; i <= n; i++)
                if (!eliminado[i] && contagem[i] == menor)
                    eliminado[i] = true;
        }
    }
    return 0;
}