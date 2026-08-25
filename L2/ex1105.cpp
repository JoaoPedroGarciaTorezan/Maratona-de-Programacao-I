#include <bits/stdc++.h>

using namespace std;

int main() {

    int B, N, res, D, C, V;
    bool t;
    char teste;
    vector<int> R;

    cin >> B >> N;

    while (B || N)
    {
    
        t = true;
        R.clear();

        for(int i=0; i<B; i++) {
            cin >> res;
            R.push_back(res);
        }

        for(int i=0; i<N; i++) {
            cin >> D >> C >> V;

            R[D-1] -= V;
            R[C-1] += V;
        }

        for(int i=0; i<B; i++) {
            if(R[i] < 0)
                t=false;
        }

        if(t)
            cout << "S\n";
        else cout << "N\n";

        cin >> B >> N;

    }

    return 0;
}