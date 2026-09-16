#include <bits/stdc++.h>

using namespace std;

int main () {

    double A, B, C;
    vector<double> t;

    cin >> A >> B >> C;

    t.push_back(A);
    t.push_back(B);
    t.push_back(C);

    sort(t.begin(), t.end());
    reverse(t.begin(), t.end());

    if(t[0] >= t[1] + t[2])
        cout << "NAO FORMA TRIANGULO\n";
    else {
        if(t[0]*t[0] == t[1]*t[1] + t[2]*t[2])
            cout << "TRIANGULO RETANGULO\n";
        else if(t[0]*t[0] > t[1]*t[1] + t[2]*t[2])
            cout << "TRIANGULO OBTUSANGULO\n";
        else if(t[0]*t[0] < t[1]*t[1] + t[2]*t[2])
            cout << "TRIANGULO ACUTANGULO\n";
        if(t[0] == t[1] && t[1] == t[2])
            cout << "TRIANGULO EQUILATERO\n";
        else if(t[0] == t[1] || t[1] == t[2] || t[0] == t[2])
            cout << "TRIANGULO ISOSCELES\n";
    }

    return 0;
}