#include <bits/stdc++.h>

int main() {

    int div;
    float val, notas[6] = {100, 50, 20, 10, 5, 2};
    float moedas[6] = {1, 0.5, 0.25, 0.10, 0.05, 0.01};
    
    scanf("%f", &val);

    printf("NOTAS:\n");
    for(int i=0; i<6; i++) {
        div = (int) val/notas[i];
        printf("%d nota(s) de R$ %.2f\n", div, notas[i]);
        val -= div * notas[i];
    }

    printf("MOEDAS:\n");
    val = (int) round(val*100);
    for(int i=0; i<6; i++) {
        moedas[i] *= 100;

        div = (int) val/moedas[i];
        printf("%d moeda(s) de R$ %.2f\n", div, moedas[i]/100);
        val -= div * moedas[i];   
    }

    return 0;
}