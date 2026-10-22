#include <bits/stdc++.h>

using namespace std;

int main () {

    int T, i, j;
    cin >> T;

    while(T--) {

        cin >> i >> j;
        int count;
        long long val;
        map<long long, int> mem;
        mem[1] = 1;
        int maior=0;

        for(int k=min(i,j); k<=max(i,j); k++){

            val = k;
            count = 0;
            while(!mem.count(val)){
                if(val%2==0) val /= 2;
                else val = 3*val +1;
                count++;
            }
            mem[k] = count + mem[val];

            maior = max(maior, mem[k]);
            
        }



        cout << i << " " << j << " " << maior << "\n"; 
    }
    return 0;
}