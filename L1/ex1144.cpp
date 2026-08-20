#include <bits/stdc++.h>

int main() {

    int N;
    double i=1;

    scanf("%d", &N);

    while(N--) {

        printf("%.0f %.0f %.0f\n", pow(i,1), pow(i,2), pow(i,3));

        printf("%.0f %.0f %.0f\n", pow(i,1), pow(i,2)+1, pow(i,3)+1);
        
        i++;

    }
    return 0;
}