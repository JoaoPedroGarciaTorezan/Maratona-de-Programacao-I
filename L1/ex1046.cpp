#include <bits/stdc++.h>

int main() {

    int ini, fim, dur;

    scanf("%d %d", &ini, &fim);

    if(ini == fim)
        printf("O JOGO DUROU 24 HORA(S)\n");
    else if(ini < fim) {
        dur = fim - ini;
        printf("O JOGO DUROU %d HORA(S)\n", dur);
    }
    else {
        dur = 24 + fim - ini;
        printf("O JOGO DUROU %d HORA(S)\n", dur);
    }

    return 0;
}