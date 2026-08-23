#include <bits/stdc++.h>

using namespace std;

int main () {

    int q, n_prod, quant;
    float total=0;

    cin >> q;

    for(int i=0; i<q; i++) {
        cin >> n_prod >> quant;
        switch(n_prod) {
            case 1001:
                total += quant*1.5;
                break;
            case 1002:
                total += quant*2.5;
                break;
            case 1003:
                total += quant*3.5;
                break;
            case 1004:
                total += quant*4.5;
                break;
            case 1005:
                total += quant*5.5;
                break;
        }
    }

    cout << fixed << setprecision(2) << total << "\n";

    return 0;
}