#include <bits/stdc++.h>

int main() {
	int n, k;
	char s[25];
	char c[25];

	scanf("%d", &n);

	while(n--) {
		scanf("%d", &k);
		scanf("%s", s);
		strcpy(c, s);
		for(int i=1; i<k; i++) {
			scanf("%s", s);
			if(strcmp(c,s))
				strcpy(c, "ingles");	
		}	
		printf("%s\n", c);
	}
	return 0;
}