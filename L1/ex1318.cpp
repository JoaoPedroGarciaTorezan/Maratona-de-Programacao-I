#include <bits/stdc++.h>

int is_vetor(int *v, int tam, int x) {

    int c=0;

    for (int i=0; i<tam; i++) {
        if(x==v[i])
            c++;
    }

    if(c==2)
        return 1;
    return 0;

}

int main () {

    int N, M, *T, R=0;

    scanf("%d %d", &N, &M);

    while(N || M) {

        T = (int*)malloc(sizeof(int) * M);

        for (int i=0; i<M; i++) {

            scanf("%d", &T[i]);

            if(is_vetor(T,i+1,T[i]))
                R++;
        }
        printf("%d\n", R);

        scanf("%d %d", &N, &M);

        R=0;

    }


    return 0;
}