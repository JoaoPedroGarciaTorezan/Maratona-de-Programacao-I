#include <bits/stdc++.h>

using namespace std;

int main () {

    float N;

    cin >> N;

    if(0 <= N && N <= 25) 
        cout << "Intervalo [0,25]\n";
    else if(25 < N && N <= 50)
        cout << "Intervalo (25,50]\n";
    else if(50 < N && N<= 75)
        cout << "Intervalo (50,75]\n";
    else if(75 < N && N <= 100)
        cout << "Intervalo (75,100]\n";
    else cout << "Fora de intervalo\n";
    

    return 0;
}