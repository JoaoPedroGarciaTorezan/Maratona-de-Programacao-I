#include <bits/stdc++.h>

using namespace std;

int main () {

    int N, count=0;
    
    cin >> N;

    while(N--) {

        for(int i=0; i< 3; i++) {
            count++;
            cout << count << " ";
        }
        count++;
        cout << "PUM\n";

    }
    return 0;
}
