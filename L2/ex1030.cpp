#include <bits/stdc++.h>

using namespace std;

int main () {

    int n , k, NC, res, caso=1;
    vector<int> v;

    cin >> NC;

    while(NC--) {

        cin >> n >> k;

        int res = 0; // J(1) = 0
        for (int i = 2; i <= n; i++) {
            res = (res + k) % i;
        }

        printf("Case %d: %d\n", caso, res +1);
        caso++;
    }



    return 0;
}