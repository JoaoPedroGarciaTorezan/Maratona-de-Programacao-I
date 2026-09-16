#include <bits/stdc++.h>

using namespace std;

int main () {

    int N, pontA=0, pontB=0;
    vector<int> A, B;
    map<int,int> cartas;

    //monto o dicionário da força das cartas do truco
    for(int i=1; i<=10; i++){
        
        if(i<=3){
            cartas.insert(make_pair(i, 100+i));
        }
        if(4 <= i && i<=7){
            cartas.insert(make_pair(i,i));
        }
        if(i> 7){
            if(i == 8) 
                cartas.insert(make_pair(i+3,50));
            if(i == 9)
                cartas.insert(make_pair(i+3,50-i));
            if(i==10)
                cartas.insert(make_pair(i+3,50+i));
        }
    }

    cin >> N;

    while(N--) {

        A.clear();
        B.clear();

        for(int i=0; i<3; i++) {
            int a;
            cin >> a;
            A.push_back(a);
        }

        for(int i=0; i< 3; i++) {
            int b;
            cin >> b;
            B.push_back(b);
        }

        int tempA=0;
        int tempB=0;
        for(int i=0; i<3; i++) {
            
            if(cartas[A[i]] == cartas[B[i]]) tempA++;
            else if(cartas[A[i]] > cartas[B[i]]) tempA++;
            else tempB++;
        }

        if(tempA > tempB)
            pontA++;
        else pontB++;
    
    }

    cout << pontA << " " << pontB << "\n";

    return 0;
}