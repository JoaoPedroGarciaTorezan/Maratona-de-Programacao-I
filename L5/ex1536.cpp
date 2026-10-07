#include <bits/stdc++.h>

using namespace std;

int main () {

    int N, pont1, pont2, saldo1, saldo2, fora1, fora2;
    string partida;

    cin >> N;
    cin.ignore();

    while(N--) {

        pont1 = 0;
        saldo1 = 0;
        fora1 = 0;
        pont2 = 0;
        saldo2 = 0;
        fora2 = 0;
    
        for(int i=0; i<2; i++){

            getline(cin, partida);

            stringstream ss(partida);
            string res1, x, res2;

            ss >> res1 >> x >> res2;


            if(!i) {
                pont1 += stoi(res1);
                pont2 += stoi(res2);
                fora2 += stoi(res2);
            }
            else {
                pont1 += stoi(res2);
                pont2 += stoi(res1);
                fora1 += stoi(res2); 
            }

        }

        saldo1 = pont1 - pont2;
        saldo2 = pont2 - pont1;

        if(pont1 > pont2) 
            cout << "Time 1\n";
        else if(pont2 > pont1)
            cout << "Time 2\n";
        else if(saldo1 > saldo2)
            cout << "Time 1\n";
        else if(saldo2 > saldo1)
            cout << "Time 2\n";
        else if(fora1 > fora2)
            cout << "Time 1\n";
        else if(fora2 > fora1)
            cout << "Time 2\n";
        else cout << "Penaltis\n";

    }
    return 0;
}