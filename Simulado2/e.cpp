#include <bits/stdc++.h>

using namespace std;

int A(int m, int n){
    if(!m) return n + 1;
    if(m > 0 && !n) return A(m-1, 1);
    
    return A(m-1, A(m, n-1));
}

bool ordena(const tuple<int, int>& a, const tuple<int, int>& b) {
    return get<1>(a) > get<1> (b);
}

int main () {

    int N, count = 0, jog;
    string valor = "abcdefghijklmnopqrstuvwxyz";
    map<char, int> dict;

    for(int i=0; i<26; i++){
        if(count > 9)
            count = 0;
        dict.insert({valor[i], count});
        count++;
    }

    cin >> N;
    while(N) {
        vector<tuple<int,int>> part;
        jog = 1;
        while(N--){
            
            string s1, s2;
            int m1=0, n1=0, m, n;

            cin >> s1;
            cin >> s2;

            for(char a: s1)
                m1 += dict[a];
            for(char b: s2)
                n1 += dict[b];
            
            m = m1%4; n = n1%4;

            int pont = A(m, n);

            part.push_back({jog, pont});
            jog++;
        }

        stable_sort(part.begin(), part.end(), ordena);

        int max = get<1> (part[0]);
        int p_max = get<0> (part[0]);

        cout << "VENCEDOR: ";
        bool first = true;
        for(tuple<int, int> a: part) {
            if(max != get<1>(a)) break;
            if(!first) cout << " - ";
            first = false;
            cout << get<0>(a);
            
        }
        cout << "\n";
        cin >> N;
    }
    return 0;
}