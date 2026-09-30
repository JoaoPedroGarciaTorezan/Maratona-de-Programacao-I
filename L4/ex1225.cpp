#include <bits/stdc++.h>

using namespace std;

int main () {

    int N, notas[10000];
    int count, soma, media;

    while(cin >> N) {

        count = 1;
        soma = 0;

        for(int i=0; i<N; i++){

            cin >> notas[i];
            soma += notas[i];
            
        }
    
        if(soma%N != 0){
            cout << "-1\n";
        }
        else{
            media = soma/N;
            for(int i=0; i<N; i++){
                if(notas[i] > media){
                    count += fabs(media - notas[i]);
                }
            }

            cout << count << "\n";


        }
    }
    
    return 0;
}