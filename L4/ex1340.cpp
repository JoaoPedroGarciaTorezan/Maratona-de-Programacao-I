#include <bits/stdc++.h>

using namespace std;

int main () {

    int N, op, x;
    vector<int> saida;
    stack<int> pilha;
    queue<int> fila;
    priority_queue<int> fila_p;
    bool stack, queue, p_queue;

    while(cin >> N){

        stack = true;
        queue = true;
        p_queue = true;
        saida.clear();

        for(int i=0; i<N; i++){

            cin >> op >> x;

            if(op == 1){
                pilha.push(x);
                fila.push(x);
                fila_p.push(x);
            }
            if(op == 2){
                if(stack){
                    if(pilha.empty() || pilha.top() != x)
                        stack = false;
                    else pilha.pop();
                }
                if(queue){
                    if(fila.empty() || fila.front() != x)
                        queue = false;
                    else fila.pop();
                }
                if(p_queue) {
                    if(fila_p.empty() || fila_p.top() != x)
                        p_queue = false;
                    else fila_p.pop();
                }
            }
        }


        if(stack || queue || p_queue){ 

            if((stack && queue) || (stack && p_queue) || (queue && p_queue))
                cout << "not sure\n";
            else{
                if(stack)
                    cout << "stack\n";
                if(queue)
                    cout << "queue\n";
                if(p_queue)
                    cout << "priority queue\n";
            }
        }
        else
            cout << "impossible\n";

        while(!pilha.empty())
            pilha.pop();
        while(!fila.empty())
            fila.pop();
        while(!fila_p.empty())
            fila_p.pop();
        

    }
    return 0;
}