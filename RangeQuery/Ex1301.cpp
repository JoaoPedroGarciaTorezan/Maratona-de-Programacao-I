#include <bits/stdc++.h>
#define MAX 100005

using namespace std;

struct segment_tree {

    segment_tree *left, *right;
    int from, to, value;

    segment_tree(int _from, int _to)
        : from(_from), to(_to), left(NULL), right(NULL), value(1) {}
};

segment_tree *build(const vector<int> &arr, int l, int r) {

    if(l > r) return NULL;
    segment_tree *res = new segment_tree(l, r);
    if(l == r){
        res->value = arr[l];
    }
    else {
        int m = (l + r) / 2;
        res->left = build(arr, l, m);
        res->right = build(arr, m + 1, r);
        if(res->left) res->value *= res->left->value;
        if(res->right) res->value *= res->right->value;
    }

    return res;
}

int query(segment_tree *tree, int l, int r){

    if(!tree) return 0;
    if(l <= tree->from && tree->to <= r) return tree->value;
    if(tree->to < l) return 1;
    if(r < tree->from) return 1;
    return query(tree->left, l, r) * query(tree->right, l ,r);
}

int update(segment_tree *tree, int i, int val) {

    if(!tree) return 0;
    if(tree->to < i) return tree->value;
    if(i < tree->from) return tree->value;

    if(tree->from == tree->to && tree->from == i) tree->value = val;
    else tree->value = update(tree->left, i, val) * update(tree->right, i, val);

    return tree->value;

}

// nova: libera a árvore ao fim de cada caso de teste
void destruir(segment_tree *tree) {
    if(!tree) return;
    destruir(tree->left);
    destruir(tree->right);
    delete tree;
}

int main() {
    
    int N, K, i, j, v;
    int p;
    char c;
    vector<int> a;
    segment_tree *t;

    while(cin >> N >> K) {

        a.assign(N + 1, 1);   // tamanho correto, a[0] neutro

        for(int i=1; i<= N; i++) {
            cin >> a[i];
            if(a[i] > 0) a[i] = 1;
            else if(a[i] < 0) a[i] = -1;
            else a[i] = 0;
        }
        t = build(a, 0, N);

        while(K--) {

            cin >> c;

            if(c == 'C') {
                cin >> i >> v;
                if(v > 0) v = 1;
                else if(v < 0) v = -1;
                else v = 0;
                update(t, i, v);
            }
            else {
                cin >> i >> j;
                p = query(t, i, j);
                if(p > 0) cout << "+";
                else if(p < 0) cout << "-";
                else cout << "0";
            }
        }
        cout << "\n";

        destruir(t);
    }

    return 0;
}