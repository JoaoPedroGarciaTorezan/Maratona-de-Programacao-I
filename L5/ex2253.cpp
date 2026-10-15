#include <bits/stdc++.h>

using namespace std;

int main () {

    string S;
    int maius, min, num;
    bool val;

    while(getline(cin, S)){

        maius = 0;
        min = 0;
        num = 0;
        val = true;

        if(S.size() < 6 || S.size() > 32)
            val = false;
        else {

            for(char c: S){
                if((int) c > 64 && (int)c < 91)
                    maius++;
                else if((int) c > 96 && (int)c < 123)
                    min++;
                else if((int) c > 47 && (int)c < 58)
                    num++;
                else val = false;
                
            }

            if(!maius || !min || !num) val = false;
        }

        if(val)
            cout << "Senha valida.\n";
        else cout << "Senha invalida.\n";

    }
    return 0;
}