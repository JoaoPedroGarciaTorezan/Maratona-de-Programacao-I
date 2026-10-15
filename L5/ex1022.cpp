#include <bits/stdc++.h>

using namespace std;

string numerador(string n1, string d1, string n2, string d2, string op){

    int N1 = stoi(n1);
    int D1 = stoi(d1);
    int N2 = stoi(n2);
    int D2 = stoi(d2);

    if(op=="+")
        return to_string(N1*D2 + N2*D1);
    if(op=="-")
        return to_string(N1*D2 - N2*D1);
    if(op=="*")
        return to_string(N1*N2);
    return to_string(N1*D2);
}

string denominador(string n1, string d1, string n2, string d2, string op){

    int N1 = stoi(n1);
    int D1 = stoi(d1);
    int N2 = stoi(n2);
    int D2 = stoi(d2);

    if(op=="+" || op=="-" || op=="*")
        return to_string(D1*D2);
    return to_string(N2*D1);
}

string simplifica(string N, string D){

    int n = stoi(N);
    int d = stoi(D);
    int s = 1;
    int min;

    if(n < d) min = n; else min = d;

    for(int i=2; i<=d; i++) {
        if(n % i == 0 && d % i == 0)
            s = i;
    }

    return to_string(n / s) + "/" + to_string(d / s);
}

int main () {

    int N;
    double X;
    string exp;

    cin >> N;
    cin.ignore();

    while(N--) {

        getline(cin, exp);

        stringstream ss(exp);
        string N1, f1, D1, op, N2, f2, D2;
        
        ss >> N1 >> f1 >> D1 >> op >> N2 >> f2 >> D2;

        string num = numerador(N1,D1,N2,D2,op);
        string des = denominador(N1,D1,N2,D2,op);

        string res = num + "/" + des;

        string simpl = simplifica(num,des);

        cout << res << " = " << simpl << "\n";

    }
    return 0;
}