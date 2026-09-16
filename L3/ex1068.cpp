#include <bits/stdc++.h>

using namespace std;

int main () {

    string ex;
    bool vazia;
    stack<char> pilha;

    while(getline(cin, ex)) {

        vazia = true;
        for(char p: ex){
            if(p == '(')
                pilha.push(p);
            if(pilha.empty() && p == ')') 
                vazia = false;
            if(p == ')' && !pilha.empty())
                pilha.pop();
        }

        if(pilha.empty() && vazia)
            cout << "correct\n";
        else cout << "incorrect\n";

        while(!pilha.empty())
            pilha.pop();

        ex.clear();
    }



    return 0;
}