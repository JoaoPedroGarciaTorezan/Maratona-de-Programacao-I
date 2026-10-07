#include <bits/stdc++.h>

using namespace std;

map<char,int> dicHex = {{'1', 1}, 
{'2',2}, {'3', 3}, {'4', 4}, {'5', 5}, {'6', 6}, {'7', 7}, 
{'8', 8}, {'9', 9}, {'a', 10}, {'b', 11}, {'c', 12}, {'d', 13}, {'e', 14}, {'f', 15}};

string dec_para_bin(string X, int tam){

    stack<int> pilha;
    string bin;

    int x = stoi(X);

    while(x >= 1){
        pilha.push(x % 2);
        x /= 2;
    }

    while(!pilha.empty()){
        bin += to_string(pilha.top());
        pilha.pop();
    }

    return bin;
    

}

string dec_para_hex(string X, int tam){

    stack<char> pilha;
    string hex;

    int x = stoi(X);

    while(x >= 1){
        int t = x % 16;
        
        if(t >= 10){
            for(auto [c, v]: dicHex ){
                if(v == t) {
                    pilha.push(c);
                    break;
                }
            }
        }
        else 
            pilha.push(t + '0');
        x /= 16;
    }

    while(!pilha.empty()){
        hex += pilha.top();
        pilha.pop();
    }

    return hex;
    
}

string hex_para_dec(string X, int tam){

    string hex;
    int z = 0;

    for(char car: X){

        z += dicHex[car] * pow(16, tam);
        tam--;

    }

    hex = to_string(z);

    return hex;
    
}


string bin_para_dec(string X, int tam){

    string dec;
    int z = 0;

    for(char car: X){

        z += (car - '0') * pow(2, tam);
        tam--;
    }

    dec += to_string(z);

    return dec;
    
}



int main () {

    int N, i=1;
    string X, Y, dec, hex, bin;

    cin >> N;

    while(N--) {

        cin >> X >> Y;

        dec.clear();
        bin.clear();
        hex.clear();

        int tam = X.size()-1;

        cout << "Case " << i << ":\n";

        if(Y == "bin") {
            dec = bin_para_dec(X, tam);
            hex = dec_para_hex(dec, tam);

            cout << dec << " dec\n";
            cout << hex << " hex\n";
        }
        else if(Y == "dec"){
            hex = dec_para_hex(X, tam);
            bin = dec_para_bin(X, tam);

            cout << hex << " hex\n";
            cout << bin << " bin\n";
        }
        else if(Y == "hex") {

            dec = hex_para_dec(X, tam);
            bin = dec_para_bin(dec, tam);

            cout << dec << " dec\n";
            cout << bin << " bin\n";
        }

        i++;
        cout << "\n";
    }
    return 0;
}