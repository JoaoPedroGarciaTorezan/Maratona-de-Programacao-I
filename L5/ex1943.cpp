#include <bits/stdc++.h>

using namespace std;

int main () {

    int K;

    cin >> K;

    if(K == 1)
        cout << "Top 1\n";
    else if(K <= 3 )
        cout << "Top 3\n";
    else if(K <= 5 )
        cout << "Top 5\n";
    else if(K <= 10 )
        cout << "Top 10\n";
    else if(K <= 25 )
        cout << "Top 25\n";
    else if(K <= 50 )
        cout << "Top 50\n";
    else if(K <= 100 )
        cout << "Top 100\n";
        
    return 0;
}