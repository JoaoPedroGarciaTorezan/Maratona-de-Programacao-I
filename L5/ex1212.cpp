#include <bits/stdc++.h>

using namespace std;

int main () {

    unsigned int i1, i2;

    cin >> i1 >> i2;

    while(i1 || i2){

        string s1, s2;
        int carry=0, count = 0, max;
        s1 = to_string(i1);
        s2 = to_string(i2);

        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());

        if(s1.size() < s2.size()) {
            max = s2.size();
            s1.resize(max, '0');
        }  
        else {
            max = s1.size();
            s2.resize(max, '0');
        }


        for(int i=0; i<max; i++){
            
            if((s1[i] - '0') + (s2[i]-'0') + carry >= 10){
                    count++;
                    carry = 1;
            }
            else if((s1[i] - '0') + (s2[i]-'0') < 10 && carry) 
                carry = 0;
        }

        if(!count)
            cout << "No carry operation.\n";
        else if(count == 1)
            cout << count << " carry operation.\n";
        else cout << count << " carry operations.\n";

        cin >> i1 >> i2;
    }
    return 0;
}