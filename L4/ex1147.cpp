#include <bits/stdc++.h>

using namespace std;

int main(){
    string pos;
    int teste = 1;
    int movL[8] = {2, 2, -2, -2, 1, 1, -1, -1};
    int movC[8] = {1, -1, 1, -1, 2, -2, 2, -2};
    while(cin >> pos && pos!="0"){
        bool atacada[8][8] = {false};
        int linCavalo = pos[0] - '1';
        int colCavalo = pos[1] - 'a';
        for(int i=0; i<8; i++){
            string peao;
            cin >> peao;
            int l = peao[0] - '1';
            int c = peao[1] - 'a';
            if(l-1>=0 && c-1>=0){
                atacada[l-1][c-1] = true;
            }
            if(l-1>=0 && c+1<8){
                atacada[l-1][c+1] = true;
            }
        }
        int cont=0;
        for(int i=0; i<8; i++){
            int l = linCavalo + movL[i];
            int c = colCavalo + movC[i];
            if(l>=0 && l<8 && c>=0 && c<8 && !atacada[l][c]){
                cont++;
            }
        }
        cout << "Caso de Teste #" << teste++ << ": " << cont << " movimento(s).\n";
    }

    return 0;
}