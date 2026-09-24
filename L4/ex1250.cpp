#include <bits/stdc++.h>

using namespace std;
 
int main () {

    int N, T, tiros[50], ating;
    string pulos;

    cin >> N;

    while(N--) {

        cin >> T;
        ating=0;
        memset(tiros, 0, sizeof(tiros));

        for(int i=0; i<T; i++) {

            cin >> tiros[i];

        }

        cin >> pulos;

        int i=0;
        for(char p: pulos){

            if(p == 'S'){
                if(tiros[i] == 1 || tiros[i] == 2){
                    ating++;
                }
            }
            else{
                if(tiros[i] > 2)
                    ating++;
            }

            i++;
        }

        cout << ating << "\n";
    }
    return 0;
}