#include <bits/stdc++.h>

using namespace std;

char decide(string raj, string sel ){

    vector<string> vit = {"tesoura", "papel", "pedra", "lagarto", "spock", "tesoura" ,"lagarto", "papel", "spock", "pedra"};
    vector<string> der = {"papel", "pedra", "lagarto", "spock", "tesoura", "lagarto", "papel", "spock", "pedra", "tesoura"};

    if(raj == sel)
        return 'E';

    for(int i=0; i<10; i++){

        if(vit[i] == raj && der[i] == sel)
            return 'V';

    }

    return 'D';

}

int main () {

    int C;
    string rod;

    cin >> C;
    cin.ignore();

    while(C--) {

        getline(cin, rod);

        stringstream ss(rod);
        string p1, p2;

        ss >> p1 >> p2;

        char des = decide(p1, p2);

        if(des == 'V')
            cout << "rajesh\n";
        else if(des == 'D')
            cout << "sheldon\n";
        else cout << "empate\n";
        

    }
    return 0;
}

