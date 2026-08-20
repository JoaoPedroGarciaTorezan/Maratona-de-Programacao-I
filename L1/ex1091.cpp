#include <bits/stdc++.h>

int main () {

    int K, M, N, X, Y;

    scanf("%d", &K); 
    
    while(K) {

        scanf("%d %d", &N, &M);

        for(int i=0; i<K; i++){

            scanf("%d %d", &X, &Y);

            if(X==N || Y==M)
                printf("divisa\n");
            else {
                if (X > N) {
                    if(Y > M)
                        printf("NE\n");
                    else printf("SE\n");
                }
                else { 
                    if (Y>M) 
                        printf("NO\n");
                    else
                        printf("SO\n");
                }
            }
        }
        scanf("%d", &K); 
    }

    return 0;
}