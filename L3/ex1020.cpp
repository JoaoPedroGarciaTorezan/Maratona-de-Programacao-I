#include <bits/stdc++.h>

using namespace std;

int main () {

    int e, a=0, m=0, d=1;

    cin >> e;

    while(e - 365 > 0) {
        e -= 365;
        a++;
    }

    while(e - 30 > 0){
        e -= 30;
        m++;
    }

    if(m == 12) {
        m = 0;
        a++;
    }

    while(e - 1 > 0){
        e -= 1;
        d++;
    }

    if(d == 30) {
        d = 0;
        m++;
    }

    cout << a << " ano(s)\n" << m << " mes(es)\n" << d << " dia(s)\n";

    return 0;
}