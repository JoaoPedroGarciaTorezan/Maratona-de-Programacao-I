#include <bits/stdc++.h>

using namespace std;

int main () {

    int N, A, B, C, D, E;
    int R[5];

    cin >> N;

    while(N) {

        for(int i=0; i<N; i++) {
            
            for (int i=0; i<5 ;i++){
                cin >> R[i];
            }

            //todas as respostas brancas
            int count=0;
            for (int i=0; i<5 ;i++){
                if(R[i] <= 127)
                    count++;
            }
        
            //mais de uma alternativa marcada
            int zeros = 0;
            for (int i=0; i<5 ;i++) {
                if(R[i] <= 127){
                    zeros++;
                }
            }

            int correct;
            for(int i=0; i<5; i++){
                if(R[i] <= 127) 
                    correct = i;
            }

            if(zeros > 1 || !count){
                cout << "*\n";
            }
            else {
                switch (correct)
                {
                case 0:
                    cout << "A\n";
                    break;
                case 1:
                    cout << "B\n";
                    break;
                case 2:
                    cout << "C\n";
                    break;
                case 3:
                    cout << "D\n";
                    break;
                case 4:
                    cout << "E\n";
                    break;
                }
            }
            
        }
        
        cin >> N;
    }
    return 0;
}