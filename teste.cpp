#include <bits/stdc++.h>

using namespace std;


int main() {

	long long int N, S, i;

	
	cin >> N;
	
	while(N)  {
	
		S = 0;
		
	
		for(i=N; i<1000000000; i++) {
		
			S = N / 10;
			S += N % 10;
			if(N % S == 0)
				break;	
			N++;		 
		}
			
		
		cout << N << "\n";
		
		N =0;
		
		cin >> N;
		
		
	}

	
	


   return 0;
}
