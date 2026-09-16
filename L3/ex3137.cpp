#include <bits/stdc++.h>

using namespace std;

int quantidade_digInt(int m){

    int c=0;

    if(m == 0) return 1;
    while(m > 0){
        c++;
        m /= 10;
    }

    return c;
}

long long calcula_digitos(long long n, int tam) {

    if(n <= 9)
        return n;

    tam = quantidade_digInt(n);

    return calcula_digitos(n-1,tam) + tam;
}

int main () {

    long long P, dig, tam;

    cin >> P;

    tam = quantidade_digInt(P);

    if(tam == 1)
        dig = calcula_digitos(tam*P, tam);
    else dig = calcula_digitos(P, tam);

    cout << dig << "\n";

    return 0;
}