#include <bits/stdc++.h>
#define g 9.80665
#define pi 3.14159

int main() {

    double h, a, V, X, vx, t; //trans angulo em radiano a *= (pi/180)
    int n, p1, p2;

    // para achar o alcance horizontal, usar Sx = So + vx*t
    // vx = v * cos a
    // t = (v * sen(a)) + (sqrt((v*v*sen(a)*sen(a)) + 2*g*h)) / g

    while(scanf("%lf", &h) != EOF) {

        scanf("%d %d", &p1, &p2);

        scanf("%d", &n);

        for(int i = 0; i<n; i++) {
        
            scanf("%lf %lf", &a, &V);
            a *= (pi/180);

            //velocidade horizontal
            vx = V * cos(a);
            //tempo
            t = ((V * sin(a)) + (sqrt((V*V*sin(a)*sin(a)) + (2*g*h))))/ g;
            //Alcance horizontal
            X = vx * t;

            if(X>=p1 && X<=p2)
                printf("%.5lf -> DUCK\n", X);
            else printf("%.5lf -> NUCK\n", X);
        
        }
    }

    return 0;
}