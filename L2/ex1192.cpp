#include <bits/stdc++.h>

using namespace std;

int main () {

    int N, res;
    string teste;

    cin >> N;

    while(N--) {

        res=0;
        cin >> teste;

        if(teste[0] == teste[2])
            res = (teste[0] - '0') * (teste[2] - '0');
        else if (isupper(teste[1]))
            res = (teste[2] - '0') - (teste[0] - '0');
        else if(islower(teste[1]))
            res = (teste[0] - '0') + (teste[2] - '0');

        cout << res << "\n";
    }


    return 0;
}