#include <bits/stdc++.h>

using namespace std;

int main () {

    string p1, p2, p3, res;
    map<string,map<string,string>> vert, invert;

    vert["ave"]["carnivoro"] = "aguia";
    vert["ave"]["onivoro"] = "pomba";
    vert["mamifero"]["onivoro"] = "homem";
    vert["mamifero"]["herbivoro"] = "vaca";

    invert["inseto"]["hematofago"] = "pulga" ;
    invert["inseto"]["herbivoro"] = "lagarta";
    invert["anelideo"]["hematofago"] = "sanguessuga";
    invert["anelideo"]["onivoro"]  = "minhoca" ;

    cin >> p1;
    cin >> p2; 
    cin >> p3;

    if(p1 == "vertebrado"){
        res = vert[p2][p3];
    }
    else res = invert[p2][p3];

    cout << res << "\n";
    return 0;
}