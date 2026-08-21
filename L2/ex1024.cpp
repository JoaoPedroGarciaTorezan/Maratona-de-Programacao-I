#include <bits/stdc++.h>

using namespace std;

//isupper(letra) -> verifica se o caractere é Maisculo
//islower(letra) -> verifica se o caractere é Minusculo

int main () {

    int N;
    char **word;
    stack<char> inv_word;
    
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // limpa o \n residual

    word = new char*[N];

    for (int i=0; i< N; i++) {
        word[i] = new char[1000];
        cin.getline(word[i], 1000);
    }

    for(int k=0; k < N; k++) {


        for(int i=0; i< strlen(word[k]); i++) {
            if(isupper(word[k][i]) || islower(word[k][i]))
                word[k][i] += 3;
        }

        for(int i=0; i< strlen(word[k]); i++) {
            inv_word.push(word[k][i]);
        }

        int i=0;
        while(!inv_word.empty()) {
            word[k][i]= inv_word.top();
            inv_word.pop();
            i++;
        }

        int j = strlen(word[k])/2;
        for(j; j < strlen(word[k]); j++) {
            word[k][j]--;
        }

        cout <<word[k] << "\n";

    }

    return 0;
}