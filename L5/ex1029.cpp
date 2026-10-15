#include <bits/stdc++.h>

using namespace std;

int calls;

tuple<int, long long> fibonacci(long long n){
    if(n == 0) return {calls, 0};
    if(n == 1) return {calls, 1};

    calls += 2;
    return {calls, get<1>(fibonacci(n-1)) + get<1>(fibonacci(n-2))};
}

int main () {

    int N;
    int X;

    cin >> N;

    while(N--){

        cin >> X;

        calls = 0;

        auto [v, c]  = fibonacci(X);

        printf("fib(%d) = %d calls = %lld\n", X, v, c);

    }



    return 0;
}