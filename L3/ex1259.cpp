#include <bits/stdc++.h>

using namespace std;

int main () {

    int N, num;
    vector<int> pares;
    vector<int> impares;

    cin >> N;

    while(N--) {

        cin >> num;
        if(num %2 == 0)
            pares.push_back(num);
        else impares.push_back(num);

    }

    sort(pares.begin(), pares.end());
    sort(impares.begin(), impares.end());

    reverse(impares.begin(), impares.end());

    for(int i: pares)
        cout << i << "\n";
    for(int j: impares)
        cout << j << "\n";

    return 0;
}