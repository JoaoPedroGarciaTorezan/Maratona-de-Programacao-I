#include <bits/stdc++.h>

using namespace std;

map<char,char> cria_dicionario() {

    map<char,char> d;
    string cert = "`1234567890-QWERTYUIOP[]ASDFGHJKL;ZXCVBNM,.";
    string t = "1234567890-=WERTYUIOP[]\\SDFGHJKL;'XCVBNM,./";

    for(int i=0; i<t.length(); i++){
        d.insert(make_pair(t[i],cert[i]));
    }

    return d;
}

int main () {

    string f, res;
    map<char,char> dic;

    dic = cria_dicionario();

    while(getline(cin, f)) {

        res.clear();

        for(char e: f){
            if(e == ' ') res += e;
            else {
            
                auto it = dic.find(e);
                if(it != dic.end()) 
                    res += it->second;
            }
        }

        cout << res << "\n";
    }


    return 0;
}