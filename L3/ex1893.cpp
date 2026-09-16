#include <bits/stdc++.h>

using namespace std;

int main () {

    int a, b;

    cin >> a >> b;

    if(0<= b && b <= 2)
        cout << "nova\n";
    else if(97 <= b && b <= 100)
        cout << "cheia\n";
    else if((3 <= b && b <= 96) && (b - a) > 0)
        cout << "crescente\n";
    else if((3 <= b && b <= 96) && (b - a) < 0)
        cout << "minguante\n";

    return 0;
}