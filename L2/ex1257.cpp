#include <bits/stdc++.h>

using namespace std;

int pos_alfabeto(char l) {

    char alpha='A';
    int pos;

    for(int i=0; i<26; i++) {
        if(alpha+i == l) {
            pos =  i;
            break;
        }
    }

    return pos;
}

int main () {

    int N, L, total;
    string r;

    cin >> N;

    while(N--) {

        total = 0;
        cin >> L;

        for(int i=0; i<L; i++) {
            
            cin >> r;

            for(int j=0; j<r.size(); j++) {
                
                total += pos_alfabeto(r[j]) + i + j;
            }

        }

        cout << total << "\n";
    }
    return 0;
}