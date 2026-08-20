#include <bits/stdc++.h>

long long int fatorial(int x) {
    if(x == 1 || x == 0)
        return 1;
    
    return x * fatorial(x-1);
}

int main() {

    int M, N;
    long long int res;

    while(scanf(" %d %d", &M, &N) != EOF) {
        res = fatorial(M) + fatorial(N);
        printf("%lld\n", res);
    }


    return 0;
}