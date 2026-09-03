#include <bits/stdc++.h>

using namespace std;

long long r(int x, int y) {
    return (3*x)*(3*x) + y*y; 
}

long long b(int x, int y) {
    return 2*x*x + (5*y)*(5*y);
}

long long c(int x, int y) {
    return -100*x + y*y*y;
}

int main () {

    int N, x, y;
    long long R, B, C;

    cin >> N;

    while(N--) {

        cin >> x >> y;

        R = r(x,y);
        B = b(x,y);
        C = c(x,y);

        if(R > B && R > C)
            cout << "Rafael ganhou\n";
        else if(B > R && B > C)
            cout << "Beto ganhou\n";
        else if(C > R && C > B)
            cout << "Carlos ganhou\n";

    }

    return 0;
}