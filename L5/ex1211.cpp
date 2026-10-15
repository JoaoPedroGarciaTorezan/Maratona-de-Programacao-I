#include <bits/stdc++.h>

using namespace std;

int main () {

    int N, count;

    while(cin >> N){

        count=0;
        vector<string> num(N);

        for(int i=0; i<N; i++) {
            cin >> num[i];
        }

        sort(num.begin(), num.end());

        string s1, s2;
        for(int i=0; i<N; i++){
            if(!i){
                s1 = num[i];
            } 
            else{
                s2 = num[i];
                for(int j=0; j<s1.size(); j++){
                    if(s1[j] == s2[j]) count ++;
                    else break;
                }

                s1 = s2;
            }
        }

        cout << count << "\n";
    }
    return 0;
}