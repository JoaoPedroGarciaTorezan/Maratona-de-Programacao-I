#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> painel;
    painel.push_back("FACE");
    int brindes=0;
    while(n--){
        string s = "";
        for(int i=0; i<4; i++){
            char c;
            cin >> c;
            s += c;
        }
        string invertida = s;
        reverse(invertida.begin(), invertida.end());
        if(invertida == painel.back()){
            painel.pop_back();
            brindes++;
            if(painel.empty()){
                painel.push_back("FACE");
            }
        }
        else{
            painel.push_back(s);
        }
    }
    cout << brindes << "\n";

    return 0;
}