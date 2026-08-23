#include <bits/stdc++.h>

using namespace std;
// #include <bits/stdc++.h>
// using namespace std;

// int main () {
//     unsigned long long n1, n2;

//     while (scanf("%llu %llu", &n1, &n2) != EOF) {
//         unsigned long long res = n1 ^ n2;
//         cout << res << "\n";
//     }

//     return 0;
// }
int main () {

    unsigned long long int n1, n2, res;

    string bin1, bin2, binRes;

    while(scanf("%lld %lld", &n1, &n2) != EOF) {

        while (n1 != 0 && n1 != 1) {
            bin1 += to_string(n1 % 2);
            n1 /= 2;
        }
        if(n1 == 1)
            bin1 += to_string(1);
        else bin1 += to_string(0);
        reverse(bin1.begin(),bin1.end());


        while (n2  != 0 && n2 != 1) {
            bin2 += to_string(n2 % 2);
            n2 /= 2;
        }
        if(n2 == 1)
            bin2 += to_string(1);
        else bin2 += to_string(0);
        reverse(bin2.begin(),bin2.end());

        n1 = stoull(bin1);
        n2 = stoull(bin2);

        res = n1 + n2;

        while (res > 0) {
            if(res % 10 == 2)
                binRes += to_string(0);
            else
                binRes += to_string(res % 10);

            res /= 10;
        }

        int tam = binRes.size()-1;
        for(int i=tam; i >= 0; i--) {
            unsigned int t = (binRes[i] - '0');
            res += pow(2,i) * t;
        }


        cout << res << "\n";

        res=0;
        bin1.clear();
        bin2.clear();
        binRes.clear();

    }


    return 0;
}