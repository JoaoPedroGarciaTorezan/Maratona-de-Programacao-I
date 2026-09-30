#include <bits/stdc++.h>

using namespace std;

int main(){
    int assinatura, instancia = 1;
    while(cin >> assinatura && assinatura!=0){
        string painel;
        cin >> painel;
        string a = to_string(assinatura);
        if(instancia>1){
            cout << "\n";
        }
        cout << "Instancia " << instancia++ << "\n";
        if(painel.find(a) != string::npos){
            cout << "verdadeira\n";
        }
        else{
            cout << "falsa\n";
        }
    }

    return 0;
}