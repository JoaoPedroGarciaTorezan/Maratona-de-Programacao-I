#include <bits/stdc++.h>

using namespace std;

int main () {

    string CPF;
    long long mult;
    int resto;
    bool val;

    while(cin >> CPF) {

        val = true;
        mult = 0;
        int j=1;
        for(char i : CPF) {
            if(i == '-') break;
            if(i != '.') {
                mult += (i - '0') * j;
                j++;
            }
            
        }
        

        resto = mult % 11;
        if(resto == 10)
            resto = 0;
        if(resto != (CPF[12] - '0'))
            val = false;

        mult = 0;
        j = 9;
        for(char i: CPF){
            if(i == '-') break;
            if(i != '.') {
                mult += (i - '0' ) * j;
                j--;
            }
        }

        resto = mult % 11;
        if(resto == 10)
            resto = 0;
        if(resto != (CPF[13] - '0'))
            val = false;

        if(val)
            cout << "CPF valido\n";
        else cout << "CPF invalido\n";

    }

    return 0;
}