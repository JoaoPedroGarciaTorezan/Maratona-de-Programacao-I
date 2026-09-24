#include <bits/stdc++.h>

using namespace std;

int main () {

    int N, temp[1000000], dias=0;
    vector<int> trees, madura;
    
    cin >> N;

    for(int i=0; i<N; i++) {

        cin >> temp[i];
        trees.push_back(temp[i]);

    }
    sort(trees.begin(), trees.end());
    reverse(trees.begin(), trees.end());

    //Plantada arvore no dia i: no dia T+i ela vai estar crescida
    for(int i=1; i<=N; i++) {
        
        madura.push_back(trees[i-1] + i);
    }

    dias += *max_element(madura.begin(), madura.end());
    //festa no dia posterior a ultima arvore crescida
    dias++;

    cout << dias << "\n";
    return 0;
}