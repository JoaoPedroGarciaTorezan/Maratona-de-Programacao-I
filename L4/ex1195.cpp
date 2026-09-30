#include <bits/stdc++.h>

using namespace std;

struct No{
    int valor;
    No *esq, *dir;
};

No* inserir(No* raiz, int x){
    if(raiz==NULL){
        No* novo = new No;
        novo->valor = x;
        novo->esq = NULL;
        novo->dir = NULL;
        return novo;
    }
    if(x<raiz->valor){
        raiz->esq = inserir(raiz->esq, x);
    }
    else{
        raiz->dir = inserir(raiz->dir, x);
    }
    return raiz;
}

void preOrdem(No* raiz, vector<int> &v){
    if(raiz==NULL) return;
    v.push_back(raiz->valor);
    preOrdem(raiz->esq, v);
    preOrdem(raiz->dir, v);
}

void emOrdem(No* raiz, vector<int> &v){
    if(raiz==NULL) return;
    emOrdem(raiz->esq, v);
    v.push_back(raiz->valor);
    emOrdem(raiz->dir, v);
}

void posOrdem(No* raiz, vector<int> &v){
    if(raiz==NULL) return;
    posOrdem(raiz->esq, v);
    posOrdem(raiz->dir, v);
    v.push_back(raiz->valor);
}

void liberar(No* raiz){
    if(raiz==NULL) return;
    liberar(raiz->esq);
    liberar(raiz->dir);
    delete raiz;
}

void imprimir(string nome, vector<int> &v){
    cout << nome;
    for(int i=0; i<v.size(); i++){
        cout << " " << v[i];
    }
    cout << "\n";
}

int main(){
    int c;
    cin >> c;
    for(int caso=1; caso<=c; caso++){
        int n;
        cin >> n;
        No* raiz = NULL;
        while(n--){
            int x;
            cin >> x;
            raiz = inserir(raiz, x);
        }
        vector<int> pre, em, pos;
        preOrdem(raiz, pre);
        emOrdem(raiz, em);
        posOrdem(raiz, pos);
        cout << "Case " << caso << ":\n";
        imprimir("Pre.:", pre);
        imprimir("In..:", em);
        imprimir("Post:", pos);
        cout << "\n";
        liberar(raiz);
    }

    return 0;
}