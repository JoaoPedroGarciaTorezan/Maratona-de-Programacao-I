#include <bits/stdc++.h>
#define quant_l 12

int main() {

    int h, vm;
    float l;

    scanf("%d %d", &h, &vm);

    // Distancia percorrida em km
    l = vm * h;

    l /= quant_l;

    // Litros gastos nesta distância
    printf("%.3f\n", l);

    return 0;
}